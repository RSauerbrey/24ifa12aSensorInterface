#include <iostream>
#include "temperatursensor.h"
#include "feuchtesensor.h"
#include "datagate.h"
using namespace std;

int main()
{
    double helper[10];
    DataGate *t = new TemperaturSensor;
    DataGate *f = new FeuchteSensor;

    cout << f->getSensorType() << endl;

    f->fetchData(helper);

    for(int i = 0 ; i < f->dataSize(); i++)
    {
        cout << helper[i] << endl;
    }

    cout << t->getSensorType() << endl;

    t->fetchData(helper);

    for(int i = 0 ; i < t->dataSize(); i++)
    {
        cout << helper[i] << endl;
    }
    return 0;
}
