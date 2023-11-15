#ifndef S21_A1_MAZE_CAVE_H
#define S21_A1_MAZE_CAVE_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <fstream>

#define COUNT_OF_GENERATION     70

#define LOWER_LIMIT_OF_LIVE     5
#define UPPER_LIMIT_OF_LIVE     8
#define LOWER_LIMIT_OF_BORN     2
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

public:
Cave(const std::size_t&, const std::size_t&, const value_type&);
void InitializeRandomCave();
void GenerateCave();
value_type CountLiveNeighbours(const std::size_t&, const std::size_t);
void print();
friend std::istream& operator>>(std::istream& is, Cave& cave);
};
} // namespace s21

#endif //S21_A1_MAZE_CAVE_H