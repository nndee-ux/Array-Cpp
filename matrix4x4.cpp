#include <iostream>

using namespace std;

int main() {
    int n = 4;
    int matrix[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int *px;
    px = &matrix[0][0];
    int *cadanganPx = px;

    // MENAMPILKAN MATRIKS SEBELUM ROTASI
    cout << "\nMatriks 4x4 sebelum rotasi:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *cadanganPx << "  ";
            cadanganPx++;
        }
        cout << endl;
    }

    // ROTASI 90 DERAJAT MENGGUNAKAN POINTER
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = *(px + i * n + j);
            *(px + i * n + j) = *(px + (n - j - 1) * n + i);
            *(px + (n - j - 1) * n + i) = *(px + (n - i - 1) * n + (n - j - 1));
            *(px + (n - i - 1) * n + (n - j - 1)) = *(px + j * n + (n - i - 1));
            *(px + j * n + (n - i - 1)) = temp;
        }
    }

    // MENAMPILKAN MATRIKS SETELAH ROTASI
    cout << "\nMatriks 4x4 setelah rotasi 90 derajat:\n";
    px = &matrix[0][0]; // Kembalikan pointer ke awal matriks
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(px + i * n + j) << "  ";
        }
        cout << endl;
    }

    return 0;
}
