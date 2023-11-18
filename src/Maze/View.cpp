#include "View.h"
#include "./ui_View.h"

View::View(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::View)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene);
    QPen pen(Qt::black);

    pen.setWidth(2);
    scene->addLine(10,10,100,100,pen);
}

View::~View()
{
    delete ui;
}

