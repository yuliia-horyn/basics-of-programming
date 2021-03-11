#include <iostream>
using namespace std;
int element(int i)
{
	int a_1 = -1;
	int a_0 = 1;
	if (i == 0)
		return a_0;

	if (i == 1)
		return a_1;


	for (int j = 2; j <= i; ++j) {
		a_1 = -a_1 + 4 * pow(a_0, 2) + 1;
	}
	return a_1;
}
int sum(int n)

{
	int sum = 0;
	if (n == 1)
		return sum;

	for (int i = 1; i <= n; i++)
	{
		sum =element(i) +sum(i - 1);
	}
	return sum;





int main() {
	int n;
	cin >> n;
	int n, sum;
	
	

	sum =sum(n);
	cout << " sum: " << sum;



	system("pause");
	return 0;
}