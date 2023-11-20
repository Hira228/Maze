#include "unit_test.h"

namespace s21 {
TEST(GeneterationCave, test_generation_cave_50_50) {
  std::vector<std::vector<int>> temp(52, std::vector<int>(52, 1));
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(
      controller.ReadFromFileCave("./Example/cave_test3.txt", 5, 8, 2, 8));
  EXPECT_TRUE(
      std::equal(temp.begin(), temp.end(), controller.get_data_cave().begin()));
}

TEST(GeneterationCave, test_generation_cave_random_TRUE) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_TRUE(controller.GenerateCave(20, 20, 50, 5, 8, 2, 8));
}

TEST(GeneterationCave, test_generation_cave_random_FALSE) {
  Controller controller(std::make_unique<typename s21::Model>());
  EXPECT_FALSE(controller.GenerateCave(20, -19, 50, 5, 8, 2, 8));
}
} // namespace s21
