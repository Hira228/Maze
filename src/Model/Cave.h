#ifndef S21_A1_MAZE_CAVE_H
#define S21_A1_MAZE_CAVE_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <fstream>
#include <algorithm>

#define COUNT_OF_GENERATION     100

#define LOWER_LIMIT_OF_LIVE     4
#define UPPER_LIMIT_OF_LIVE     8
#define LOWER_LIMIT_OF_BORN     5
#define UPPER_LIMIT_OF_BORN     8

namespace s21 {
using value_type = int;
using cave_type = std::vector<std::vector<value_type>>;
using limit_type = std::pair<value_type, value_type>;

class Cave {
private:
cave_type cave_;
cave_type temp_cave_;
const value_type live_chance_;
limit_type live_limit;
limit_type born_limit;
value_type weight_;
value_type height_;

public:
Cave();
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
};
} // namespace s21

#endif //S21_A1_MAZE_CAVE_H
