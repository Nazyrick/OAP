#include <iostream>
using namespace std;
int main()
{
	
	/*double a = 5, b = 11, n = 200, x = a;
	double h, s = 0;
	h = (b - a) / n;
	while (x < (b - h)) {
		s += s + h * (pow(2.71, x) + 2 + (pow(2.71, x) + 2 + h));
		x += h;
	}
	cout << s;*/
	/*double z, a = 5, b = 11, n = 200, s1 = 0, s2 = 0,h , i = 1, x;
	h = (b - a / 2 * n);
	x = a + 2 * h;
	while (i > n){
		s2 += s2 + exp(x) + 2;
		s1 += s1 + exp(x) + 2;
		x += h;
		i++;
	}
	z = h / 3 * (exp(a) + 2 + 4 * (exp(a) + h + 4 * s1 + 2 * s2 + exp(b) + 2));
	cout << z;*/
	/*double a = 5, b = 11, e = 0.0001, x1 = a,x;
	if ((exp(a) + 2*pow(a,2) - 3)*(exp(a))>0){
		x1 = a;
	}
	x = x1;
	x1 = x - (exp(x) + 2 * pow(x, 2) - 3 / exp(x));
	if (abs(x1 - x) > e) {
		x = x1;
	}
	 else {cout << x1;}
	 */
	double a = 5, b = 11, e = 0.0001, x;
	x = (a + b) / 2;
	if ((exp(a) + 2 * pow(a, 2) - 3) * (exp(a)) <= 0)
	{
		b = x;
	}
	else { a = x; }
	if (abs(a - b) > 2 * e) { x = (a + b) / 2; ; }
	else { cout << "nothing" << endl; }

	cout << x;

}

