#ifndef LETTERSWINDOW_H
#define LETTERSWINDOW_H

#include <QMainWindow>

#include "lettersmanager.h"
#include "lettercanvas.h"

namespace Ui {
class LettersWindow;
}

class LettersWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LettersWindow(LettersManager& manager, QWidget *parent = 0);
    ~LettersWindow();

private slots:
    void on_selectLetterM_triggered();

    void on_selectLetterAlpha_triggered();

    void on_child_valueChanged(int arg1);

    void on_group_valueChanged(int arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_selectLetterY_triggered();

    void on_selectLetterJ_triggered();

    void on_selectLetterN_triggered();

    void on_selectLetterPi_triggered();

    void on_selectLetterQ_triggered();

    void on_selectLetterS_triggered();

    void on_selectLetterB_triggered();

private:
    Ui::LettersWindow *ui;

    LetterCanvas _canvas;
    LettersManager* _manager;
};

#endif // LETTERSWINDOW_H
