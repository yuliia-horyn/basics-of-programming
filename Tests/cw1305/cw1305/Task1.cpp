/*#include <iostream>
#include <fstream>
using namespace std;
struct box
{
	double width;
	double height;
	double length;
	box(double a, double b, double c)
	{
		this->width = a;
		this->height = b;
		this->length = c;
	}
	double volume()
	{
		return width * height * length;
	}
};
int main() {

	ifstream fin("task1.txt");
	const int SIZE = 12;
	int g[SIZE];
	if (fin.is_open())
	{
		for (int i = 0; i < SIZE; i++)
		{
			fin >> g[i];
			cout << g[i] << endl;
		}

		fin.close();
	}
	box t1(g[0], g[1], g[2]);
	box t2(g[3], g[5], g[5]);
	box t3(g[6], g[7], g[8]);
	box t4(g[9], g[10], g[11]);
	box arr[4] = { t1, t2,t3,t4 };
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i].volume() << endl;

	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (arr[i].volume() > arr[j].volume())
			{
				box temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted array: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i].volume() << endl;
	}
	/*ofstream myfile("example.txt");
	if (myfile.is_open())
	{
		for (int i = 0; count < SIZE; i++) {
			myfile << arr[i] << " ";
		}
		myfile.close();
	}*/
	//return 0;
//}