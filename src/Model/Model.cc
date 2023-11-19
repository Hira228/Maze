#include "Model.h"

namespace s21 {



Model::Model(): maze(std::make_unique<typename s21::Maze>()),cave(std::make_unique<typename s21::Cave>()){}

/// @brief Save fo File Maze 2 Matrix
/// @param path 
/// @return True - Is good Maze and not exception
bool Model::SaveToFileMaze(const std::string& path) const { 
    try {
        return FileManager<Maze>::Save(*maze,path);
    } catch (...) {
        return false;
    }
}

 bool Model::SaveToFileCave(const std::string& path) const { 
    try {
        return FileManager<Cave>::Save(*cave, path);
    } catch(...) { return false; }
 }


/// @brief Reading from File Maze
/// @param path 
/// @return True - Is Good Maze and Donwload, false - Not read from file
bool Model::ReadFromFileMaze(const std::string& path) { 
    try { 
        maze.reset(std::make_unique<typename s21::Maze>(FileManager<Maze>::Read(path)).release());
        return maze->IsGoodMaze();
    } catch (...) { 
        return false;
    }
}
bool Model::GenerateMaze(const size_t& rows,const size_t& cols) { 
   try { 
    maze->set_parameters(rows,cols);
    return maze->GenerateMaze();
   } catch (...) { 
    return false;
   }
}
 bool Model::SolvingMaze(const std::pair<std::size_t,std::size_t>& from,const std::pair<const std::size_t,const std::size_t>& to) {
    try {
       return maze->SolvingMaze(to,from);
    } catch (...) { 
        return false;
    }
 }

/// @brief Returns pair of pair matrix and vector of pair coordinats. 
/// @return Pair of pair of matrix and vector
std::pair<std::pair<matrix,matrix>,std::vector<std::pair<size_t,size_t>>> Model::get_data_maze() const { 
    return maze->get_data();
}

 pair Model::get_paramets() const noexcept { 
        return maze->get_paramets();
    }

 cave_type Model::get_data_cave() const noexcept { 
        return cave->GetCaveData();
 }

pair Model::get_param_cave() const {
    return std::make_pair(cave->GetWeight(), cave->GetHeight());
}

bool Model::GenerateCave(const value_type& rows,const value_type& cols, const value_type& life_chance, std::pair<value_type, value_type> live, std::pair<value_type, value_type> born) { 
   try { 
    cave->SetParameters(rows,cols,life_chance, live, born);
    cave->GenerateCave();
    return true;
   } catch (...) { 
    return false;
   }
}

bool Model::ReadFromFileCave(const std::string& path) { 
    try { 
        cave.reset(std::make_unique<typename s21::Cave>(FileManager<Cave>::Read(path)).release());
        cave->GenerateCave();
        return cave->GoodCave();
    } catch (...) { 
        return false;
    }
}
}