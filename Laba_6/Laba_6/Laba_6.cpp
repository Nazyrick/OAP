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
		cout << d << endl;
	}else if (c < 3){
		d = y - y * y * y;
		cout << d << endl;
	}
	
	float x=0, y1=0, z=0, nod;
	setlocale (LC_CTYPE,  "Russian");
	cout <<"¬ведите x"<< x << endl; cin >> x;
	cout <<"¬ведите y"<< y1 << endl; cin >> y1;
	cout <<"¬ведите z"<< z << endl; cin >> z;
	for (int i = 1; i <= x; i ++) {
		if ((int)x % i == 0 && (int)y1 % i == 0 && (int)z % i == 0)
			nod = i;
	
	
	
	
	}
	cout << nod;

}


