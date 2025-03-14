#include <iostream>

using namespace std;

int main() {
    const int ukuran = 5;
    int arr[ukuran];

    // Input elemen array dari pengguna
    cout << "Masukkan 5 elemen array" << endl;
    for (int i = 0; i < ukuran; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan alamat dan nilai menggunakan pointer
    cout << "\nAlamat dan Nilai dari Setiap Elemen Array\n";
    for (int i = 0; i < ukuran; i++) {
        cout << "Alamat: " << (arr + i) << " | Nilai: " << *(arr + i) << endl;
    }

    return 0;
}
