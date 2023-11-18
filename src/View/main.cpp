#include "View.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    s21::Controller controller_(std::make_unique<typename s21::Model>());
    s21::View w(std::move(controller_));
    w.show();
    return a.exec();
}
