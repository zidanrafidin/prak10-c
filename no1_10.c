// Gunakan loop while untuk membuat program yang dapat menampilkan semua
// karakter yang diketikkan di keyboard sampai yang diketikkan pada keybord huruf
// ‘X’ (x besar).

#include <stdio.h>
int main(){
    char karakter;

    while(karakter != 'X'){
        printf("Masukkan karakter (tekan 'X' untuk keluar): ");
        fflush(stdin);
        scanf(" %c", &karakter);
    }
    return 0;
}