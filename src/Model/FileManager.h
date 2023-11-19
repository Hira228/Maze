#ifndef S21_A1_MAZE_MODEL_FILEMANAGER_H
#define S21_A1_MAZE_MODEL_FILEMANAGER_H


#include "Maze.h"
#include "Cave.h"
#include <fstream>

namespace s21 {

template <typename Type>
class FileManager;

template <>
class FileManager<Maze> { 

    public:
    static Maze Read(const std::string path) { 
        std::ifstream file(path);
        if (!file.is_open()) return {};
        std::size_t rows,cols;
        file >> rows >> cols; 
        matrix temp_vertical(std::vector<std::vector<std::size_t>>(rows,std::vector<std::size_t>(cols,0)));
        matrix temp_horizontal(std::vector<std::vector<std::size_t>>(rows,std::vector<std::size_t>(cols,0)));
        for (auto& vec : temp_vertical) { 
            for (auto & elem : vec) { 
                file >> elem;
            }
        }
        for (auto& vec : temp_horizontal) { 
            for (auto & elem : vec) { 
                file >> elem;
            }
        }
        file.close();
    return Maze(rows,cols,std::move(temp_vertical),std::move(temp_horizontal));
    }
    static bool Save(const Maze& maze,const std::string path) { 
        if (!maze.IsGoodMaze()) return false;
         std::ofstream fout(path);
        if (!fout.is_open()) return false;
        auto [rows,cols] = maze.get_paramets();
        auto [vertical,horizontal] = maze.get_data().first;
        fout << rows << " " << cols << "\n";
        for (std::size_t i = 0; i < rows; ++i) { 
            for (std::size_t j = 0; j < cols; ++j) { 
                fout << vertical[i][j] << " ";
            }
            fout << "\n";
        }
        fout << "\n";
          for (std::size_t i = 0; i < rows; ++i) { 
            for (std::size_t j = 0; j < cols; ++j) { 
                fout << horizontal[i][j] << " ";
            }
            fout << "\n";
        }
        fout.close();
    return true;
    }

};

template<>
class FileManager<Cave> {
public:
    static Cave Read(const std::string path) {
        std::ifstream file(path);
        if (!file.is_open()) return {};
        std::size_t rows,cols;
        file >> rows >> cols;
        Cave cave_(rows, cols);
        for (size_t i =  1; i < cave_.cave_.size() - 1; ++i) {
            for (size_t j = 1; j < cave_.cave_[i].size() - 1; ++j) file >> cave_.cave_[i][j];
        }
        // for (auto& vec : cave_.cave_) { 
        // for (auto & elem : vec) { 
        //         file >> elem;
        //     }
        // }
        file.close();
        return cave_;
    }

    static bool Save(const Cave& cave_, const std::string path) {
        if (!cave_.GoodCave()) return false;
        std::ofstream fout(path);
        if (!fout.is_open()) return false;
        fout << cave_.GetWeight() << cave_.GetHeight();
        fout << cave_;
        fout.close();
        return true;
    }
};
}



#endif //S21_A1_MAZE_MODEL_FILEMANAGER_H
