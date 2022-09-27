#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "Ketik Nomor Jurusan Anda! " << endl;
    cout << "1. Teknik Informatika " << endl;
    cout << "2. Sistem Informasi " << endl;
    cout << "3. Desain Komunikasi Visual " << endl;

    cout << endl ;

    cin >> a;

    cout << endl;

    cout << "Semester Berapakah Anda? ( Ketikkan Dalam Bentuk Angka! ) " << endl;

    cout << endl;

    cin >> b;

    cout << endl;

    if ( a < 2 ) {
        cout << "Jurusan anda adalah Teknik Informatika! " << endl;
    }

    if ( a < 3 && a > 1 ) {
        cout << "Jurusan anda adalah Sistem Informasi! " << endl;
    }

    if ( a < 4 && a > 2 ) {
        cout << "Jurusan anda adalah Desain Komunikasi Visual! " << endl;
    }

    if ( b <= 2 ) {
        cout << "Dan Anda termasuk dalam Kategori Mahasiswa Freshman Year" << endl;
    }

    if ( b <= 4 && b >= 3 ) {
        cout << "Dan Anda termasuk dalam Kategori Mahasiswa Sophomore Year" << endl;
    }

    if ( b <= 6 && b >= 5 ) {
        cout << "Dan Anda termasuk dalam Kategori Mahasiswa Junior Year" << endl;
    }

    if ( b <= 8 && b >= 7 ) {
        cout << "Dan Anda termasuk dalam Kategori Mahasiswa Senior Year" << endl;
    }
    cout << "" << endl;

    return 0;
}
