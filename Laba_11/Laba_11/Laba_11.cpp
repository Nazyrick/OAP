#include <iostream>

#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Russian");

	/*int a = 0;*/
	/*int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 1, 3, 2, 4, 5 };


	for (int k = 0; k < 5; k++)


		if (A[k] > B[k])
			a++;
	cout << a << endl;
	for (int k = 0; k < 5; k++)


		if (A[k] < B[k])
			a++;
	cout << a << endl;
	for (int k = 0; k <= 5; k++)


		if (A[k] = B[k])
			a++;
	cout <<"Сумма элементов равна : "<< a;

	return a;*/
	int V[] = { 1,3,5,7,9,3,1,4,7,6,4,2,8,5,3}, i;
	int count;
	const int N = 15 ;
	int a = 0;
	int k;
	for (i = 0;i<N;i++) {
		for (count = k = 0;k <= i;k++)
		
			if (V[i] == V[k]) count++;
		if (count == 1) {
			a++;
				cout << V[i];
		}	
		cout << a << endl;
	}



}
