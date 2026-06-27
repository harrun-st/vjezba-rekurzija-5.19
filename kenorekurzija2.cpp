
/*Napisati program koji će omogućiti korisniku da unese 
veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti.
Napisati rekurzivnu funkciju koja će taj niz popuniti 
serijom brojeva 2, 4, 8, 16, 32, 64, 128, 256, 512, itd., 
tako da je svaki sljedeći broj jednak prethodnom pomnoženom sa 2,
počevši od broja 2. Zatim,korisnik unosi željeni broj te rekurzivnom funkcijom 
provjerava da li je taj broj član kreiranog niza.
Rekurzija se prekida kada se popuni cijeli niz ili kada se 
desi overflow na integer varijabli.
*/
#include <iostream>
using namespace std;

void unos(int* niz, int vel, int i = 0, int a = 2)
{
    if (vel == i)
    {
        return;
    }
    *(niz + i) = a;
    return unos(niz, vel, i + 1, a * 2);
}
void ispis(int* niz, int vel, int i = 0, int a = 2)
{
    if (vel == i)
    {
        return;
    }
    cout << *(niz + i)<<" ";
    return ispis(niz, vel, i + 1, a * 2);
}
bool provjera(int* niz, int vel,int broj, int i = 0)
{
    if (vel == i)
    {
        return false;
    }
    if (*(niz + i) == broj)
    {
        return true;

    }
    return provjera(niz, vel, broj, i + 1);
}
int main()
{
    int a;
    cin >> a;
    int* niz = new int[a];

    unos(niz, a);
    cout << endl;
    ispis(niz, a);

    cout << endl;
    cout << "unesi broj neki" << endl;
    int broj;
    cin >> broj;
    if (provjera(niz, a, broj) == true)
    {
        cout << "ovaj broj se nalazi u nizu" << endl;

    }
    else
        cout << "pusi kurac" << endl;
}


