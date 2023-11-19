#include "Maze.h"

namespace s21 {
Maze::Maze() : parameters(std::make_pair(0, 0)) {}
Maze::Maze(const std::size_t& rows, const std::size_t& cols)
    : parameters(std::make_pair(rows, cols)) {}
Maze::Maze(const std::size_t& rows, const std::size_t& cols,
           const matrix& value_vertical_, const matrix& value_horizontal_)
    : parameters(std::make_pair(rows, cols)),
      value_vertical(value_vertical_),
      value_horizontal(value_horizontal_) {}
void Maze::set_parameters(const std::size_t& rows, const std::size_t& cols) {
  parameters.first = rows;
  parameters.second = cols;
}

bool Maze::IsGoodMaze() const {
  if (parameters.first == 0 or parameters.second == 0 or
      parameters.first > 50 or parameters.second > 50)
    return false;
  for (const auto& vec : value_vertical) {
    if (!std::all_of(vec.begin(), vec.end(),
                     [](const auto& elem) { return elem == 0 or elem == 1; }))
      return false;
  }
  for (const auto& vec : value_horizontal) {
    if (!std::all_of(vec.begin(), vec.end(),
                     [](const auto& elem) { return elem == 0 or elem == 1; }))
      return false;
  }
  return true;
}
void Maze::InitValueMatrix() noexcept {
  std::vector<size_t> temp_vec(parameters.second, 0);
  for (size_t i = 0; i != parameters.first; ++i) {
    value_vertical.push_back(temp_vec);
    value_horizontal.push_back(temp_vec);
  }
  for (size_t i = 0; i != parameters.first; ++i) {
    value_vertical[i][parameters.second - 1] = 1;
  }
  for (size_t i = 0; i != parameters.second; i++) {
    value_horizontal[parameters.first - 1][i] = 1;
  }
}
std::size_t Maze::get_rand() noexcept {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distribution(0, 1);
  // std::vector<std::size_t> v =
  // {0,1,0,0,1,1,0,1,0,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,0,0,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,1,1,0};
  return distribution(gen);
  // return v[k++];
}
void Maze::InitSetNumber(std::vector<std::size_t>& vec) noexcept {
  for (; count != parameters.second + 1; ++count) {
    vec.push_back(count);
  }
}
void Maze::VerticalRoad(std::vector<std::size_t>& vec) noexcept {
  for (std::size_t i = 0; i != parameters.second - 1; ++i) {
    std::size_t temp = get_rand();
    if (temp) {
      value_vertical[current_row][i] = 1;
    } else {
      if (vec[i + 1] == vec[i]) {
        value_vertical[current_row][i] = 1;
      } else {
        std::for_each(vec.begin(), vec.end(),
                      [const_val = std::cref(vec[i]),
                       change_val = std::cref(vec[i + 1])](auto& x) {
                        if (x == change_val) x = const_val;
                      });
      }
    }
  }
}
bool Maze::CheckCountHorizontal(const std::vector<std::size_t>& vec,
                                const std::size_t& val) const noexcept {
  std::size_t count_temp = -1;
  for (std::size_t i = 0; i < vec.size(); i++) {
    if ((vec[i] == val) && (!value_horizontal[current_row][i])) ++count_temp;
  }
  return count_temp ? true : false;
}
void Maze::HorizontalRoad(std::vector<std::size_t>& vec) noexcept {
  for (std::size_t i = 0; i != parameters.second; ++i) {
    std::size_t temp = get_rand();
    if (temp) {
      if (CheckCountHorizontal(vec, vec[i]))
        value_horizontal[current_row][i] = 1;
    }
  }
}
void Maze::ChangeSetNumber(std::vector<std::size_t>& vec) noexcept {
  for (std::size_t i = 0; i != parameters.second; ++i) {
    if (value_horizontal[current_row][i]) {
      vec[i] = count;
      ++count;
    }
  }
  ++current_row;
}
void Maze::HandlerLast(std::vector<std::size_t>& vec) noexcept {
  for (std::size_t i = 0; i != parameters.second - 1; ++i) {
    if (vec[i] != vec[i + 1]) {
      value_vertical[current_row - 1][i] = 0;
      std::for_each(vec.begin(), vec.end(),
                    [const_val = std::cref(vec[i]),
                     change_val = std::cref(vec[i + 1])](auto x) {
                      if (x == change_val) x = const_val;
                    });
    }
  }
}

bool Maze::CheckStepByDirection(
    enum Direction direction_,
    const std::pair<const int&, const int&> position) const {
  if (direction_ == Direction::kLeft) {
    return (position.first > -1 &&
            !value_vertical[position.second][position.first])
               ? true
               : false;
  }
  if (direction_ == Direction::kUp) {
    return (position.second > -1 &&
            !value_horizontal[position.second][position.first])
               ? true
               : false;
  }
  if (direction_ == Direction::kRight) {
    return (position.first < static_cast<int>(parameters.second) &&
            !value_vertical[position.second][position.first - 1])
               ? true
               : false;
  }
  if (direction_ == Direction::kDown) {
    return (position.second < static_cast<int>(parameters.first) &&
            !value_horizontal[position.second - 1][position.first])
               ? true
               : false;
  }
  return true;
}

void Maze::WaveAlgorithm(
    const std::pair<const std::size_t, const std::size_t>& from,
    const std::pair<const std::size_t, const std::size_t>& to) {
  matrix way(parameters.first, std::vector<std::size_t>(parameters.second, 0));
  way[from.second][from.first] = 1;
  std::size_t step = 1;
  Wave wave(step, from);
  Waves old_wave(wave);
  while (!CheckEnd(way, to)) {
    Waves waves;
    ++step;
    for (const auto& vec : old_wave.waves) {
      for (auto [bool_value, step_value, position] :
           {Wave(step, vec.position.first - 1, vec.position.second,
                 CheckStepByDirection(Direction::kLeft,
                                      std::make_pair(vec.position.first - 1,
                                                     vec.position.second))),
            Wave(step, vec.position.first, vec.position.second - 1,
                 CheckStepByDirection(Direction::kUp,
                                      std::make_pair(vec.position.first,
                                                     vec.position.second - 1))),
            Wave(step, vec.position.first + 1, vec.position.second,
                 CheckStepByDirection(Direction::kRight,
                                      std::make_pair(vec.position.first + 1,
                                                     vec.position.second))),
            Wave(step, vec.position.first, vec.position.second + 1,
                 CheckStepByDirection(
                     Direction::kDown,
                     std::make_pair(vec.position.first,
                                    vec.position.second + 1)))}) {
        if (bool_value && !way[position.second][position.first]) {
          waves.waves.emplace_back(step_value, position);
          way[position.second][position.first] = step_value;
        }
      }
    }
    old_wave = std::move(waves);
  }
  this->way = std::move(way);
}

void Maze::SolutionWave(
    const std::pair<std::size_t, std::size_t>& from,
    const std::pair<const std::size_t, const std::size_t>& to) {
  path.clear();
  auto [x, y] = from;
  path.emplace_back(x, y);
  while ((x != to.first) or (y != to.second)) {
    if (CheckStepByDirection(Direction::kLeft,
                             std::make_pair<int, int>(x - 1, y)) &&
        way[y][x - 1] + 1 == way[y][x]) {
      --x;
    } else if (CheckStepByDirection(Direction::kUp,
                                    std::make_pair<int, int>(x, y - 1)) &&
               way[y - 1][x] + 1 == way[y][x]) {
      --y;
    } else if (CheckStepByDirection(Direction::kRight,
                                    std::make_pair<int, int>(x + 1, y)) &&
               way[y][x + 1] + 1 == way[y][x]) {
      ++x;
    } else if (CheckStepByDirection(Direction::kDown,
                                    std::make_pair<int, int>(x, y + 1)) &&
               way[y + 1][x] + 1 == way[y][x]) {
      ++y;
    } else
      return;
    path.emplace_back(x, y);
  }
}

std::vector<std::pair<size_t, size_t>> Maze::get_path() const noexcept {
  return path;
}

bool Maze::CheckEnd(
    const matrix& map,
    const std::pair<const std::size_t, const std::size_t>& to) const {
  return map[to.second][to.first];
}

void Maze::clear() {
  count = 1;
  current_row = 0;
  value_vertical.clear();
  value_horizontal.clear();
}
std::pair<std::pair<matrix, matrix>, std::vector<std::pair<size_t, size_t>>>
Maze::get_data() const {
  return std::make_pair(std::make_pair(value_vertical, value_horizontal), path);
}
pair Maze::get_paramets() const { return parameters; }

std::ostream& operator<<(std::ostream& out, const Maze& Maze) {
  out << "====Vertical====\n";
  for (std::size_t i = 0; i < Maze.value_vertical.size(); ++i) {
    for (std::size_t j = 0; j < Maze.value_vertical[i].size(); ++j) {
      out << Maze.value_vertical[i][j] << " ";
    }
    out << "\n";
  }
  out << "====Horizontal====\n";
  for (std::size_t i = 0; i < Maze.value_horizontal.size(); ++i) {
    for (std::size_t j = 0; j < Maze.value_horizontal[i].size(); ++j) {
      out << Maze.value_horizontal[i][j] << " ";
    }
    out << "\n";
  }
  return out;
}

bool Maze::SolvingMaze(
    const std::pair<const std::size_t, const std::size_t>& to,
    const std::pair<const std::size_t, const std::size_t>& from) {
  if (CheckSizePoint(to, from)) {
    WaveAlgorithm(to, from);
    SolutionWave(from, to);
  } else
    return false;
  return true;
}

bool Maze::CheckSizePoint(const pair& to, const pair& from) {
  return (to.first > parameters.first - 1 or
          to.second > parameters.second - 1 or
          from.first > parameters.first - 1 or
          from.second > parameters.second - 1)
             ? false
             : true;
}

/// @brief Checks input rows and cols and generate new maze
/// @return If invalid input data - false, True - New maze is generated
bool Maze::GenerateMaze() {
  clear();
  if (!IsGoodMaze()) return false;
  std::vector<std::size_t> set_number;
  InitValueMatrix();
  InitSetNumber(set_number);
  for (std::size_t i = 0; i != parameters.first; i++) {
    VerticalRoad(set_number);
    HorizontalRoad(set_number);
    ChangeSetNumber(set_number);
  }
  HandlerLast(set_number);
  return true;
}
matrix Maze::get_way() const noexcept { return way; }

Wave::Wave(const std::size_t& step_value_, const std::pair<int, int>& position_)
    : step_value(step_value_), position(position_) {}
Wave::Wave(const std::size_t& step_value_, const int& x_, const int& y_,
           const bool& val)
    : value(val), step_value(step_value_), position(std::make_pair(x_, y_)) {}
Waves::Waves(const Wave& wave_) : waves(1, wave_) {}
}  // namespace s21