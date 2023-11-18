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
//    auto [rows,cols] = controller->get_paramets();
//    QVector<QVector<std::size_t>> matrix_vertical(rows, QVector<std::size_t>(cols, 0u));
//    QVector<QVector<std::size_t>> matrix_horizontal(rows, QVector<std::size_t>(cols, 0u));


}

View::~View()
{
    delete ui;
    delete scene;
}
    void View::InitMatrix(const matrix& matrix_,qmatrix& qmatrix_) {
        for (size_t i = 0; i < matrix_.size(); ++i) {
            for (size_t j = 0; j < matrix_[i].size(); ++j) {
                qmatrix_[i][j] = matrix_[i][j];
            }
        }
    }

    void View::LoadFromFile() {
        QString file_path = QFileDialog::getOpenFileName(this,"Choose file","../../../../MazeExample","All files(*.*);; txt(*.txt);");
        if (file_path.isEmpty()) return;
        if (!controller->ReadFromFileMaze(file_path.toStdString())) QMessageBox::critical(this, "Error", "Something went wrong...");
        else { QMessageBox::information(this, "Success", "Data downloaded successfully");
        DrawMaze();
        }
    }
    void View::DrawMaze() {
        scene->clear();
        const auto [rows,cols] = controller->get_paramets();
        const auto [matrix_vetr,matrix_horz] = controller->get_data_maze().first;
        const double size_lines_horz = (500.f / static_cast<double>(cols));
        const double size_lines_vert =  (500.f / static_cast<double>(rows));

        double current_pos_x = size_lines_horz, current_pos_y = size_lines_vert;
        QPen pen(Qt::black);
        pen.setWidthF(2);


         scene->addLine(0,0,0,500,pen);

         scene->addLine(0,0,500,0,pen);



        for (size_t i = 0; i != rows; ++i) {
            for (size_t j = 0; j != cols; ++j) {
                if (matrix_vetr[i][j])
                    scene->addLine(QLineF(current_pos_x * (j+1),current_pos_y * i,current_pos_x * (j+1),current_pos_y * i + size_lines_vert),pen);

                if (matrix_horz[i][j])
                    scene->addLine(QLineF(current_pos_x * j,current_pos_y * (i + 1),current_pos_x * j + size_lines_horz,current_pos_y * (i + 1)),pen);
          }
        }

    }

}
