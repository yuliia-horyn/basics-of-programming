#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int n, m, max, r;
	cout << "������ ����� �����: n= " << endl;
	cin >> n;
	cout << "������ ����� �����: m= " << endl;
	cin >> m;
	max = (n > m) ? n : m;
	for (int i = max; 1 == 1; i++)
		if (i % n == 0 && i % m == 0)
		{
			r = i;
			break;
		}
	cout << "�������� ������ ������(" << n << "," << m << ")=" << r << "." << endl;
	system("pause");
	return 0;

}
/*����?�� ����� �����: n=
6
����?�� ����� �����: m=
10
�������� ��?���� ������(6,10)=30.*/