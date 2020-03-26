#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//Testing GitHUb
    QLinkedList<QString> stringLinkedList;
    stringLinkedList.append("firtString");
    stringLinkedList.append("secondString");
    stringLinkedList<<"thirdString" <<"forthString";

    foreach(QString i,stringLinkedList)
        qDebug() << i;

    return a.exec();
}
