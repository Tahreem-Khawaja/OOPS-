#include <iostream>
#include "header_temprature.h"
using namespace std;
int main()
{
    Temperature t1;

    cout << "Enter temperature in Celsius: ";
    cin >> t1.celsius;

    t1.display();

    return 0;
}
