#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QWidget *central_widget_;
    QHBoxLayout *full_layout_;
    QPushButton *button_[2];
    QLabel *label_;

    void HBoxLayoutInit();
    void ButtonInit();
    void LabelInit();
};

#endif // MAINWINDOW_H
