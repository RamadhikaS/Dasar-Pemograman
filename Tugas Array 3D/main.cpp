#include <iostream>

using namespace std;

int main()
{
    int array [3][2][2];
    int isi = 2;
    float rata;
    int jumlah;

    for ( int k = 0; k < 2; k++ ) {
        for ( int i = 0; i < 3; i++ ) {
            for ( int j = 0; j < 2; j++ ) {
                array [i][j][k] = isi;
                isi += 2;
            }
        }
    }

    cout << "PROGRAM ARRAY [3][2][2] :" << endl;

    for ( int k = 0; k < 2; k++ ) {
        for ( int i = 0; i < 3; i++ ) {
            for ( int j = 0; j < 2; j++ ) {
                cout << array [i][j][k] << "   ";
            } cout << endl;
        } cout << endl;
    }


    cout << "Bilangan Array Kelipatan 4 :" << endl;

    for ( int k = 0; k < 2; k++ ) {
        for ( int i = 0; i < 3; i++ ) {
            for ( int j = 0; j < 2; j++ ) {
                if ( array [i][j][k] % 4 == 0 ) {
                    cout << array [i][j][k];
                    jumlah += array [i][j][k];
                    rata = jumlah / 6;
                }
            } cout << endl;
        } cout << endl;
    }

    cout << "SUM Bilangan Kelipatan 4 = " << jumlah << endl;
    cout << "Rata rata Bilangan Kelipatan 4 = " << rata << endl;
    return 0;
}
