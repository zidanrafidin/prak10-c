// Gunakan loop while untuk membuat program yang dapat menampilkan semua
// karakter yang diketikkan di keyboard sampai yang diketikkan pada keybord huruf
// ‘X’ (x besar).

#include <stdio.h>

int main() {
    char ch;

    printf("Ketikkan karakter (akhiri dengan 'X'):\n");

    // baca 1 karakter dulu
    scanf(" %c", &ch);

    // selama karakter bukan 'X'
    while (ch != 'X') {
        printf("Anda mengetik: %c\n", ch);

        // baca karakter berikutnya
        scanf(" %c", &ch);
    }

    printf("Program berhenti karena Anda mengetik 'X'.\n");

    return 0;
}
