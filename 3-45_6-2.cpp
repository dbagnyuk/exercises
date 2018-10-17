#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    const int BOOK_COUNT = 3;
    const int KEY_SIZE = 10;

    char sKeyWord[10];
    char pArrayOfBookNames[BOOK_COUNT][100];

    strcpy(pArrayOfBookNames[1], "Bjarne Stroustrup. The C++ Programming Language");
    strcpy(pArrayOfBookNames[2], "Scott Meyers. Effective C++");
    strcpy(pArrayOfBookNames[3], "Stephen Prata. C++ Primer Plus");

    cout << "Please enter the key word: ";
    cin.getline(sKeyWord, KEY_SIZE); //input the key word;
    sKeyWord[strlen(sKeyWord) + 1] = '\0';
    //int nLength = strlen(sKeyWord);

//    cout << "Inputed books are: " << endl;
//    for (int i = 0; i < BOOK_COUNT; ++i)
//        cout << pArrayOfBookNames[i] << endl;
//    cout << endl << endl;

    int iEmpty = 3;
    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (strstr(strlwr(pArrayOfBookNames[i]), strlwr(sKeyWord)))
            cout << pArrayOfBookNames[i] << endl;
        else
            iEmpty--;
    }
    if (iEmpty == 0)
        cout << "Nothing found!" << endl;

    return 0;
}
