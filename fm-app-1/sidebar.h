#ifndef SIDEBAR_H
#define SIDEBAR_H

#include <QTreeView>

class SideBar : public QTreeView
{
    Q_OBJECT
public:
    explicit SideBar(QWidget *parent = nullptr);

Q_SIGNALS:
    void goToUriRequest(const QString &uri);

};

#endif // SIDEBAR_H
