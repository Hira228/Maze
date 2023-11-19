#include "View.h"
#include "./ui_View.h"
namespace s21 {
View::View(Controller&& controller_,QWidget *parent)
    : QMainWindow(parent),
     controller(std::move(std::make_unique<s21::Controller>(std::forward<Controller>(controller_))))
    , ui(new Ui::View)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(QRect(0, 0, 500, 500));
    ui->graphicsView_2->setScene(scene);
    connect(ui->btn_load_file,SIGNAL(clicked()),this,SLOT(LoadFromFile()));
    connect(ui->btn_save_to_file,SIGNAL(clicked()),this,SLOT(SaveToFileMaze()));
    connect(ui->btn_generate_maze,SIGNAL(clicked()),this,SLOT(GenerateMaze()));
    connect(ui->btn_solving_maze,SIGNAL(clicked()),this,SLOT(SolvingMaze()));
}

View::~View()
{
    delete ui;
    delete scene;
}
    void View::LoadFromFile() {
        QString file_path = QFileDialog::getOpenFileName(this,"Choose file","../../../../MazeExample","All files(*.*);; txt(*.txt)");
        if (file_path.isEmpty()) return;
        if (!controller->ReadFromFileMaze(file_path.toStdString())) QMessageBox::critical(this, "Error", "Something went wrong...");
        else { QMessageBox::information(this, "Success", "Data downloaded successfully");
        DrawMaze();
        }
    }
    void View::SaveToFileMaze() {
        QString file_path = QFileDialog::getSaveFileName(this, "Save file",
                                                  "../../../../MazeExample",
                                                  "All Files(*);; txt(*.txt)");
         if (file_path.isEmpty()) return;
         if (!controller->SaveToFileMaze(file_path.toStdString())) QMessageBox::critical(this, "Error", "Something went wrong...");
         else { QMessageBox::information(this, "Success", "Data saved successfully");
         }

    }

    void View::GenerateMaze() {
        if(controller->GenerateMaze(static_cast<size_t>(ui->spin_box_rows->value()),static_cast<size_t>(ui->spin_box_cols->value()))) {
        DrawMaze();
        } else {
        QMessageBox::critical(this, "Error", "Something went wrong...");
        }
    }
    void View::SolvingMaze() {
       if(controller->SolvingMaze(std::make_pair(static_cast<size_t>(ui->spin_box_x_start->value()),static_cast<size_t>(ui->spin_box_y_start->value())),std::make_pair(static_cast<size_t>(ui->spin_box_x_finish->value()),static_cast<size_t>(ui->spin_box_y_finish->value())))) {
        DrawSolvingMaze();
       } else {
       QMessageBox::critical(this, "Error", "Something went wrong...");
       }
    }
    void View::DrawMaze() {
        ClearLinesFromScene();
        scene->clear();
        const auto [rows,cols] = controller->get_paramets();
        const auto [matrix_vetr,matrix_horz] = controller->get_data_maze().first;
        const double size_lines_horz = (500.f / static_cast<double>(cols));
        const double size_lines_vert =  (500.f / static_cast<double>(rows));

        double current_pos_x = size_lines_horz, current_pos_y = size_lines_vert;
        QPen pen(Qt::white);
        pen.setWidth(2);


         scene->addLine(QLineF(0,0,0,500),pen);

         scene->addLine(QLineF(0,0,500,0),pen);



        for (size_t i = 0; i != rows; ++i) {
            for (size_t j = 0; j != cols; ++j) {
                if (matrix_vetr[i][j])
                    scene->addLine(QLineF(current_pos_x * (j+1),current_pos_y * i,current_pos_x * (j+1),current_pos_y * i + size_lines_vert),pen);

                if (matrix_horz[i][j])
                    scene->addLine(QLineF(current_pos_x * j,current_pos_y * (i + 1),current_pos_x * j + size_lines_horz,current_pos_y * (i + 1)),pen);
          }
        }

    }
    void View::ClearLinesFromScene() {
       if (!vec_line.isEmpty()) {
       for (const auto& line : vec_line)
           scene->removeItem(line);
       for (auto& line : vec_line)
           delete line;
       vec_line.clear();
       }
    }
    void View::DrawSolvingMaze() {
    ClearLinesFromScene();
    QPen pen(Qt::red);
    pen.setWidth(2);
    const auto solving_path = controller->get_data_maze().second;
    const auto [rows,cols] = controller->get_paramets();
    const double size_lines_horz = (500.f / static_cast<double>(cols));
    const double size_lines_vert =  (500.f / static_cast<double>(rows));
    for (size_t i = 0; i != solving_path.size() - 1; ++i) {
            vec_line.push_back(scene->addLine((solving_path[i].first + 0.5) * size_lines_horz, (solving_path[i].second + 0.5) * size_lines_vert, (solving_path[i+1].first + 0.5) * size_lines_horz,(solving_path[i+1].second + 0.5) * size_lines_vert,pen));
    }
    }

}
