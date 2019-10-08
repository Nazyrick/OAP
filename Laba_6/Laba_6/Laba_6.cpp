#include <iostream>
using namespace std;

int main()
{
	float f = 125e-6, y = 1.7, t = 1, c, d;
	while (t < 2.1)
	{
		c = 2 * sin(f / 2) + log10(t);
		t = t + 0.1;
	}
	if (c >= 3) {
		d= exp(-2 * t) + f;
		cout << d;
	}else if (c < 3){
		d = y - y * y * y;
		cout << d;
	}
		

}


