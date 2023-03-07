#include "homewidget.h"
#include "ui_homewidget.h"

HomeWidget::HomeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeWidget)
{
    ui->setupUi(this);

    QObject::connect(ui->searchBtn,&QToolButton::clicked,this,&::HomeWidget::handleSearch);
}

HomeWidget::~HomeWidget()
{
    delete ui;
}

void HomeWidget::handleSearch()
{
    ui->resultTreeWidget->setColumnCount(3);
    //ui->resultTreeWidget->setHeaderLabels(QStringList()<<"编号"<<"启用"<<"描述");
    QList<QString> allItemName{"10","否","第一层Item"};
    //创建顶层Item
    QTreeWidgetItem* newTopItem = new QTreeWidgetItem(allItemName);
    ui->resultTreeWidget->addTopLevelItem(newTopItem);
    //获取顶层节点
    QTreeWidgetItem* topItem = ui->resultTreeWidget->topLevelItem(0);
    //创建子节点
    QTreeWidgetItem* childItem = new QTreeWidgetItem(QStringList{"10-1","是","第二层Item"});
    //将子节点添加到顶层节点上
    topItem->addChild(childItem);
}
