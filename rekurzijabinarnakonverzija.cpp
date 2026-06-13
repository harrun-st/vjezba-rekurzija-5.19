// rekurzijabinarnakonverzija.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void unosrek(int* niz, int vel, int i = 0)
{
    if (vel == i)
    {
        return;
    }
    *(niz + i) = rand() % 2000 + 50;
    return unosrek(niz, vel, i + 1);
}
void ispisrek(int* niz, int vel, int i = 0)
{
    if (vel == i)
    {
        return;
    }
    cout << *(niz + i) << " ";
    return ispisrek(niz, vel, i + 1);
}
void pretvaranjeubinarni(int broj)
{
    bool bin = broj % 2;
    if (broj == 0)
    {
        return;
    }

    pretvaranjeubinarni(broj / 2);
    cout << bin;
}
int main()
{
    srand(time(0));
    cout << "Unesi vel niza" << endl;
    int vel;
    cin >> vel;

    int* niz = new int[vel];

    unosrek(niz, vel);
    ispisrek(niz, vel);
    cout << endl;
    cout << endl;
    for (int i = 0; i < vel; i++)
    {
        cout << *(niz + i) << ": ";
        pretvaranjeubinarni(*niz + i);
        cout << endl;
    }

    cout << endl;


}
