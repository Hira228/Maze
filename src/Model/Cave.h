#ifndef S21_A1_MAZE_CAVE_H
#define S21_A1_MAZE_CAVE_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <fstream>
#include <algorithm>

#define COUNT_OF_GENERATION     100

namespace s21 {
using value_type = int;
using cave_type = std::vector<std::vector<value_type>>;
using limit_type = std::pair<value_type, value_type>;

class Cave {
private:
cave_type temp_cave_;
value_type live_chance_;
limit_type live_limit;
limit_type born_limit;
value_type weight_;
value_type height_;

value_type LOWER_LIMIT_OF_LIVE = 1;  
value_type UPPER_LIMIT_OF_LIVE = 8; 
value_type LOWER_LIMIT_OF_BORN = 6;
value_type UPPER_LIMIT_OF_BORN = 8;

public:
Cave();
cave_type cave_;
Cave(const std::size_t&, const std::size_t&, const value_type& = 49);
void InitializeRandomCave();
void GenerateCave();
value_type CountLiveNeighbours(const std::size_t&, const std::size_t);
void print();
friend std::istream& operator>>(std::istream& is, Cave& cave);
friend std::ostream& operator<<(std::ostream& os, const Cave& cave);
bool GoodCave() const;
value_type GetWeight() const { return weight_; }
value_type GetHeight() const { return height_; }
cave_type  GetCaveData() const { return cave_; } 
void SetParameters(const value_type& rows,const value_type& cols, const value_type& life_chance, std::pair<value_type, value_type> live, std::pair<value_type, value_type> born) {
    weight_ = rows;
    height_ = cols;
    live_chance_ = life_chance;
    LOWER_LIMIT_OF_LIVE = live.first;
    UPPER_LIMIT_OF_LIVE = live.second;
    LOWER_LIMIT_OF_BORN = born.first;
    UPPER_LIMIT_OF_BORN = born.second;}   
};
} // namespace s21

#endif //S21_A1_MAZE_CAVE_H
