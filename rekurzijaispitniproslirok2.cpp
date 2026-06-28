
#include <iostream>
using namespace std;


bool jelprostarekurzija(int n, int vel = 2)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % vel == 0)
    {
        return false;
    }

    if (vel * vel > n)
        return true;

    return jelprostarekurzija(n, vel + 1);
}
void unosprvih30prostih(int i = 2,int brojac=0,int j=30)
{
    if (brojac == j)
    {
        return;
    }
    if (jelprostarekurzija(i) == true)
    {
        cout << i << " ";
        return unosprvih30prostih(i + 1, brojac + 1,j);
   }
    else
    {
        return unosprvih30prostih(i + 1, brojac, j);
    }
}
int sumaprostih(int i = 2, int brojac = 0, int j = 30,int suma=0)
{
    if (brojac == j)
    {
        return suma;
    }
    if (jelprostarekurzija(i) == true)
    {
        suma += i;
        return sumaprostih(i + 1, brojac + 1, j,suma);
    }
    else
    {
        return sumaprostih(i + 1, brojac, j,suma);
    }
}
int main()
{
    cout << "Ispis prvih 30 prostih brojeva:" << endl;

    unosprvih30prostih();

    cout << endl;
    cout << "========================================" << endl;

    cout << "Suma prvih 30 prostih brojeva: " << sumaprostih();
}

