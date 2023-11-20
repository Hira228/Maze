#include "View.h"
#include "./ui_View.h"
using namespace std::chrono_literals;
namespace s21 {
View::View(Controller&& controller_,QWidget *parent)
    : QMainWindow(parent),
     controller(std::move(std::make_unique<s21::Controller>(std::forward<Controller>(controller_))))
    , ui(new Ui::View)
{
    ui->setupUi(this);
    // maze
    scene = new QGraphicsScene(QRect(0, 0, 500, 500));
    ui->graphicsView_2->setScene(scene);
    connect(ui->btn_load_file,SIGNAL(clicked()),this,SLOT(LoadFromFile()));
    connect(ui->btn_save_to_file,SIGNAL(clicked()),this,SLOT(SaveToFileMaze()));
    connect(ui->btn_generate_maze,SIGNAL(clicked()),this,SLOT(GenerateMaze()));
    connect(ui->btn_solving_maze,SIGNAL(clicked()),this,SLOT(SolvingMaze()));

    //cave
    scene_ =  new QGraphicsScene(QRect(0, 0, 500, 500));
    ui->graphicsView->setScene(scene_);
    connect(ui->Button_Load_File_Cave, SIGNAL(clicked()), this, SLOT(LoadFromFileCave()));
    connect(ui->Button_Save_File_Cave, SIGNAL(clicked()), this, SLOT(SaveFromFileCave()));
    connect(ui->btn_generate_cave_, SIGNAL(clicked()), this, SLOT(GenerateCave()));
    connect(ui->slow_automaric_button, SIGNAL(clicked()), this, SLOT(GenerateCaveSlow()));
    connect(ui->go_to_next_iteration_button,SIGNAL(clicked()),this,SLOT(DrawIteration()));



}

View::~View()
{
    delete ui;
    delete scene;
    delete scene_;
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

    void View::LoadFromFileCave() {
        QString file_path = QFileDialog::getOpenFileName(this,"Choose file","../../../../MazeExample","All files(*.*);; txt(*.txt)");
        if (file_path.isEmpty()) return;
        if (!controller->ReadFromFileCave(file_path.toStdString(),ui->spin_live_low->value(), ui->spin_live_up->value(),ui->spin_born_low->value(), ui->spin_born_up->value() )) QMessageBox::critical(this, "Error", "Something went wrong...");
        else { QMessageBox::information(this, "Success", "Data downloaded successfully");
            ui->spin_cave_rows_->setValue(controller->get_paramters_cave().first - 2);
           ui->spin_cave_cols_->setValue(controller->get_paramters_cave().second -2);
        if (ui->automatic_button->isChecked()) DrawCave(controller->get_data_cave());
        }
    }
    void View::SaveToFileCave() {
        QString file_path = QFileDialog::getSaveFileName(this, "Save file",
                                                  "../../../../MazeExample",
                                                  "All Files(*);; txt(*.txt)");
         if (file_path.isEmpty()) return;
         if (!controller->SaveToFileCave(file_path.toStdString())) QMessageBox::critical(this, "Error", "Something went wrong...");
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

    void View::DrawSolvingMaze() {
    QPen pen(Qt::red);
    pen.setWidth(2);
    const auto solving_path = controller->get_data_maze().second;
    const auto [rows,cols] = controller->get_paramets();
    const double size_lines_horz = (500.f / static_cast<double>(cols));
    const double size_lines_vert =  (500.f / static_cast<double>(rows));
    for (size_t i = 0; i != solving_path.size() - 1; ++i) {
            scene->addLine((solving_path[i].first + 0.5) * size_lines_horz, (solving_path[i].second + 0.5) * size_lines_vert, (solving_path[i+1].first + 0.5) * size_lines_horz,(solving_path[i+1].second + 0.5) * size_lines_vert,pen);
    }

    }

    void View::DrawCave(const cave_type& matrix_cave) {
        scene_->clear();
        const auto [rows,cols] = controller->get_paramters_cave();


        QPen pen(Qt::black);
        pen.setWidth(2);
        double cellWidth = static_cast<double>(500.f / (cols - 2));
        double cellHeight = static_cast<double>(500.f / (rows - 2));

        for (size_t i = 1; i != rows - 1; ++i) {
            for (size_t j = 1; j != cols - 1; ++j) {
                if (matrix_cave[i][j]) {
                QGraphicsRectItem* rect = new QGraphicsRectItem((j - 1) * cellWidth, (i - 1) * cellHeight, cellWidth, cellHeight);
                rect->setPen(pen);
                rect->setBrush(Qt::black);
                scene_->addItem(rect);
                }
          }
        }

    }
    void View::GenerateCave() {
        if(controller->GenerateCave(ui->spin_cave_rows_->value(), ui->spin_cave_cols_->value(), ui->spin_cave_life_chance->value(),ui->spin_live_low->value(), ui->spin_live_up->value(),ui->spin_born_low->value(), ui->spin_born_up->value()) ) {
            if (ui->automatic_button->isChecked()) DrawCave(controller->get_data_cave());
        iter = 0;
        } else {
        QMessageBox::critical(this, "Error", "Something went wrong...");
        }
    }
    void View::DrawIteration() {
        if (iter > controller->GetIterators().size() - 1) iter = 0;
        DrawCave(controller->GetIterators()[iter]);
        iter++;

    }

//    void View::GenerateCaveSlow()
//    {
//        if(controller->GenerateCave(ui->spin_cave_rows_->value(), ui->spin_cave_cols_->value(), ui->spin_cave_life_chance->value(),ui->spin_live_low->value(), ui->spin_live_up->value(),ui->spin_born_low->value(), ui->spin_born_up->value()) ) {
////            auto res = controller->GetIterators();
////            std::for_each(res.begin(), res.end(), [this](const auto& elem){
////                   DrawCave(elem);

////                });
////            for (size_t i = 0; i != controller->GetIterators().size(); ++i) {
////                DrawCave(controller->GetIterators()[i]);
////                QThread::msleep(2000);
////            }
//            DrawCave(controller->GetIterators()[0]);
//             QThread::msleep(2000);
//             DrawCave(controller->GetIterators()[25]);
//                            QThread::msleep(2000);
//            DrawCave(controller->GetIterators()[50]);

//        } else {
//        QMessageBox::critical(this, "Error", "Something went wrong...");
//        }
//   }

    void View::GenerateCaveSlow()
    {
        if (controller->GenerateCave(ui->spin_cave_rows_->value(), ui->spin_cave_cols_->value(), ui->spin_cave_life_chance->value(), ui->spin_live_low->value(), ui->spin_live_up->value(), ui->spin_born_low->value(), ui->spin_born_up->value()))
        {
            iter = 0;

            // Создаем таймер для регулировки интервалов отрисовки
            QTimer* timer = new QTimer(this);
            connect(timer, &QTimer::timeout, this, &View::DrawNextCave);
            timer->start(ui->spin_cave_sleep->value());  // Устанавливаем интервал в 2000 миллисекунд (2 секунды)
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Что-то пошло не так...");
        }
    }

    void View::DrawNextCave()
    {

        if (iter < controller->GetIterators().size())
        {
            DrawCave(controller->GetIterators()[iter]);
            iter++;
        }
        else
        {
            // После завершения отрисовки всех пещер останавливаем таймер
            static_cast<QTimer*>(QObject::sender())->stop();
            QMessageBox::information(this, "Успех", "Отрисовка завершена");
            iter = 0;
        }
    }




}
