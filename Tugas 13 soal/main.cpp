#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    //soal 1.
    /*int x,y;
    for ( x = 100, y = 1; x >= 1, y <= 100; x--, y++ ) {
        cout << "x = " << x << " dan y = " << y << endl;
    }*/

    //soal 2.
    /*int x;
    for ( x = 100; x >= 1; x-- ) {
        if ( x % 2 == 1 ) {
            continue;
        }
        cout << x << endl;
    }*/

    //soal 3.
    /*int x;
    for ( x = 100; x >= 1; x-- ) {
        if ( x == 54 ) {
            break;
        }
        cout << x << endl;
    }*/

    //soal 4.
    /*int x,i;
    int angka = 20;
    int jumlah = 1;
    for ( x = 1; x <= 20; x++ ) {
        cout << x << endl;
    }

    for ( i = 1; i <= angka; i++ ) {
        jumlah = jumlah + i;
    }
    cout << endl;

    cout << jumlah << endl;
    cout << jumlah / 20 << endl;*/

    //soal 5.
    /*int x;
    cout << "Program Ini Akan Berhenti jika yang anda inputkan adalah -99!! " << endl;
    cout << endl;

    do {
        cout << "Inputkan Angka" << endl;
        cin >> x;
        cout << endl;
        if ( x == -99 )
            break;
    } while(1);

    cout << "Program Selesai" << endl;*/

    //soal 6.
    /*int x, himpunan, max, min;

    cout << "Program Mencari Nilai Maximum & Minimum" << endl;
    cout << "Inputkan Berapa Banyak Angka: "; cin >> himpunan;
    cout << endl;

    for ( int i = 1; i <= himpunan; i++ ) {
        cout << "Inputkan Angka  :"; cin >> x;

        if ( x == -99 )  {
            break;
        }
        if ( i == 1 ) {
            min = x;
            max = x;
        } else if ( min > x ) {
            min = x;
        } else if ( max < x ) {
            max = x;
        }
    }

    cout << endl;
    cout << "Angka Min :" << min << endl;
    cout << "Angka Max :" << max << endl;*/

    //soal 7.
    /*int x, sum = 0;
    cout << "Program Perhitungan Bilangan Integer loop, akan berhenti jika yang anda inputkan adalah 9999!!" << endl;
    cout << "Inputkan Bilangan :"; cin >> x;

    while ( x != 9999 ) {
        cout << x << endl;
        sum = sum + x;
        cout << "Inputkan Bilangan :"; cin >> x;
    }

    cout << "Total Jumlah :" << sum << endl;*/

    //soal 8.
    /*int x, i = 0;
    cout << "Program Pencacah Bilangan, akan berhenti jika yang anda inputkan adalah 9999!!" << endl;
    cout << "Inputkan Bilangan :"; cin >> x;

    while ( x != 9999 ) {
        cout << x << endl;
        i++;
        cout << "Inputkan Bilangan :"; cin >> x;
    }

    cout << "Total Cacahan :" << i << endl;*/

    //soal 9.
    /*int x, sum = 0, i = 0;
    cout << "Program Penjumlahan Integer & Cacahan, akan berhenti jika yang anda inputkan adalah 9999!!" << endl;
    cout << "Inputkan Bilangan :"; cin >> x;

    while ( x != 9999 ) {
        cout << x << endl;
        sum = sum + x;
        i++;
        cout << "Inputkan Bilangan :"; cin >> x;
    }

    cout << "Total Jumlah :" << sum << endl;
    cout << "Total Cacahan :" << i << endl;*/

    //soal 10.
    /*int x,y;
    cout << "Program Looping 7 Baris" << endl;

    for ( x = 1; x <= 7; x++ ) {
        cout << "Looping yang ke-" << x << endl;
            for ( y = 1; y <= 10; y++ ) {
                cout << "Angka " << y << endl;
            } cout << endl;
    }*/

    //soal 11.
    /*int i,x;
    cout << "Program Looping Perkalian 10 baris" << endl;
    cout << "Inputkan Angka :"; cin >> x;
    for ( i = 1; i <= 10; i ++ ) {
        cout << i << " X " << x << " = " << i * x;
        cout << endl;
    }*/

    //soal 12.
    /*float x,f;

    cout << "Program Derajat Celcius ke Fahrenheit " << endl;
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Celcius\t|\t Fahrenheit\t|" << endl;
    cout << "---------------------------------" << endl;

    for ( x = 0; x <= 100; x++ ) {
        f = x * ( 9/5 ) + 32;
        cout << fixed << setprecision(0) << x << "\t:\t" << fixed << setprecision(1) << f << "\t\t|" << endl;
    }*/

    //soal 13
    /*float x[9] = {100, 40, 37, 30, 21, 10, 0, -18, -40};
    float f;
    string ket[9] = {
        "Air Mendidih",
        "Air Mandi Panas",
        "Temperatur Tubuh",
        "Cuaca Pantai",
        "Temperatur Ruangan",
        "Hari Yang Dingin",
        "Titik Beku Air",
        "Cuaca Dingin Bersalju",
        "Cuaca Sangat Dingin Bersalju"

    };

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Celcius\t|\t Fahrenheit\t|\t\t Keterangan\t\t|" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i <= 8; i++)
    {
        f = (x[i] * 9 / 5) + 32;
        cout << fixed << setprecision(0) << x[i] << "\t:\t";
        cout << fixed << setprecision(1) << f << "\t\t|";

        if (i == 0 || i == 3)
        {
            cout << " " << ket[i] << "\t\t\t\t|" << endl;
        }
        else if (i == 8)
        {
            cout << " " << ket[i] << "\t\t|" << endl;
        }
        else
        {
            cout << " " << ket[i] << "\t\t\t|" << endl;
        }
    }
    cout << "-------------------------------------------------------------------------" << endl;*/

    return 0;
}
