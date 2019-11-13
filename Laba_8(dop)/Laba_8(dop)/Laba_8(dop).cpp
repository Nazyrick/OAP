#include <iostream>
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	/*double a = 1, b = 3, n = 200, h, s = 0,x=a;
	h = (b - a) / n;
	while (x < (b - h)) {
		s = s + h * ((pow(x,3) - 3) + (pow(x,3)-3+h)) / 2;
		x += h;
	}
	cout << s;*/
	

	/*double a = 1, b = 3, n = 200, s1 = 0, s2 = 0, i = 1, h, z,x;
h = (b - a) / 2 * n;
x = a + 2 * h;
		while (i > n) {
			s2 = s2 + (pow(x, 3) - 3);
			s1 = s1 + (pow(x, 3) - 3);
			x += h;
			i++;
}
		z = h / 3 * (pow(a, 3) - 3 + 4 * (pow(a, 3) - 3 + h) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3));
		cout << z;*/


	/*double a = 1, b = 3, e = 0.0001, x1,x=0;
	if ((pow(x, 3) + x - 3) * 3 * pow(x, 2) + 1 > 0) {
		x1 = a;
	}
	else {
		x1 = b;
	}
	x1 = x;
	x1 = x - (pow(x, 3) + x - 3) / (3 * pow(x, 2) + 1);
	if (abs(x1 - x) > e)
	{
		x1 = x;
		x1 = x - (pow(x, 3) + x - 3) / (3 * pow(x, 2) + 1);
	}
	cout << x1;*/


	double a = 1, b = 3, e = 0.0001, x;
	x = (a + b) / 2;
	if ((pow(x, 3) + x - 3) * (3 * pow(x, 2) + 1)<=0)
	{
		b = x;
	}
	else { a = x; }
	if (abs(a - b) / 2 > 2 * e)
	{
		x = (a + b) / 2;
	}
	else {
		cout << "Nothing" << endl;
	}
	cout << x;
}
