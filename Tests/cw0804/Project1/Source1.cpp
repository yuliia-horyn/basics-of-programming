/*#include <iostream>
using namespace std;
int* input(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a;
}
void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\t';
    }
}
void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main() {
    int n;
    cout << "Enter n= " << endl;
    cin >> n;
    int* a = input( n);
    print(a, n);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(&a[i], &a[i + 1]); }
        if ((a[i] < a[i + 1]))
             cout << "arr is sorted" << endl;
        else
             cout << "arr is not sorted" << endl;
        }
    print(a, n); 
    delete[]a;
	return 0;
}*/