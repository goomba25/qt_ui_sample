#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QWidget *central_widget_;
    QVBoxLayout *full_layout_;
    QPushButton *button_[2];
    QLabel *label_;

    void VBoxLayoutInit();
    void ButtonInit();
    void LabelInit();
};

#endif // MAINWINDOW_H
