#ifndef MEDIAITEM_H
#define MEDIAITEM_H

#include <QWidget>
#include <QStyle>

namespace Ui {
class MediaItem;
}

class MediaItem : public QWidget
{
    Q_OBJECT

public:
    explicit MediaItem(QWidget *parent = nullptr);
    ~MediaItem();

private:
    Ui::MediaItem *ui;
};

#endif // MEDIAITEM_H
