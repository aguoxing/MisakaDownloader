#include "downloadwidget.h"
#include "ui_downloadwidget.h"

DownloadWidget::DownloadWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DownloadWidget)
{
    ui->setupUi(this);
    getDownloadList();
    getHistoryList();
}

DownloadWidget::~DownloadWidget()
{
    delete ui;
}

void DownloadWidget::getDownloadList()
{
    downloadItem = new DownloadItem();
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(QSize(100, 100));
    ui->downloadListWidget->addItem(item);
    ui->downloadListWidget->setItemWidget(item, downloadItem);
}

void DownloadWidget::getHistoryList()
{
    mediaItem = new MediaItem();
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(QSize(100, 100));
    ui->historyListWidget->addItem(item);
    ui->historyListWidget->setItemWidget(item, mediaItem);
}
