#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int mtk;
    int bing;
    double r;
    string status;
};

void display() 
{
    mahasiswa mhs[20];
    for (int i = 0; i < 3; i++) 
    {
        cout << "Peserta Ke - " << i + 1 << endl;
        cout << "Masukkan Nama Peserta = ";
        cin >> mhs[i].nama;
        cout << "Masukkan Nilai Matematika = ";
        cin >> mhs[i].mtk;
        cout << "Masukkan Nilai Bahasa Inggris = ";
        cin >> mhs[i].bing;
        mhs[i].r = (mhs[i].mtk + mhs[i].bing) / 2;
    }

    cout << "Nama\t Status\n";
    for (int i = 0; i < 3; i++)
    {
        if (mhs[i].r >= 70 || mhs[i].mtk > 80)
        {
            mhs[i].status = "\tDiterima\n";
            cout << mhs[i].nama << mhs[i].status;
        }
        else
        {
            mhs[i].status = "\tDitolak\n";
            cout << mhs[i].nama << mhs[i].status;
        }
    }
}
int main()
{
    char pil;
    do 
    {
        display();
        cout << "\n\nApakah Anda Ingin Mengulang? (Y/y) = ";
        cin >> pil;
    } while (pil == 'y' || pil == 'Y');
}

//1. deklarasi variable
//   int umur = 20; untuk bilangan bulat
//   std:: string nama = paijo; 
//   float berat badan = 72.8; untuk bilangan pecahan

//2. conditional statement
//   include <iostream>

//   int main() { //digunakan apabila terdapat 2 kondisi
//   int num = 10;
//   if (num > 5) {
    //   std::cout << "Num lebih besar dari 5\n";
//   }
//   else {
    //   std::cout << "Num tidak lebih besar dari 5\n";
//   }
//   return 0;
//   }

//3. struct
// include <iostream>

//struct mahasiswa {
//    std::string nama;
//    int umur;
//    std::string kota;
//};

//int main() {
// Membuat objek dari struct Person
    //mahasiswa mhs;
    //mhs.nama = "Joni";
    //mhs.umur = 24;
    //mhs.kota = "Bayern";

    // Mengakses anggota struct
    //std::cout << "Nama: " << mhs.nama << std::endl;

    //return 0;
//}

//4. prosedur dan fungsi
//#include <iostream>

// Prosedur untuk menyapa dunia
//void fungsi() { //prosedur tidak menyimpan nilai
    //std::cout << "Halo World!\n";
//}

//int main() { // fungsi mengembalikan nilai
    //fungsi(); // Memanggil prosedur greet()
    //return 0;
//}

//5.looping 
//#include <iostream>

//int main() {
    //for (int i = 1; i <= 5; ++i) { // digunakan untuk perulangan
        //std::cout << "Nilai i: " << i << std::endl;
    //}
    //return 0;
//}