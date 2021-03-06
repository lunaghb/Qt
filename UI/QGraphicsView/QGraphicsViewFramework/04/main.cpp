#include <QtWidgets/QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "MyRect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    MyRect* rect = new MyRect();
    rect->setRect(0, 0, 100, 100);

    scene.addItem(rect);

    // make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    QGraphicsView view;
    view.setScene(&scene);
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view.show();
    view.setFixedSize(800, 600);
    scene.setSceneRect(0,0,800,600);

    return a.exec();
}
