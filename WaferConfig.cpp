#include "Waferconfig.h"

WaferConfig::WaferConfig(QString name, int waferSize, MatrizChips *matrizChips,QObject *parent): QObject(parent)
{

}
WaferConfig::WaferConfig(QObject *parent) :
    QObject(parent)
{
}
