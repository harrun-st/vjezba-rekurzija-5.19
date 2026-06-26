
#include <iostream>
using namespace std;
//================================================== = POSTAVKA 1
//Napravite rekurzivnu funkciju ‘nthFibonacci' za računanje n - tog Fibonacci broja.
//================================================== = CODE 1

void fibonaci(int niz, int i = 0, int a = 0, int b = 1)
{
	if (niz == i)
	{
		return;
	}
	
	cout << a << " ";

	return fibonaci(niz, i + 1, b, a + b);
}

void main()
{
	cout << "unesi broj niza" << endl;
	int niz;
	cin >> niz;

	cout << "red niza fibonacija od " << niz << endl;
	fibonaci(niz);
}



