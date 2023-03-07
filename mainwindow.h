#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>

#include "homewidget.h"
#include "downloadwidget.h"
#include "settingwidget.h"
#include "toolswidget.h"
#include "aboutwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void initMenuButton();
    void menuButtonClicked(int id);

private:
    Ui::MainWindow *ui;
    QButtonGroup *buttonGroup;
    HomeWidget homeWidget;
    DownloadWidget downloadWidget;
    SettingWidget settingWidget;
    ToolsWidget toolsWidget;
    AboutWidget aboutWidget;
};
#endif // MAINWINDOW_H
