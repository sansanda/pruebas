#ifndef WAFERCONFIG_H
#define WAFERCONFIG_H

#include <QObject>
#include "MatrizChips.h"

class WaferConfig : public QObject
{
    Q_OBJECT
public:
    explicit WaferConfig(QString name, int waferSize, MatrizChips *matrizChips,QObject *parent = 0);
    explicit WaferConfig(QObject *parent = 0);


signals:

public slots:

private:
    QString name;
    int waferSize; // in inches
    MatrizChips* matrizChips;

};

#endif // WAFERCONFIG_H
