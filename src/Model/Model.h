#ifndef S21_A1_MAZE_MODEL_MODEL_H
#define S21_A1_MAZE_MODEL_MODEL_H
#include <memory>
#include <thread>

#include "FileManager.h"
#include "Maze.h"

namespace s21 {
class Model {
public:
  Model();
  ~Model() = default;
  Model(const Model &) = delete;
  Model(Model &&) noexcept = default;
  Model &operator=(Model &&) noexcept = default;
  bool SaveToFileMaze(const std::string &path) const;
  bool SaveToFileCave(const std::string &path) const;
  bool ReadFromFileMaze(const std::string &path);
  bool GenerateMaze(const size_t &, const size_t &);
  bool SolvingMaze(const std::pair<std::size_t, std::size_t> &,
                   const std::pair<const std::size_t, const std::size_t> &);
  std::pair<std::pair<matrix, matrix>, std::vector<std::pair<size_t, size_t>>>
  get_data_maze() const;
  pair get_paramets() const noexcept;
  cave_type get_data_cave() const noexcept;
  pair get_param_cave() const;
  bool GenerateCave(const value_type &rows, const value_type &cols,
                    const value_type &life_chance, const std::size_t &l_d,
                    const std::size_t &l_u, const std::size_t &b_d,
                    const std::size_t &b_u);
  bool ReadFromFileCave(const std::string &path, const std::size_t &l_d,
                        const std::size_t &l_u, const std::size_t &b_d,
                        const std::size_t &b_u);
  std::vector<cave_type> GetIterators() { return cave->GetIterators(); }

private:
  std::unique_ptr<Maze> maze;
  std::unique_ptr<Cave> cave;
};
} // namespace s21

#endif // S21_A1_MAZE_MODEL_MODEL_H
