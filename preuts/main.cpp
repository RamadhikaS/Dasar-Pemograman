#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void bermain (int &pilihanmenu) {
    char gameloop = 'y';
    int pedang = 3;
    int heal = 2;
    int darah = 10;
    int acakdarah = 0;
    int jumlahmusuh = 3;
    int damagemusuh = 2;
    int pilihanperang = 0;
    vector<int> darahmusuh {8,5,2,6};
    int darahmusuhnow = 0;
    int i = 1;

    srand(static_cast<unsigned int>(time(0)));

    while(gameloop == 'y'){
        cout << endl;
        cout << "=================================" << endl;
        cout << "          Game dimulai           " << endl;
        cout << "=================================" << endl;

        while(jumlahmusuh != 0){

            cout << "Musuh ke : " << i << endl;
            i++;
            acakdarah = rand()% darahmusuh.size();
            darahmusuhnow = darahmusuh[acakdarah];
            cout << "Darah Musuh : " << darahmusuhnow;
            cout << endl;

            while(darahmusuhnow > 0){
                cout << "Darah mu : " << darah << endl;
                cout << "1. Serang" << endl;
                cout << "2. Heal  " << endl;
                cin >> pilihanperang;
                switch(pilihanperang){
                    case 1: {
                        darahmusuhnow = darahmusuhnow - pedang;
                        cout << "Kamu memberi damage : " << pedang << endl;
                            if (darahmusuhnow < 0){
                                darahmusuhnow = 0;
                            } else {
                                darahmusuhnow = darahmusuhnow;
                            }
                        cout << "Sisa darah musuh : " << darahmusuhnow << endl;
                        cout << endl;
                        cout << "Musuh Menyerang memberi damage : " << damagemusuh << endl;
                        darah = darah - damagemusuh;
                        cout << "Sisa darah mu : " << darah << endl;
                        cout << endl;
                    }
                    case 2: {
                        cout << "Kamu menggunakan Heal" << endl;
                        darah = darah + 3;
                        cout << "darahmu sekarang : " << darah << endl;s

                    }
                }
            }
            --jumlahmusuh;
        }
        gameloop = 'n';
    }
}

int main()
{
    int pilihanmenu = 0;


    cout << "=================================" << endl;
    cout << "---------------------------------" << endl;
    cout << " Selamat Datang di Dungeon Quest " << endl;
    cout << "---------------------------------" << endl;
    cout << "=================================" << endl;
    cout << "==                             ==" << endl;
    cout << "==         1. Mainkan          ==" << endl;
    cout << "==         2. Keluar           ==" << endl;
    cout << "==                             ==" << endl;
    cout << "=================================" << endl;
    cout << "Pilihan : ";
    cin >> pilihanmenu;

    switch(pilihanmenu) {
        case 1: {
            bermain(pilihanmenu);
            cout << "selesai" << endl;
            break;
        }

        case 2: {
            cout << "Keluar" << endl;
            break;
        }
    }

    return 0;
}
