#include "unit_test.h"
namespace s21 {

template <typename T>
bool CheckSizeMazeFile(const std::string &path, const T &rows, const T &cols) {
  std::ifstream fin(path);
  if (!fin.is_open()) {
    return false;
  }
  T rows_, cols_;
  fin >> rows_ >> cols_;
  fin.close();
  return rows_ == rows && cols_ == cols;
}

template <typename T>
bool CheckSizeMaze(const Controller &controller, const T &rows_,
                   const T &cols_) {
  auto [rows, cols] = controller.get_paramets();
  return rows_ == rows && cols_ == cols;
}

template <typename T>
void CheckPath(const std::vector<std::pair<T, T>> &answer,
               const std::vector<std::pair<T, T>> &expect) {
  EXPECT_EQ(answer.size(), expect.size());
  for (std::size_t i = 0; i != expect.size(); ++i) {
    EXPECT_TRUE(answer[i].first == expect[i].first &&
                answer[i].second == expect[i].second);
  }
}

TEST(GeneterationMaze, test_generation_maze_4_4) {
  Controller controller(std::make_unique<typename s21::Model>());
  controller.GenerateMaze(4, 4);
  EXPECT_TRUE(controller.SaveToFileMaze("./Temp/test_maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMazeFile<>("./Temp/test_maze_4_4.txt", 4, 4));
}
TEST(GeneterationMaze, test_generation_maze_10_10) {
  Controller controller(std::make_unique<typename s21::Model>());
  controller.GenerateMaze(10, 10);
  EXPECT_TRUE(controller.SaveToFileMaze("./Temp/test_maze_10_10.txt"));
  EXPECT_TRUE(CheckSizeMazeFile<>("./Temp/test_maze_10_10.txt", 10, 10));
}
TEST(GeneterationMaze, test_generation_maze_25_25) {
  Controller controller(std::make_unique<typename s21::Model>());
  controller.GenerateMaze(25, 25);
  EXPECT_TRUE(controller.SaveToFileMaze("./Temp/test_maze_25_25.txt"));
  EXPECT_TRUE(CheckSizeMazeFile<>("./Temp/test_maze_25_25.txt", 25, 25));
}
TEST(GeneterationMaze, test_generation_maze_40_10) {
  Controller controller(std::make_unique<typename s21::Model>());
  controller.GenerateMaze(40, 10);
  EXPECT_TRUE(controller.SaveToFileMaze("./Temp/test_maze_40_10.txt"));
  EXPECT_TRUE(CheckSizeMazeFile<>("./Temp/test_maze_40_10.txt", 40, 10));
}
TEST(GeneterationMaze, test_generation_maze_50_50) {
  Controller controller(std::make_unique<typename s21::Model>());
  controller.GenerateMaze(50, 50);
  EXPECT_TRUE(controller.SaveToFileMaze("./Temp/test_maze_50_50.txt"));
  EXPECT_TRUE(CheckSizeMazeFile<>("./Temp/test_maze_50_50.txt", 50, 50));
}
TEST(GeneterationMaze, test_generation_maze_error) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_FALSE(controller.GenerateMaze(-50, 50));
  EXPECT_FALSE(controller.SaveToFileMaze("./Temp/test_maze_-50_50.txt"));
}
TEST(GeneterationMaze, test_generation_maze_error_2) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_FALSE(controller.GenerateMaze(0, 50));
  EXPECT_FALSE(controller.SaveToFileMaze("./Temp/test_maze_0_50.txt"));
}
TEST(GeneterationMaze, test_generation_maze_error_3) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_FALSE(controller.GenerateMaze(0, 0));
  EXPECT_FALSE(controller.SaveToFileMaze("./Temp/test_maze_0_0.txt"));
}
TEST(GeneterationMaze, test_generation_maze_error_4) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_FALSE(controller.GenerateMaze(51, 50));
  EXPECT_FALSE(controller.SaveToFileMaze("./Temp/test_maze_51_50.txt"));
}
TEST(MazeSolution, test_solution_1) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.ReadFromFileMaze("./Example/maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMaze<>(controller, 4u, 4u));
  EXPECT_TRUE(
      controller.SolvingMaze(std::make_pair<std::size_t, std::size_t>(0u, 0u),
                             std::make_pair<std::size_t, std::size_t>(3u, 3u)));
  std::vector<std::pair<std::size_t, std::size_t>> true_path{
      std::make_pair<std::size_t, std::size_t>(0u, 0u),
      std::make_pair<std::size_t, std::size_t>(1u, 0u),
      std::make_pair<std::size_t, std::size_t>(2u, 0u),
      std::make_pair<std::size_t, std::size_t>(3u, 0u),
      std::make_pair<std::size_t, std::size_t>(3u, 1u),
      std::make_pair<std::size_t, std::size_t>(3u, 2u),
      std::make_pair<std::size_t, std::size_t>(2u, 2u),
      std::make_pair<std::size_t, std::size_t>(2u, 3u),
      std::make_pair<std::size_t, std::size_t>(3u, 3u)};
  CheckPath(controller.get_data_maze().second, true_path);
}

TEST(MazeSolution, test_solution_2) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.ReadFromFileMaze("./Example/maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMaze<>(controller, 4u, 4u));
  EXPECT_TRUE(
      controller.SolvingMaze(std::make_pair<std::size_t, std::size_t>(0u, 0u),
                             std::make_pair<std::size_t, std::size_t>(0u, 1u)));
  std::vector<std::pair<std::size_t, std::size_t>> true_path{
      std::make_pair<std::size_t, std::size_t>(0u, 0u),
      std::make_pair<std::size_t, std::size_t>(1u, 0u),
      std::make_pair<std::size_t, std::size_t>(1u, 1u),
      std::make_pair<std::size_t, std::size_t>(1u, 2u),
      std::make_pair<std::size_t, std::size_t>(0u, 2u),
      std::make_pair<std::size_t, std::size_t>(0u, 1u),
  };
  CheckPath(controller.get_data_maze().second, true_path);
}

TEST(MazeSolution, test_solution_3) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.ReadFromFileMaze("./Example/maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMaze<>(controller, 4u, 4u));
  EXPECT_TRUE(
      controller.SolvingMaze(std::make_pair<std::size_t, std::size_t>(0u, 0u),
                             std::make_pair<std::size_t, std::size_t>(0u, 0u)));
  std::vector<std::pair<std::size_t, std::size_t>> true_path{
      std::make_pair<std::size_t, std::size_t>(0u, 0u),
  };
  CheckPath(controller.get_data_maze().second, true_path);
}
TEST(MazeSolution, test_solition_error) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.ReadFromFileMaze("./Example/maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMaze<>(controller, 4u, 4u));
  EXPECT_FALSE(controller.SolvingMaze(
      std::make_pair<std::size_t, std::size_t>(0u, 0u),
      std::make_pair<std::size_t, std::size_t>(-1u, -1u)));
}

TEST(MazeSolution, test_solition_error_2) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.ReadFromFileMaze("./Example/maze_4_4.txt"));
  EXPECT_TRUE(CheckSizeMaze<>(controller, 4u, 4u));
  EXPECT_FALSE(
      controller.SolvingMaze(std::make_pair<std::size_t, std::size_t>(0u, 0u),
                             std::make_pair<std::size_t, std::size_t>(4u, 4u)));
}

} // namespace s21