#ifndef MEPSANWORKER_H
#define MEPSANWORKER_H

#include <QObject>

class MepsanWorker : public QObject
{
    Q_OBJECT
public:
    //Constructor
    explicit MepsanWorker(QObject *parent = nullptr,QString name = "defaultName",int age = -1, QString department = "default");
    ~MepsanWorker(); //DeConstructor
    QString name;
    QString department;
    int age;
    void getInitializedDatas();
    void setData(QString,int, QString);

signals:

};

#endif // MEPSANWORKER_H
