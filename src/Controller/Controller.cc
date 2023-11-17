#include "Controller.h"

namespace s21 { 
    Controller::Controller(std::unique_ptr<Model> model_) : model(std::move(model_)){}
    bool Controller::SaveToFileMaze(const std::string& path) const { 
        return model->SaveToFileMaze(path);
    }
    bool Controller::ReadFromFileMaze(const std::string& path) { 
        return model->ReadFromFileMaze(path);
    }
    bool Controller::GenerateMaze(const size_t& rows,const size_t& cols) { 
        return model->GenerateMaze(rows,cols);
    }
    bool Controller::SolvingMaze(const std::pair<std::size_t,std::size_t>& from,const std::pair<const std::size_t,const std::size_t>& to) { 
        return model->SolvingMaze(from,to);
    }
    bool Controller::SaveToFileCave(const std::string& path) const { 
        return model->SaveToFileCave(path);
    }
    pair Controller::get_paramets() const noexcept { 
        return model->get_paramets();
    }
    std::pair<std::pair<matrix,matrix>,std::vector<std::pair<size_t,size_t>>> Controller::get_data_maze() const { 
        return model->get_data_maze();
    }
}