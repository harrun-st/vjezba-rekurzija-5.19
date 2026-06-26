
//Suma cifri manja od 10 rekurzivno.txt
#include <iostream>
using namespace std;
int zbircifara(int a, int suma = 0)
{
	if (a == 0)
	{
		cout << "Suma cifara: " << suma << endl;
		if (suma < 10)
		{
			return suma;
		}
		else
			return zbircifara(suma);
	}

	suma += a % 10;
	return zbircifara(a / 10, suma);


}

void main()
{
	cout << "Unesi broj" << endl;
	int a;
	cin >> a;

	int rezultat = zbircifara(a);
	cout << rezultat;
}
