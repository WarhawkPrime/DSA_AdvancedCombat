#include "mainwindow.h"

#include <QApplication>

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    std::cout << "Hello World" << std::endl;
    return a.exec();
}
