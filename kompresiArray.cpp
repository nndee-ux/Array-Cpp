#include <iostream>

using namespace std;

int compressArray(char arr[], int size) {
    int pos = 0, count, i = 0;
    
    while (i < size) {
        char current = arr[i];
        count = 1;
        
        while (i + 1 < size && arr[i + 1] == current) {
            count++;
            i++;
        }
        
        arr[pos++] = current;
        
        if (count > 1) {
            char numStr[10];
            int digits = 0, temp = count;
            
            do {
                numStr[digits++] = (temp % 10) + '0';
                temp /= 10;
            } while (temp);
            
            for (int j = digits - 1; j >= 0; j--) {
                arr[pos++] = numStr[j];
            }
        }
        i++;
    }
    return pos;
}

void printArray(const char arr[], int length, const string &label) {
    cout << label << " [";
    for (int i = 0; i < length; i++) {
        cout << "'" << arr[i] << "'";
        if (i < length - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    cout << "=======================\n";
    cout << "Program Kompresi Array \n";
    cout << "=======================\n";

    int n;
    cout << "Masukkan nilai yang diinginkan: ";
    cin >> n;
    cout << "\n";

    cout << "Karakter hanya berupa huruf (a-z atau A-Z) \n";

    char arr[n], originalArr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan karakter ke-" << i + 1 << ": ";
        cin >> arr[i];
        originalArr[i] = arr[i];
    }
    
    cout << "\nArray sebelum dikompresi" << endl;
    printArray(originalArr, n, "Input:");
    
    int newSize = compressArray(arr, n);
    
    cout << "\nArray setelah dikompresi" << endl;
    printArray(arr, newSize, "Compressed:");
    
    cout << "Array yang sudah terkompresi adalah " << newSize << endl;
    
    return 0;
}