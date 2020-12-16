 #include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout << "Ingrese N: ";
	cin >> n;
	for (int i = 1; i <= n; i++)//FILAS
	{
		for (int k = 1; k <= i; k++)//COLUMNAS
			cout << k;
		cout << endl;
	}
	_getch();
	return 0;
}