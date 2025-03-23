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

    for(int i = 0; i < n; i++) //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke-" << (i+1) << ": "; //Memasukkan atau menginput nilai data n
        cin >> arr[i]; //Menyimpan nilai data n ke dalam array arr
    }
}

void insertionSort ()
{//Procedur InsertSort
    int temp; //Membuat variabel data temporer atau penyimpanan sementara
    int j, i; //Membuat variabel j sebagai penanda
    
    for (i = 1; i <= n; i++)
    {//step 1
        temp = arr[i]; //step 2
        j = i - 1; //step 3
        
        while(j >=0 && arr[j] > temp) //Step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
    arr[j + 1] = temp; //step 5
    }
}
void display()
{
    cout << endl; //Output baris kosong
    cout << "======================" << endl;
    cout << "Total Pass = " << n-1 << endl; //count element movement
    cout << "======================" << endl; //output ke layar
    cout << "Element Array yang telah tersusun" << endl; //output ke layar
    cout << "======================" << endl; //output ke layar
    
    for (int j = 0; j < n; j++)
    { //Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; //output ke layar
    }
    cout << endl; //output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}