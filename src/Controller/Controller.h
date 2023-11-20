#ifndef S21_A1_MAZE_CONTROLLER_CONTROLLER_H
#define S21_A1_MAZE_CONTROLLER_CONTROLLER_H
#include "../Model/Model.h"

namespace s21 {
class Controller {
 public:
  Controller(std::unique_ptr<Model> model_);
  ~Controller() = default;
  Controller(const Controller&) = delete;
  Controller(Controller&&) noexcept = default;
  Controller& operator=(Controller&&) noexcept = delete;
  bool SaveToFileMaze(const std::string& path) const;
  bool SaveToFileCave(const std::string& path) const;
  bool ReadFromFileMaze(const std::string& path);
  bool GenerateMaze(const size_t&, const size_t&);
  bool SolvingMaze(const std::pair<std::size_t, std::size_t>&,
                   const std::pair<const std::size_t, const std::size_t>&);
  std::pair<std::pair<matrix, matrix>, std::vector<std::pair<size_t, size_t>>>
  get_data_maze() const;
  pair get_paramets() const noexcept;
  pair get_paramters_cave() const noexcept;
  cave_type get_data_cave() const noexcept;
  bool GenerateCave(const value_type& rows,const value_type& cols, const value_type& life_chance, const std::size_t& l_d, const std::size_t& l_u, const std::size_t& b_d, const std::size_t& b_u) {return model->GenerateCave(rows,cols,life_chance,l_d,l_u, b_d, b_u); }
  bool ReadFromFileCave(const std::string& path, const std::size_t& l_d, const std::size_t& l_u, const std::size_t& b_d, const std::size_t& b_u);
  std::vector<cave_type> GetIterators() { return model->GetIterators(); }

 private:
  std::unique_ptr<Model> model;
};
}  // namespace s21

#endif  // S21_A1_MAZE_CONTROLLER_CONTROLLER_H
