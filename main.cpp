#include <iostream>
#include "temperatursensor.h"
#include "feuchtesensor.h"
#include "datagate.h"
using namespace std;

int main()
{
    double humidity[10];
    TemperaturSensor *t = new TemperaturSensor;
    FeuchteSensor *f = new FeuchteSensor;
    cout << t->getSensorType() << endl;
    cout << f->getSensorType() << endl;

    f->fetchData(humidity);
    for(int i = 0 ; i < f->dataSize(); i++)
    {
        cout << humidity[i] << endl;
    }

    return 0;
}
