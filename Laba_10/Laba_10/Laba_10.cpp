#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	//char tmp[33];
	//int A, maskA = 1<<31;
	//	cout << "Введите число="; cin >> A;
	//	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;

	//	//itoa_s(число ввода, строка вывода, основание с / с).
	//	_itoa_s(A |maskA, tmp, 2);
	//	tmp[0] = '0';
	//	cout << tmp<<endl;
	//	for (int i = 0, p = 5;i < 5;i++, p++) {
	//		if (tmp[size(tmp) - p] == '0')

	//		{
	//			tmp[size(tmp) - p] = '1';
	//		}
	//		else {
	//			tmp[size(tmp) - p] = '0';
	//		}
	//	}
	//		
	//	cout << tmp;


	char tmp[33];
	int A,n,p,m,q,B, maskA = 1<<31, maskB = 1 << 31;
		cout << "Введите число="; cin >> A;
		_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
		_itoa_s(A | maskA, tmp, 2);
				tmp[0] = '0';
		cout << tmp << endl;
		cout << "Введите n" << endl;
		cin >> n;
		cout << "Введите p" <<  endl;
		cin >> p;
		for (int i = 0;i < n;p++,i++)
		{
			tmp[size(tmp) - p] = '0';
		}
		cout << tmp<<endl;
		cout << "Введите число="; cin >> B;
		_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
		_itoa_s(B | maskA, tmp, 2);
		cout << "Введите m" << endl;
		cin >> m;
		cout << "Введите q" << endl;
		cin >> q;
		_itoa_s(((B & maskB) | ((A & maskA) >> q)), tmp, 2);
		
		

}

