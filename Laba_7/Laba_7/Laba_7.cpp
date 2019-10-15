#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian" );
	float x,  max = 0, y = 0 ;
	const int n = 5;
	for (int i = 1; i <= n ; i++)
	{
		cout << "Введите х "  << endl;
	    cin >> x;
		if (x > max) {
			max = x;
		}
		y += x * x;
		
	}

	cout << "" << y * max << endl;
	 
	/*float z, a = 0, b = 1;
	const int n = 5;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите значение z "  << endl;
		cin >> z;
		if (z > 0)
			a = a + z;
		else if (z <= 0)
		{
			b = b * z;
		}
		cout << "Значение суммы:  " << a << endl;
		cout << "Значение произведения:  " << b << endl;
	}*/
}

