/*#include <iostream>;
using namespace std;
int main() {
    int n, m;
    cout << "N=";
    cin >> n; 
    cout << "M=";
    cin >> m; 
    cout << "Enter matrix: \n";
    int** mt = new int* [n];
    for (int i = 0; i < n; i++) {
        mt[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> mt[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mt[i][j] << '\t';
        }
        cout << endl;
    }
    int i,j,sumv, sumn;
    for ( sumv = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (j > i) sumv += mt[i][j];
    for (sumn = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (j < i) sumn += mt[i][j];
    if (sumv > sumn) cout << " Sum of up triangle is bigger = " << sumv;
    else cout << "Sum of down triangle is bigger = " << sumn;
    for (int i = 0; i < n; i++) {
        delete[]mt[i];
    }
    delete[]mt;
    return 0;
}*/