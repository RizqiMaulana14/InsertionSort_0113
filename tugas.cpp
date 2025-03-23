#include <iostream>
using namespace std;

int arr [20]; //Membuat array dengan panjang data20
int n; //Membuat variabel inputan n

void input()
{//Prosedur input
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array : "; //Membuat inputan jumlah element array
        cin >> n; //Memanggil variabel inputan n
        
        if (n <= 20)
        {//Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; //Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; //Membuat jarak per baris program
    cout << "======================" << endl; //Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for(int 1 = 0; i < n; i++) //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke-" << (i+1) << ": "; //Memasukkan atau menginput nilai data n
        cin >> arr[i]; //Menyimpan nilai data n ke dalam array arr
    }
    }