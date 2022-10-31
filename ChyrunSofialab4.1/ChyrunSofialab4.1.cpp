// ChyrunSofialab4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_1.cpp
// < Чирун Софія >
// Лабораторна робота № 4.1
// Цикли
// Варіант 18

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k, i;
    double S;
    cout << "0<k<15, k = "; cin >> k;
    S = 0;
    i = k;
    while (i <= 15)
    {
        S += (cos(i))/(1 + pow(sin(i), 2));
        i++;
    }
    cout << S << endl;
    S = 0;
    i = k;
    do {
        S += (cos(i)) / (1 + pow(sin(i), 2));
        i++;
    }
    while (i <= 15);
    cout << S << endl;
    S = 0;
    for (i = k; i <= 15; i++)
    {
        S += (cos(i)) / (1 + pow(sin(i), 2));
    }
    cout << S << endl;
    S = 0;
    for (i = 15; i >= k; i--)
    {
        S += (cos(i)) / (1 + pow(sin(i), 2));
    }
    cout << S << endl;
    return 0;
}