//Napisite program u kojem je potrebno unijeti velicinu dinamickog niza cjelobrojnih vrijednosti. Velicina niza mora biti veca od 0. Nakon unosa:

//Dinamicki se alocira niz zadane velicine
//Niz se popunjava rekurzivnom funkcijom slucajnim dvocifrenim brojevima(iz opsega od 10 do 99, ukljucujuci granice)
//Rekurzivnom funkcijom obrnuti redoslijed elemenata niza(npr.[1, 2, 3] postaje[3, 2, 1])
//Rekurzivnom funkcijom izracunati zbir svih elemenata niza

#include <iostream>
using namespace std;



void unos(int* niz, int vel, int i = 0)
{
    if (i == vel)
    {
        return;
    }
    *(niz + i)=rand()%(99-10+1)+10;
    return unos(niz, vel, i + 1);
}
void ispis(int* niz, int vel, int i = 0)
{
    if (i == vel)
    {
        return;
    }
    cout << *(niz + i) << " ";
    return ispis(niz, vel, i + 1);
}
void obrni(int* niz, int vel, int i = 0)
{
    if (i >= vel / 2) { return; }
    swap(*(niz + i), *(niz + vel - 1 - i));

    return obrni(niz, vel, i + 1);
}
int sumanizaelemenata(int* niz, int vel, int i = 0, int suma = 0)
{
    if (vel == i)
    {
        return suma;
    }
    suma += *(niz + i);
    return sumanizaelemenata(niz, vel, i + 1, suma);
}
int main()
{
    srand(time(0));
    cout << "unesi vel" << endl;
    int vel;
    cin >> vel;
    int* niz = new int[vel];
    unos(niz, vel);
    ispis(niz, vel);
    cout << endl;
    cout << "obrnuti niz" << endl;
    obrni(niz, vel);
    ispis(niz, vel);
    cout << endl;
    cout << "Suma elemenata niza: " << sumanizaelemenata(niz, vel);
}


