#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //----------------------zadanie 1---------------------------------------------
    cout << "---------------------------------zadanie 1-----------------------------" << endl;
    char s[100] = "Adasdsadad DDSADS dasASDD dasdasas DDDSasdsad dDAS;DDDD;Dsdsddd";
    int start = 0;
    for (int i = 0; i < 100; i++)
    {
        if (s[i] == ' ' || s[i] == ';')
        {
            start = i + 1;
        }
        if (isupper(s[i]) /* && !(s[i] == ' ') && !(s[i] == ';')*/)
        { 
            while (true)
            {
                if (s[start] == ' ' || s[start] == '\0' || s[start] == ';')
                {
                    cout << ' ';
                    break;
                }
                cout << s[start];
                start++;
            }
        }
    }
    cout << endl;
    cout << "---------------------------------zadanie 2-----------------------------" << endl;
    //----------------------------------------------------zadanie 2--------------------------------------------------
    char s2[100] = "fdsadasdasdsadsada;dasdadadsad;asdsad adsa sa das da d;;a dasd;s a;sd aas;d sa;";
    for (int i = 0; i < 100; i++)
    {
        if (s2[i] == ';') cout << i +1 <<' ';
    }
    cout << endl;
    cout << "---------------------------------zadanie 3-----------------------------" << endl;
    char s3[100] = "123asdsa 3222dsad dsad das dsadasdasddsdasd444dasda 312321321";
    int max = 0;
    int max2 = 0;
    for (int i = 0; i < 100; i++)
    {
        if (isdigit(s3[i]))
        {
            max++;
        }
        else
        {
            if (max > max2)
            {
                max2 = max;
                max = 0;
            }
        }
    }
    cout << max2;
}



