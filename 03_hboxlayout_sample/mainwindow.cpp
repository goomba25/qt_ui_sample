#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    for (int i = 0; i < 4; i++) {
        button_[i] = new QPushButton(QString::number(i));
        button_[i]->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    }

    full_layout_ = new QHBoxLayout;

    for (int i = 0; i < 4; i++) {
        full_layout_->addWidget(button_[i]);
    }

    full_layout_->setContentsMargins(20,0,20,0);

    central_widget_ = new QWidget;
    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
