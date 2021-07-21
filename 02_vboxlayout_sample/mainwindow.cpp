#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    button_[0] = new QPushButton;
    button_[0]->setText("First Button");

    button_[1] = new QPushButton;
    button_[1]->setText("Second Button");

    label_ = new QLabel;
    label_->setText("This is Label");
    label_->setAlignment(Qt::AlignCenter);

    full_layout_ = new QVBoxLayout;
    full_layout_->addWidget(label_);
    for (int i = 0; i < 2; i++) {
        full_layout_->addWidget(button_[i]);
    }

    full_layout_->setSpacing(20);
    full_layout_->setMargin(30);

    central_widget_ = new QWidget;
    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
