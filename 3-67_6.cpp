#include <iostream>

using namespace std;

int main()
{

    int m, n;

    cout << "Enter the 'm' digit: ";
    cin >> m;

    cout << "Enter the 'n' digit: ";
    cin >> n;

    if (m > n) {
        int tmp = n;
        n = m;
        m = tmp;
    }

    int iArraySize = n - m;
    if (iArraySize > 100){
        cout << "The aray can be more than 100 numbers, so it would be 100" << endl;
        iArraySize = 100;
    }
    int iArray[iArraySize];

    for (int i = 0; i < iArraySize; i++) {
        iArray[i] = m + i;
        cout << iArray[i] << " ";
    }
    cout << endl;

    // cout << "Enter the number, please: ";
    // cin >> num;

    for (int i = 0; i < iArraySize; i++) {
        int num = iArray[i], sum = 0, a;
        while(num != 0){
            a = num % 10;
            num = (num - a) / 10;
            sum = sum + a;
            }

        if ((sum % 9) == 0)
            cout << "The sum of digits in number " << iArray[i] << " is multiple to 9." << endl;
    }
    return 0;
}
