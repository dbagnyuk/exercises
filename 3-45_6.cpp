#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    const int MAX_COUNT = 3;
    char *pArrayOfBookNames[MAX_COUNT];

    char sKeyWord[100];
    char pBook1[] = "Bjarne Stroustrup. The C++ Programming Language";
    char pBook2[] = "Scott Meyers. Effective C++";
    char pBook3[] = "Stephen Prata. C++ Primer Plus";

    cout << "Please enter the key word: ";
    cin.getline(sKeyWord, 100); //input the key word;
    sKeyWord[strlen(sKeyWord) + 1] = '\0';
    //int nLength = strlen(sKeyWord);

    //cout << sKeyWord << endl;
    //cout << pBook1 << endl;

    //cout << "Output books: ";
    //for (int i = 0; i < MAX_COUNT; ++i)
    //    cout << pArrayOfBookNames[i] << endl;
    //cout << endl << endl;

    if (strstr(strlwr(pBook1), strlwr(sKeyWord)))
        cout << pArrayOfBookNames[0] << endl;
    else
        cout << "Nothing found" << endl;


    return 0;
}
