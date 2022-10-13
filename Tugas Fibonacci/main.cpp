#include <iostream>

using namespace std;

int main()
{
    int n = 11;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "Program Perhitungan Deret Fibonacci yang kurang dari 100" << endl;

    cout << endl;

    cout << "Hasil Deretnya Adalah:" << endl;

    f_n1 = 0;
    f_n2 = 1;
    cout << f_n1 << endl;
    cout << f_n2 << endl;
    for ( int i = 1; i < n; i++) {
        f_n = f_n1 + f_n2;
        f_n1 = f_n2;
        f_n2 = f_n;
        cout << f_n << endl;
    }
    return 0;
}
