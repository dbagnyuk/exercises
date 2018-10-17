#include <iostream>
#include <stdio.h>

using namespace std;

double sphereVolume(int iRadius);

int main()
{
    int iSphereCount = 3;
    int iRadiusArray[iSphereCount];

    for (int i = 0; i < iSphereCount; i++) {
        cout << "Enter the radius for " << i + 1 << " sphere: ";
        cin >> iRadiusArray[i];
        cout << endl;
    }

    for (int i = 0; i < iSphereCount; i++)
        if (iRadiusArray[i] > 10) {
            iRadiusArray[i] = 10;
            cout << "The radius can't be greater than 10! It would be 10!" << endl;
        }

    for (int i = 0; i < iSphereCount; i++)
        cout << "V of sphere " << i + 1 << " is " << sphereVolume(iRadiusArray[i]) << endl;

    double z = 0;
    for (int i = 0; i < iSphereCount; i++)
        z += sphereVolume(iRadiusArray[i]);
    z /= iSphereCount;
    cout << "Result of 'z' = " << z << endl;


    return 0;
}


double sphereVolume(int iRadius)
{
    double dSphereVolume, pi(3.14);
    return dSphereVolume = (4 * pi * iRadius * iRadius * iRadius) / 3;
}
