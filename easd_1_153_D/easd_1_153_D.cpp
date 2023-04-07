//1. Agar suatu masalah dapat diselesaikan dengan cepat dan efektif
//2. (A)Struktur data linear
//	 (B)Struktur data non linear
//3. Struktur data, Penggunaan sumber daya, Pemilihan algoritma
//4. Insertion sort, karena algoritma ini sangat efisien pada data kecil
//5. Loglinear : Quick sort, Merge sort
//	 Quadratic : Bubble sort, Insertion sort, Selection sort

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;

    cout << "Masukkan panjang array: ";
    cin >> n;

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
