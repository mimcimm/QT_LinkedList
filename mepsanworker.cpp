#include "mepsanworker.h"
#include "QDebug"

MepsanWorker::MepsanWorker(QObject *parent, QString name, int age, QString department) : QObject(parent)
{
    //When Created
    setData(name,age,department);
}

MepsanWorker::~MepsanWorker()
{
    //Called When Destroyed
}

void MepsanWorker::getInitializedDatas()
{
    qDebug() << "Name: " <<this->name;
}

void MepsanWorker::setData(QString name, int age, QString department)
{
    this->name = name;
    this->age = age;
    this->department = department;
   // qDebug() << "Name: " <<this->name;
}
