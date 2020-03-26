#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>
#include <mepsanworker.h>
#include <QVector>

//created by Kurtvuran

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLinkedList<QString> stringLinkedList;
    stringLinkedList.append("firtString");
    stringLinkedList.append("secondString");
    stringLinkedList<<"thirdString" <<"forthString";

    foreach(QString i,stringLinkedList)
        qDebug() << i;

    qDebug() << "\n";

    QVector<MepsanWorker*> mepsanWorkerLinkedList;
    MepsanWorker *mepsanWorker1 =  new MepsanWorker(&a, "Samet", 20, "Arge Manager");
    mepsanWorkerLinkedList.append(mepsanWorker1);

    MepsanWorker *mepsanWorker2 =  new MepsanWorker(&a, "Ataberk", 25, "Electronic");
    mepsanWorkerLinkedList.append(mepsanWorker2);

    MepsanWorker *mepsanWorker3 =  new MepsanWorker(&a, "Abdurrahman", 30, "Electronic");
    mepsanWorkerLinkedList.append(mepsanWorker3);

    MepsanWorker *mepsanWorker4 =  new MepsanWorker(&a, "Esra", 35, "Patent");
    mepsanWorkerLinkedList.append(mepsanWorker4);

    QVectorIterator<MepsanWorker*> i(mepsanWorkerLinkedList);
    MepsanWorker *workerItem;
    while (i.hasNext()){
        workerItem = i.next();
        qDebug() << workerItem->age << workerItem->name;
    }

    return a.exec();


}
