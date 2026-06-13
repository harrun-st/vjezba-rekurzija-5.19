

#include <iostream>
using namespace std;

void unosrek(int* niz, int vel, int i = 0)
{
    if (vel == i)
    {
        return;
    }
    *(niz + i) = rand() % 20 + 1;
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

int najmanjibrojunizu(int* niz, int vel, int i = 0, int min = INT_MAX)
{
    if (vel== i)
    {
        return min;
    }
    if (*(niz + i) < min)
    {
        min = *(niz + i);
    }

    return najmanjibrojunizu(niz, vel, i + 1, min);

}
int najvecibrojunizu(int* niz, int vel, int i = 0, int max = INT_MIN)
{
    if (vel == i)
    {
        return max;
    }
    if (*(niz + i) > max)
    {
        max = *(niz + i);
    }

    return najvecibrojunizu(niz, vel, i + 1, max);

}
float prosjekniza(int* niz, int vel, int i = 0, float prosjek=0,float brojac=0)
{
    if (vel == i)
    {
        return (float)prosjek/ brojac;
    }
    prosjek += *(niz + i);

    return prosjekniza(niz, vel, i + 1,prosjek,brojac+1);

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
    cout << "Najmanji broj u nizu " << najmanjibrojunizu(niz, vel) << endl;
    cout << "Najveci broj u nizu " << najvecibrojunizu(niz, vel) << endl;
    cout << "Prosjek niza je " << prosjekniza(niz, vel);
}



