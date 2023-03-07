#ifndef DOWNLOADWIDGET_H
#define DOWNLOADWIDGET_H

#include <QWidget>

#include "downloaditem.h"
#include "mediaitem.h"

namespace Ui {
class DownloadWidget;
}

class DownloadWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DownloadWidget(QWidget *parent = nullptr);
    ~DownloadWidget();

private slots:
    void getDownloadList();
    void getHistoryList();

private:
    Ui::DownloadWidget *ui;
    DownloadItem *downloadItem;
    MediaItem *mediaItem;
};

#endif // DOWNLOADWIDGET_H
