#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Program Penentuan Permen" << endl;
    cout << "Masukkan Berapa Harga Permen antara 500, 1000, atau 300!" << endl;
    cin >> a;

    if ( a == 500 ) {
        cout << "Dito membeli 5 permen" << endl;
    } else if ( a == 1000 ) {
        cout << "Dito mendapatkan sebanyak " << 5000/1000 << " permen" << endl;
    } else if ( a == 300 ) {
        for ( int i = 600; i <= 5000; i+=300 ) {
            cout << i << endl;
    }
            cout << "Setelah tahu uangnya berapa, Maka permen yang didapat Dito sebanyak " << 5000/300 << " permen" << endl;
    } else {
        cout << "Tidak ada harga permen seperti yang Anda Masukkan" << endl;
    }
    return 0;
}
