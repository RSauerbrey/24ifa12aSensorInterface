#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"

class TemperaturSensor : public DataGate
{
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
