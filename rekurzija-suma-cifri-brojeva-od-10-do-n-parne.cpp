#include<iostream>
using namespace std;
int random()
{
	return rand() % 50 + 10;
}
int brojaccifara(int broj,int suma=0)
{
	if (broj == 0)
	{
		return broj;
	}

	suma += broj%10;
	return brojaccifara(broj / 10, suma);
}
void nizparnihcifri(int i = 10, int randomkopija = random())
{
	
	if (i == randomkopija)
	{
		cout << endl;
		cout << "random broj do kojeg smo isli je" << randomkopija << endl;
		return;
	}
	if (brojaccifara(i) % 2 == 0)
	{
		cout << i << " ";
	}
	nizparnihcifri(i + 1, randomkopija);
}
int main()
{
	srand(time(NULL));
	nizparnihcifri();
}


