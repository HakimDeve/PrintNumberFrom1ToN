// PrintNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumber(short& Number)
{
    
    cout << "Enter Number for looping Numbrers" << endl;
    cin >> Number;

   
}

short PrintLoopNumbers(int Number)
{
    for (int Start = 0; Start <= Number; Start++)
    {
        cout << "The Number is ------> " << Start << endl;
    }

    return Number;
}

int main()
{
    short SendData;
    ReadNumber(SendData);
    PrintLoopNumbers(SendData);

    return 0;
}

