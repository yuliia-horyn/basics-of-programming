#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int n, m, max, r;
	cout << "Введіть перше число: n= " << endl;
	cin >> n;
	cout << "Введіть друге число: m= " << endl;
	cin >> m;
	max = (n > m) ? n : m;
	for (int i = max; 1 == 1; i++)
		if (i % n == 0 && i % m == 0)
		{
			r = i;
			break;
		}
	cout << "Найменше спільне кратне(" << n << "," << m << ")=" << r << "." << endl;
	system("pause");
	return 0;

}
/*Введ?ть перше число: n=
6
Введ?ть друге число: m=
10
Найменше сп?льне кратне(6,10)=30.*/