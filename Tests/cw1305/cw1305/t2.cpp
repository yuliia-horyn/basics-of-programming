#include <iostream>
#include <fstream>
using namespace std;
int len_of_file(string file)
{
    int c = 0;
    ifstream in;
    in.open(file);
    string str;
    while (in >> str)
    {
        c++;
    }
    in.close();
    return c;
}
int* read(string filename, int len)
{
    int* name = new int[len];
    ifstream in;
    in.open(filename);
    int i = 0;
    while (in >> name[i])
    {
        i++;
    }
    in.close();
    return name;
}
void symmDiff(int arr1[], int arr2[], int n, int m)
{
  
    int i = 0, j = 0;
    while (i < n && j < m) {

        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << " ";
            j++;
        }

        else {
            i++;
            j++;
        }
    }
    while (i < n) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m) {
        cout << arr2[j] << " ";
        j++;
    }
}
int main() {
    int history = len_of_file("task2in.txt");
    int prog = len_of_file("task2in2.txt");
    symmDiff(read("task2in.txt", history), read("task2in2.txt", prog), history,  prog);
    ofstream out;
    out.open("r.txt");
    if (out.is_open())
    {
        for (int i = 0; i < prog; i++)
        {
            
           out << symmDiff(read("task2in.txt", history), read("task2in2.txt", prog), history, prog);
            
        }
    }
	return 0;
}