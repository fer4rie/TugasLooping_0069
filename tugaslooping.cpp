#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

// Function untuk memeriksa apakah bilangan n merupakan bilangan prima
bool cekPrima(int n) { // Bilangan prima adalah bilangan yang hanya memiliki dua faktor, yaitu 1 dan dirinya sendiri
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) { 
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// Function untuk memeriksa apakah bilangan n termasuk dalam deret Fibonacci
bool cekFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) return true;
        int next = a + b;
        a = b;
        b = next;
    }
    return false;
}

// Prosedur menerima input angka dari pengguna
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

// Prosedur tampilkan hasil cek bilangan prima
void tampilPrima() {
    inputAngka();
    if (cekPrima(angka))
        cout << angka << " adalah bilangan prima.\n";
    else
        cout << angka << " bukan bilangan prima.\n";
}

// Prosedur tampilkan hasil cek bilangan Fibonacci
void tampilFibonacci() {
    inputAngka();
    if (cekFibonacci(angka))
        cout << angka << " termasuk dalam deret Fibonacci.\n";
    else
        cout << angka << " bukan termasuk dalam deret Fibonacci.\n";
}

// Function menu
void menu() {
    cout << "\n=== MENU UTAMA ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
}

int main() { //main function menggunakan while loop
    while (true) {
        menu();
        switch (pilihan) {  //menu pilihan melalui switch 
            case 1:
                tampilPrima();
                break;
        case 2:
                tampilFibonacci();
                break;
        case 0:
                cout << "Program selesai. Terima kasih!\n";
                return 0;
        default:
                cout << "Pilihan tidak valid.\n";
        }
    }
}