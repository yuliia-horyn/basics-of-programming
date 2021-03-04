/*using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	char input, alphabet = 'A';
	int n;
	cout << "Введіть кількість рядків n = : ";
	cin >> n;

	for (int i = 1; i <= (n + 1); ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << alphabet << " ";
		}
		++alphabet;

		cout << endl;
		
	}
	cout << "Ось піраміда літер з відповідною кількістю рядків"<<endl;
	system("pause");
	return 0;
	/*n=7
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
Ось піраміда літер з відповідною кількістю рядків
	
}*/