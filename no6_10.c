#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    printf("Jumlah angka dari bilangan %d = ", n);
    while (n != 0) {
        digit = n % 10;   // ambil digit terakhir
        sum += digit;     // tambahkan ke jumlah
        n = n / 10;       // buang digit terakhir

        if(n!=0){
            printf("%d + ",digit);
        } else {
            printf("%d",digit);
        }
    }
    printf(" = %d\n", sum);

    return 0;
}
