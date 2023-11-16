#include "Cave.h"

namespace s21 {

CaveStruct::CaveStruct(const std::size_t& width, const std::size_t& height) :
    data(width + 1, std::vector<value_type>(height + 1))
{}

Cave::Cave(const std::size_t& width, const std::size_t& height, const value_type& live_chance) : 
    live_chance_(live_chance),
    live_limit(std::make_pair(LOWER_LIMIT_OF_LIVE, UPPER_LIMIT_OF_LIVE)),
    born_limit(std::make_pair(LOWER_LIMIT_OF_BORN, UPPER_LIMIT_OF_BORN)),
    cave_(CaveStruct(width, height)),
    temp_cave_(CaveStruct(width, height))
    {}

void Cave::InitializeRandomCave() {
    std::default_random_engine re(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(0, 100);
    for (std::size_t i = 1; i < cave_.data.size() - 1; ++i) {
        for (std::size_t j = 1; j < cave_.data[i].size() - 1; ++j) {
            value_type chance = dist(re);
            cave_.data[i][j] = chance <= live_chance_ ? 1 : 0;
        }
    }
}

void Cave::GenerateCave() {
    value_type generation = 0;
    temp_cave_ = cave_;
    while(generation++ != COUNT_OF_GENERATION) {
        for (std::size_t i = 1; i != cave_.data.size() - 1; ++i) {
            for (std::size_t j = 1; j != cave_.data[i].size() - 1; ++j) {
                value_type count_of_living_neighbors = CountLiveNeighbours(i, j);
                if( (i, j) == 1 && count_of_living_neighbors < live_limit.first || count_of_living_neighbors > live_limit.second) temp_cave_.data[i][j] = 0;
                else if( (i, j) == 0 && count_of_living_neighbors >= born_limit.first && count_of_living_neighbors <= born_limit.second) temp_cave_.data[i][j] = 1; 
            }
        }
        std::copy(temp_cave_.data.begin(), temp_cave_.data.end(), cave_.data.begin());
    }
}
value_type Cave::CountLiveNeighbours(const std::size_t& rows_, const std::size_t cols_) {
    value_type count = 0;
    for (auto indices : {
        std::make_pair(rows_, cols_ - 1),
        std::make_pair(rows_ - 1, cols_ - 1),
        std::make_pair(rows_ - 1, cols_),
        std::make_pair(rows_ - 1, cols_ + 1),
        std::make_pair(rows_, cols_ + 1),
        std::make_pair(rows_ + 1, cols_ + 1),
        std::make_pair(rows_ + 1, cols_),
        std::make_pair(rows_ + 1, cols_ - 1)
    }) {
        if (operator()(indices.first, indices.second) != 0) ++count;
    }
    return count;
}

void Cave::print() {
    for(size_t i = 0; i < cave_.data.size(); ++i) {
        for(size_t j = 0; j < cave_.data[i].size(); ++j) {
            std::cout << (cave_.data[i][j] == 1 ? '*' : ' ') << ' ';
        }
        std::cout << '\n';
    }
}

std::istream& operator>>(std::istream& is, CaveStruct& cave) {
    for (std::size_t i = 1; i < cave.data.size() - 1; ++i) {
        for (std::size_t j = 1; j < cave.data[i].size() - 1; ++j) is >> cave.data[i][j];
    }
return is;
}

int CaveStruct::operator()(std::size_t rows, std::size_t cols) const {
    if(width_ >= rows || height_ >= cols) return 1;
    return data[rows][cols];
}

int& CaveStruct::operator()(std::size_t rows, std::size_t cols) {
    return data[rows][cols];
}
}   //namespace s21

int main() {
    s21::Cave cave(50,50, 50);
    cave.InitializeRandomCave();
    //std::fstream fs;
    //fs.open("t.txt");
    //fs >> cave;
    cave.GenerateCave();
    cave.print();
}