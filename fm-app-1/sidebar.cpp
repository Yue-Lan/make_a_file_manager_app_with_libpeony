#include "sidebar.h"

#include <QTimer>

#include <PeonySideBarModel>
#include <PeonySideBarProxyModel>

SideBar::SideBar(QWidget *parent) : QTreeView(parent)
{
    auto model = new Peony::SideBarModel(this);
    auto proxyModel = new Peony::SideBarProxyFilterSortModel(this);
    proxyModel->setSourceModel(model);
    setModel(proxyModel);

    connect(this, &SideBar::clicked, this, [=](const QModelIndex &index){
        auto item = proxyModel->itemFromIndex(index);
        auto uri = item->uri();
        if (!uri.isEmpty())
            Q_EMIT goToUriRequest(uri);
    });

    expandAll();
}
