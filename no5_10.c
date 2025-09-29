// Gunakan while pada program yang digunakan untuk menghitung banyaknya
// karakter dari kalimat yang dimasukkan melalui keyboard (termasuk karakter spasi).
// Untuk mengakhiri pemasukan kalimat, tombol ENTER (‘\n’) harus ditekan
// Input : Ketikkan sembarang kalimat
// Output : jumlah karakter = m
// jumlah spasi =n

#include <stdio.h>

int main() {
    char ch;
    int jumlah_karakter = 0;
    int jumlah_spasi = 0;

    printf("Ketik sembarang kalimat: ");

    while ((ch = getchar()) != '\n') {
        jumlah_karakter++;
        if (ch == ' ') {
            jumlah_spasi++;
        }
    }

    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);

    return 0;
}
