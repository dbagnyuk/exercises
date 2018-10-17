#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand ((unsigned int) time(0)); // sand the time for random function

    int iArraySize;
    cout << "Enter size of array, please: ";
    cin >> iArraySize;
    if (iArraySize > 10) {
        iArraySize = 10;
        cout << "The array should not have more than 10 elements! It would be 10!" << endl;
    }

    int iArray[iArraySize];
    for (int i = 0; i < iArraySize; i++)
        iArray[i] = rand() % 21;

    cout << "The array is: ";
    for (int i = 0; i < iArraySize; i++)
        cout << iArray[i] << " ";
    cout << endl;

    int iNumber;
    cout << "Enter the 'i' number: ";
    cin >> iNumber;

    if (iNumber > iArraySize){
        iNumber = iArraySize;
        cout << "'i' can't be greater than size of arrray;" << endl;
    }

    int iAverageVelue = 0;
    for (int i = 0; i < iNumber; i++)
        iAverageVelue += iArray[i];
    iAverageVelue /= iNumber;

    cout << "Average value is " << iAverageVelue << endl;

    for (int i = 0; i < iNumber; i++)
        iArray[i] = iAverageVelue;


    cout << "Result array is: ";
    for (int i = 0; i < iArraySize; i++)
        cout << iArray[i] << " ";
    cout << endl;

    return 0;
}
