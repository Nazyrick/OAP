#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian" );
	float x,sum = 0, max = 0, y = 0 ;
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

}

