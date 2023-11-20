#ifndef S21_A1_MAZE_MODEL_MAZE_H
#define S21_A1_MAZE_MODEL_MAZE_H

#include <algorithm>
#include <iostream>
#include <ostream>
#include <random>
#include <utility>
#include <vector>
namespace s21 {
enum class Direction { kLeft = 0, kUp, kRight, kDown, kStop };
using matrix = std::vector<std::vector<std::size_t>>;
using pair = std::pair<std::size_t, std::size_t>;
class Maze {
public:
  Maze();
  Maze(const std::size_t &, const std::size_t &);
  Maze(const std::size_t &, const std::size_t &, const matrix &,
       const matrix &);
  ~Maze() = default;
  Maze(const Maze &) = default;
  Maze(Maze &&) noexcept = default;
  Maze &operator=(Maze &&) noexcept = default;
  void set_parameters(const std::size_t &, const std::size_t &);
  bool GenerateMaze();
  matrix get_way() const noexcept;
  std::vector<std::pair<size_t, size_t>> get_path() const noexcept;
  friend std::ostream &operator<<(std::ostream &, const Maze &);
  bool IsGoodMaze() const;
  std::pair<std::pair<matrix, matrix>, std::vector<std::pair<size_t, size_t>>>
  get_data() const;
  pair get_paramets() const;
  bool SolvingMaze(const std::pair<const std::size_t, const std::size_t> &,
                   const std::pair<const std::size_t, const std::size_t> &);

private:
  pair parameters;
  matrix value_vertical;
  matrix value_horizontal;
  matrix way;
  std::vector<std::pair<size_t, size_t>> path;
  std::size_t count = 1;
  std::size_t current_row = 0;
  std::size_t get_rand() noexcept;
  void InitValueMatrix() noexcept;
  void InitSetNumber(std::vector<std::size_t> &) noexcept;
  void ChangeSetNumber(std::vector<std::size_t> &) noexcept;
  void HorizontalRoad(std::vector<std::size_t> &) noexcept;
  void HandlerLast(std::vector<std::size_t> &) noexcept;
  void VerticalRoad(std::vector<std::size_t> &) noexcept;
  bool CheckCountHorizontal(const std::vector<std::size_t> &,
                            const std::size_t &) const noexcept;
  bool CheckEnd(const matrix &,
                const std::pair<const std::size_t, const std::size_t> &) const;
  bool CheckStepByDirection(enum Direction,
                            const std::pair<const int &, const int &>) const;
  void clear();
  bool CheckSizePoint(const pair &, const pair &);
  // Принимать x = 2, y = 1 ==> В человеческом ввиде 3,2. X -> Y down
  void WaveAlgorithm(const std::pair<const std::size_t, const std::size_t> &,
                     const std::pair<const std::size_t, const std::size_t> &);
  void SolutionWave(const std::pair<std::size_t, std::size_t> &,
                    const std::pair<const std::size_t, const std::size_t> &);
};

class Wave {
public:
  Wave() = default;
  // Wave(const std::size_t&,const std::pair<std::size_t,std::size_t>&);
  Wave(const std::size_t &, const std::pair<int, int> &);
  Wave(const std::size_t &, const int &, const int &, const bool &);
  // vector value/pair(x,y)
  // std::vector<std::pair<std::size_t,std::pair<std::size_t,std::size_t>>>
  // wave;
  bool value = true;
  std::size_t step_value;
  std::pair<int, int> position;
};

class Waves {
public:
  Waves() = default;
  Waves(const Wave &);
  std::vector<Wave> waves;
};

} // namespace s21

#endif // S21_A1_MAZE_MODEL_MAZE_H
