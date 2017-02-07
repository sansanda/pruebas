#ifndef CHIP_H
#define CHIP_H

#include <QObject>

class Chip : public QObject
{
    Q_OBJECT
public:
    explicit Chip(QObject *parent = 0);
    explicit Chip(int xx = 0, int yy = 0, int ord = 0, bool o = false, bool fc = false, bool sel = false, bool v = false, bool m = false, QObject *parent = 0);
    ~Chip();

    int getX();
    void setX(int sX);

    int getY();
    void setY(int sY);

    int getOrder();
    void setOrder(int setOrder);

    bool getOrigin();
    void setOrigin(bool sOrigin);

    bool getSelected();
    void setSelected(bool setSelected);

    bool getVisible();
    void setVisible(bool sVisible);

    bool getMeasuring();
    void setMeasuring(bool sMeasuring);

    bool getIsFirstChip() const;
    void setIsFirstChip(bool value);

signals:

public slots:

private:
    int order;          // Chip order within the wafer measure
    bool isOrigin;      // Tells you if it is the origin of coordinates
    bool isFirstChip;   // Tells you if it is the first chip to measure
    bool selected;      // The chip can be selected or not for the measure process
    bool visible;       // The chip can be visible or not (it depends if it has been measured or not)
    bool measuring;     //
    int x;              // X Position within the wafer coordinates
    int y;              // Y Position within the wafer coordinates
};

#endif // CHIP_H
