
/*Napisati program koji će omogućiti korisniku da unese veličinu n jednodimenzionalnog dinamičkog
niza integer vrijednosti (n > 2). Napisati rekurzivnu funkciju koja će taj niz puniti serijom
brojeva tako da je svaki sljedeći broj jednak umnošku dva prethodna broja, a prva dva elementa su 1 i 3 (1, 3, 3, 9, 27, ...).
Zatim napraviti drugu rekurzivnu funkciju koja će izračunati zbir svih elemenata tog
niza (voditi računa o tipu podatka zbog veličine broja). */
#include <iostream>
using namespace std;

void fibonaciunos(int* niz,int vel, int i = 0, int a = 1, int b = 3)
{
	if (i==vel)
	{
		return;
	}

	*(niz + i) = a;

	return fibonaciunos(niz,vel, i+1, b, a * b);
}


int sumaniza(int* niz, int vel, int i = 0, int suma = 0)
{
	if (vel == i)
	{
		return suma;
	}

	suma += *(niz + i);

	return sumaniza(niz, vel, i + 1,suma);
}
int main()
{

	int n;
	do
	{


		cin >> n;
	} while (n < 2);
	int* niz = new int[n];
	fibonaciunos(niz, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(niz + i) << " ";
	}
	cout << endl;

	cout << "suma niza" << endl;
	cout << sumaniza(niz, n);
}

