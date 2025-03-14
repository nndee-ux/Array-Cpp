#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    // Memasukkan Ukuran Matriks
    cout << "Masukkan ukuran Matrix (n x n): ";
    cin >> n;

    // Deklarasi matriks menggunakan vector
    vector<vector<int>> matrix(n, vector<int>(n));
    
    // Mengisi matriks dengan angka berurutan
    int angka = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = angka++;
        }
    }

    // Menampilkan Matriks sebelum diputar
    cout << "Array 2D " << n << "x" << n << " sebelum diputar\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Memutar Matriks 90 derajat searah jarum jam
    vector<vector<int>> rotated(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    cout << endl;

    // Menampilkan Matriks setelah diputar
    cout << "Array 2D " << n << "x" << n << " sesudah diputar 90 derajat\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
