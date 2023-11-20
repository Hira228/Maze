#ifndef S21_A1_MAZE_CAVE_H
#define S21_A1_MAZE_CAVE_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <fstream>
#include <algorithm>

#define COUNT_OF_GENERATION     40

namespace s21 {
using value_type = int;
using cave_type = std::vector<std::vector<value_type>>;
using limit_type = std::pair<value_type, value_type>;

class Cave {
private:
value_type weight_;
value_type height_;
cave_type temp_cave_;
limit_type live_limit;
limit_type born_limit;
std::vector<cave_type> iterators;
value_type live_chance_;
public:
cave_type cave_;
Cave();
Cave(const std::size_t&, const std::size_t&, const std::size_t& l_d, const std::size_t& l_u, const std::size_t& b_d, const std::size_t& b_u, const value_type& = 49);
void InitializeRandomCave();
bool GenerateCave();
value_type CountLiveNeighbours(const std::size_t&, const std::size_t);
void print();
friend std::istream& operator>>(std::istream& is, Cave& cave);
friend std::ostream& operator<<(std::ostream& os, const Cave& cave);
bool GoodCave() const;
value_type GetWeight() const { return weight_; }
value_type GetHeight() const { return height_; }
cave_type  GetCaveData() const { return cave_; } 
std::vector<cave_type> GetIterators() { return iterators; }
void SetParameters(const value_type& rows,const value_type& cols, const value_type& life_chance, const std::size_t& l_d, const std::size_t& l_u, const std::size_t& b_d, const std::size_t& b_u) {
    weight_ = rows;
    height_ = cols;
    live_chance_ = life_chance;
    live_limit.first = l_d;
    live_limit.second = l_u;
    born_limit.first = b_d;
    born_limit.second = b_u;}   
};
} // namespace s21

#endif //S21_A1_MAZE_CAVE_H
