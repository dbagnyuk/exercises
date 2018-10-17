#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <string.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

using namespace std;

int main()
{
    const int BOOK_COUNT = 3;
    const int KEY_SIZE = 10;
    const int BOOK_SIZE = 100;

    char sKeyWord[KEY_SIZE];
    char * pArrayOfBookNames[BOOK_COUNT];

    cout << "Input the 3 books one by one:" << endl;
    for (int i = 0; i < BOOK_COUNT; i++) {
        pArrayOfBookNames[i] = new char [BOOK_SIZE];
        cin.getline(pArrayOfBookNames[i], BOOK_SIZE);
    }

    cout << "Please enter the key word: ";
    cin.getline(sKeyWord, KEY_SIZE); //input the key word;
    sKeyWord[strlen(sKeyWord) + 1] = '\0';
    //int nLength = strlen(sKeyWord);

//    cout << "Inputed books are: " << endl;
//    for (int i = 0; i < BOOK_COUNT; ++i)
//        cout << pArrayOfBookNames[i] << endl;
//    cout << endl << endl;

    int iEmpty = BOOK_COUNT;
    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (strstr(strlwr(pArrayOfBookNames[i]), strlwr(sKeyWord)))
            cout << pArrayOfBookNames[i] << endl;
        else
            iEmpty--;
    }
    if (iEmpty == 0)
        cout << "Nothing found!" << endl;


    for (int i = 0; i < BOOK_COUNT; ++i)
        delete[] pArrayOfBookNames[i];

    if (_CrtDumpMemoryLeaks())
        cout << "Memory Leaks!" << endl;
    else
        cout << "Memory OK!" << endl;

    return 0;
}
