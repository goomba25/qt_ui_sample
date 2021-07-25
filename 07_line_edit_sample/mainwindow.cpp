#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    line_edit_ = new QLineEdit;
    button_ = new QPushButton("click");

    full_layout_ = new QVBoxLayout;
    full_layout_->addWidget(line_edit_);
    full_layout_->addWidget(button_);

    central_widget_ = new QWidget;

    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
