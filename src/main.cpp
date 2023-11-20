#include "Controller/Controller.h"

int main() {
  //   s21::Maze maze = s21::Reader::Read("maze.txt");
  //  s21::Maze maze(10,10);
  //  maze.GenerateMaze();
  //  s21::FileManager::Save(maze,"new_maze");

  //     maze.WaveAlgorithm(std::make_pair(2,1),std::make_pair(9,1));
  //     for (auto vec : maze.get_way()) {
  //         for (auto v : vec) {
  //             std::cout << v << " ";
  //         }
  //         std::cout << "\n";
  //     }
  //     maze.SolutionWave(std::make_pair(9,1),std::make_pair(2,1));
  //     for (auto [x,y]: maze.get_path()) {
  //         std::cout << y << " " << x << "\n";
  //     }
  //  std::cout << maze;
  // s21::Model model;
  // s21::Controller controller(std::make_unique<typename s21::Model>());
  // // std::cout << controller.ReadFromFileCave("./Controller/dfdf.txt");
  // // s21::Cave cave = s21::FileManager<s21::Cave>::Read("./Controller/dfdf.txt");
  // // cave.GenerateCave();
  // // cave.print();
  // controller.GenerateCave(50, 50, 50, 4,8,5,8);

  // controller.GenerateCave(20,20, 50,  4,8,5,8);

  //c.GenerateCave(50, 50, 50, 4,8,5,8)


    std::vector<std::vector<int>>temp(50,std::vector<int>(50, 1)); 
  s21::Controller controller(std::make_unique<typename s21::Model>());
  controller.ReadFromFileCave("./MazeExample/cave_test3.txt", 5, 8, 2, 8);
      std::vector<std::vector<int>>temp(50,std::vector<int>(50, 1)); 

  // s21::Controller controller(std::make_unique(model));

  // controller.GenerateMaze(17, 17);
  // controller.SaveToFileMaze("./MazeExample/maze_17_17.txt");
  // controller.SolutionWave(std::make_pair<int,int>(1,2),std::make_pair<int,int>(3,4));
  // controller.GenerateMaze(7,7);
  //  controller.SaveToFileMaze("new maze");
  // controller.SolutionWave(std::make_pair<int,int>(1,2),std::make_pair<int,int>(3,4));
  // controller.SaveToFileCave("new int");
}