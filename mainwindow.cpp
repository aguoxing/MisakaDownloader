#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initMenuButton();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMenuButton() {
    ui->stackedWidget->addWidget(&homeWidget);
    ui->stackedWidget->addWidget(&downloadWidget);
    ui->stackedWidget->addWidget(&toolsWidget);
    ui->stackedWidget->addWidget(&settingWidget);
    ui->stackedWidget->addWidget(&aboutWidget);

    buttonGroup = new QButtonGroup();
    buttonGroup->addButton(ui->homeBtn,0);
    buttonGroup->addButton(ui->downloadBtn,1);
    buttonGroup->addButton(ui->toolsBtn,2);
    buttonGroup->addButton(ui->settingBtn,3);
    buttonGroup->addButton(ui->aboutBtn,4);
    connect(buttonGroup, QOverload<int>::of(&QButtonGroup::buttonClicked), ui->stackedWidget, &QStackedWidget::setCurrentIndex);
    buttonGroup->button(0)->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
    qDebug("当前页面：%d", ui->stackedWidget->currentIndex());
}

void MainWindow::menuButtonClicked(int id)
{
    ui->stackedWidget->setCurrentIndex(id);
    qDebug("当前页面：%d,按钮id：%d", ui->stackedWidget->currentIndex(),buttonGroup->checkedId());
}
