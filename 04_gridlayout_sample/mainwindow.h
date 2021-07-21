#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QWidget *central_widget_;
    QGridLayout *full_layout_;
    QPushButton *button_[3];
    QLabel *label_;

    void ButtonInit();
    void LabelInit();
    void GridLayoutInit();
};

#endif // MAINWINDOW_H
