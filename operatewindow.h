#ifndef OPERATEWINDOW_H
#define OPERATEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class OperateWindow;
}
QT_END_NAMESPACE

class OperateWindow : public QMainWindow
{
    Q_OBJECT

public:
    OperateWindow(QWidget *parent = nullptr);
    ~OperateWindow();

private slots:
    void on_chooseFileButton_clicked();

private:
    Ui::OperateWindow *ui;
};
#endif // OPERATEWINDOW_H
