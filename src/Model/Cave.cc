#include "Cave.h"

namespace s21 {
Cave::Cave() : weight_(0), height_(0), live_chance_(50) {}

Cave::Cave(const std::size_t& width, const std::size_t& height, const value_type& live_chance) : 
    cave_(weight_ + 2, std::vector<value_type>(height_ + 2)),
    weight_(width),
    height_(height),
    live_chance_(live_chance)
    {
                for (int i = 0; i < weight_ + 2; ++i) {
            for (int j = 0; j < height_ + 2; ++j) if (i == 0 || i == weight_ + 1 || j == 0 || j == height_ + 1) cave_[i][j] = 1;
        }
    }

void Cave::InitializeRandomCave() {
    std::default_random_engine re(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(0, 100);

    for (std::size_t i = 1; i < cave_.size() - 1; ++i) {
        for (std::size_t j = 1; j < cave_[i].size() - 1; ++j) {
            value_type chance = dist(re);
            cave_[i][j] = chance <= live_chance_ ? 1 : 0;
        }
    }
}

void Cave::GenerateCave() {
    //cave_type cave__(weight_ + 2, std::vector<value_type>(height_ + 2));
    //{
        // for (int i = 0; i < weight_ + 2; ++i) {
        //     for (int j = 0; j < height_ + 2; ++j) if (i == 0 || i == weight_ + 1 || j == 0 || j == height_ + 1) cave__[i][j] = 1;
        // }
    //}
    value_type generation = 0;
    //cave_ = std::move(cave__);
    //InitializeRandomCave();
    temp_cave_ = cave_;
    while(generation++ != COUNT_OF_GENERATION) {
        for (std::size_t i = 1; i != cave_.size() - 1; ++i) {
            for (std::size_t j = 1; j != cave_[i].size() - 1; ++j) {
                value_type count_of_living_neighbors = CountLiveNeighbours(i, j);
                if(cave_[i][j] == 1 && (count_of_living_neighbors < live_limit.first || count_of_living_neighbors > live_limit.second)) temp_cave_[i][j] = 0;
                else if(cave_[i][j] == 0 && (count_of_living_neighbors > born_limit.first && count_of_living_neighbors <= born_limit.second)) temp_cave_[i][j] = 1; 
            }
        }
        std::copy(temp_cave_.begin(), temp_cave_.end(), cave_.begin());
    }
}
value_type Cave::CountLiveNeighbours(const std::size_t& rows_, const std::size_t cols_) {
    value_type count = 0;
    for (auto item : {
        cave_[rows_][cols_ - 1],
        cave_[rows_][cols_ + 1],
        cave_[rows_ - 1][cols_],
        cave_[rows_ + 1][cols_],
        cave_[rows_ - 1][cols_ - 1],
        cave_[rows_ - 1][cols_ + 1],
        cave_[rows_ + 1][cols_ - 1],
        cave_[rows_ + 1][cols_ + 1]
    }
)   if (item != 0) ++count;
return count;
}

void Cave::print() {
    for(size_t i = 0; i < cave_.size(); ++i) {
        for(size_t j = 0; j < cave_[i].size(); ++j) {
            std::cout << (cave_[i][j] == 1 ? '*' : ' ') << ' ';
        }
        std::cout << '\n';
    }
}

std::istream& operator>>(std::istream& is, Cave& cave) {
    for (auto& vec : cave.cave_) { 
        for (auto & elem : vec) is >> elem;
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const Cave& cave) {
    for (const auto& vec : cave.cave_) { 
        for (const auto& elem : vec) 
            os << elem << ' ';
        os << '\n';
    }
    return os;
}

bool Cave::GoodCave() const {
    if (weight_ <= 0 || height_ <= 0 || weight_ > 50 || height_ > 50) return false;
    for (const auto& vec: cave_) {
        if (!std::all_of(vec.begin() + 1, vec.end() - 1, [](const auto& elem){ return elem == 1 || elem == 0; })) return false;
    }
    return true;
}


}   //namespace s21
