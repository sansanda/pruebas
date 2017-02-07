#include "Chip.h"

/**
 * @file chip.cpp
 * @author  Luis Rodriguez <luis.rodriguez@csic.es>
 * @version 0.2
 * @date 20/8/2013
 *
 * @brief Wafer chips data structure class.
 * @section DESCRIPTION
 *
 * This class contain the data structure for wafer chips used in probe station classes.
 */

/**
  * Constructor with parameters
  */

Chip::Chip(int xx, int yy, int ord, bool o, bool fc, bool sel, bool v, bool m, QObject *parent): QObject(parent)
{
    x = xx;
    y = yy;
    order = ord;
    isOrigin = o;
    isFirstChip = fc;
    selected = sel;
    visible = v;
    measuring = m;

}

/**
  * Destructor
  */
Chip::~Chip()
{
}

int Chip::getOrder()
{
    return order;
}

void Chip::setOrder(int setOrder)
{
    order = setOrder;
}

bool Chip::getOrigin()
{
    return isOrigin;
}

void Chip::setOrigin(bool sOrigin)
{
    isOrigin = sOrigin;
}

bool Chip::getSelected()
{
    return selected;
}

void Chip::setSelected(bool setSelected)
{
    selected = setSelected;
}

bool Chip::getVisible()
{
    return visible;
}

void Chip::setVisible(bool sVisable)
{
    visible = sVisable;
}

bool Chip::getMeasuring()
{
    return measuring;
}

void Chip::setMeasuring(bool sMeasuring)
{
    measuring = sMeasuring;
}
bool Chip::getIsFirstChip() const
{
    return isFirstChip;
}

void Chip::setIsFirstChip(bool value)
{
    isFirstChip = value;
}


int Chip::getX()
{
    return x;
}

void Chip::setX(int sX)
{
    x = sX;
}

int Chip::getY()
{
    return y;
}

void Chip::setY(int sY)
{
    y = sY;
}
