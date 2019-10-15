#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float p=0, q=0, x = 1;
	cout << "Введите p" << p << endl; cin >> p;
	cout << "Введите q" << q << endl; cin >> q;
	for (p; p <= q; p += 0.03 * p) {
		if (p > q) {
			
		}
		x++;
	}
	cout << "Выручка фирмы" << p << endl;
	cout << "Количество дней" << x;


	 
	}







s

