#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    button_[0] = new QPushButton("text1");
    button_[1] = new QPushButton;
    button_[1]->setText("text2");
    button_[2] = new QPushButton;
    button_[2]->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_[3] = new QPushButton;
    button_[3]->setFixedSize(30,30);
    button_[4] = new QPushButton("Toggle");
    button_[4]->setCheckable(true);
    button_[5] = new QPushButton("Enable");
    button_[5]->setEnabled(false);
    button_[6] = new QPushButton("Checked");
    button_[6]->setCheckable(true);
    button_[6]->setChecked(true);

    full_layout_ = new QVBoxLayout;
    for (int i = 0; i < 7; i++) {
        full_layout_->addWidget(button_[i]);
    }

    central_widget_ = new QWidget;

    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
