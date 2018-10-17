#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    srand ((unsigned int) time(0));

    int iArrayBSize;
    cout << "Enter size of array 'B', please: ";
    cin >> iArrayBSize;
    if (iArrayBSize > 10) {
        iArrayBSize = 10;
        cout << "The array should not have more thean 10 elements! It would be 10!" << endl;
    }

    int iArrayB[iArrayBSize];
    for (int i = 0; i < iArrayBSize; i++)
        iArrayB[i] = rand() % 21;

    cout << "The array 'B' is: ";
    for (int i = 0; i < iArrayBSize; i++)
        cout << iArrayB[i] << " ";
    cout << endl << endl;

    int iArrayASize;
    cout << "Enter size of array 'A', please: ";
    cin >> iArrayASize;
    if (iArrayASize > iArrayBSize) {
        iArrayASize = iArrayBSize;
        cout << "The array 'A' should not be greater than array 'B'!" << endl;
    }

    int iArrayA[iArrayBSize];
    for (int i = 0; i < iArrayASize; i++)
        iArrayA[i] = rand() % 21;

    cout << "The array 'A' is: ";
    for (int i = 0; i < iArrayASize; i++)
        cout << iArrayA[i] << " ";
    cout << endl << endl;

    for (int i = 0; i < iArrayASize; i++) {
        bool bExists = false;
        for (int j = 0; j < iArrayBSize; j++) {
            if (iArrayA[i] == iArrayB[j]) {
                cout << "Array 'A' position " << i + 1 << " according to " << j + 1 << " position in array 'B'" << endl;
                bExists = true;
            }
        }
        if (!bExists)
            cout << "Array 'A' position " << i + 1 << " is not exists in array 'B'" << endl;
    }

    return 0;
}
