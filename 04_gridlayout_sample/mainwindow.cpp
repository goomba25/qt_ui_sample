#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ButtonInit();
    LabelInit();
    GridLayoutInit();

    central_widget_ = new QWidget;

    this->setCentralWidget(central_widget_);
    central_widget_->setLayout(full_layout_);
}

void MainWindow::ButtonInit() {
    button_[0] = new QPushButton;
    button_[0]->setText("First Button");

    button_[1] = new QPushButton;
    button_[1]->setText("Second Button");

    button_[2] = new QPushButton;
    button_[2]->setText("Third Button");
}

void MainWindow::LabelInit() {
    label_ = new QLabel;
    label_->setText("This is Label");
    label_->setAlignment(Qt::AlignCenter);
}

void MainWindow::GridLayoutInit() {
    full_layout_ = new QGridLayout;

    full_layout_->addWidget(label_, 0, 0);
    full_layout_->addWidget(button_[0], 0, 1);
    full_layout_->addWidget(button_[1], 1, 0, 1, 2);
    full_layout_->addWidget(button_[2], 2, 1);
}
