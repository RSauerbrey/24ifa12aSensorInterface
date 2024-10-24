#include <iostream>
#include "temperatursensor.h"
#include "datagate.h"
using namespace std;

int main()
{
    TemperaturSensor *t = new TemperaturSensor;
    cout << t->getSensorType() << endl;

    return 0;
}
