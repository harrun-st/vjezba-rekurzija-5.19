

#include <iostream>
using namespace std;

void unosrek(int* niz, int vel, int i = 0)
{
    if (vel == i)
    {
        return;
    }
    *(niz + i) = rand() % 40+1;
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

int inajvnepbr(int* niz, int vel, int i = 0,int max=INT_MIN)
{
    if (vel == i)
    {
        return max;
    }
    if (*(niz + i) > max && *(niz + i) % 2 != 0)
    {
        max = *(niz + i);
    }
    return inajvnepbr(niz, vel, i + 1,max);
}
int parnibrojac(int* niz, int vel, int i = 0, int brojac=0)
{
    if (vel == i)
    {
        return brojac;
    }
    if (*(niz + i) % 2 == 0)
    {
        brojac++;
    }
    return parnibrojac(niz, vel, i + 1, brojac);
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
    cout << "Najveci neparni broj u nizu: " << inajvnepbr(niz,vel)<<endl;
    cout << "Broj parnih brojeva: " << parnibrojac(niz, vel) << endl;

}



