//Buatlah program untuk menghitung jumlah angka dari suatu bilangan.
//Contohnya :
//Jumlah angka dari bilangan 3255 = 3 + 2 + 5 + 5 = 15
// Jumlah angka dari bilangan 4589 = 4 + 5 + 8 + 9 = 26
// dan sebagainya.
#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;   // ambil digit terakhir
        sum += digit;     // tambahkan ke jumlah
        n = n / 10;       // buang digit terakhir
    }

    printf("Jumlah angka = %d\n", sum);
    return 0;
}
