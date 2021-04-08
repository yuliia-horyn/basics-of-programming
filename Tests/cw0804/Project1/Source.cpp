#include <iostream>
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
int main() {
    int n;
    cout << "Enter n= " << endl;
    cin >> n;
    int m;
    cout << "Enter m= " << endl;
    cin >> m;
    if (m == n) {
        cin >> m;
    }
    int* a = input(n);
    int* b = input(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            i = b[j];
            a[i] = a[i];
        }
    }
    print(a, n);
    delete[]a;
	return 0;
}