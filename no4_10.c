// Dengan menggunakan pernyataan looping, buatlah program berikut:
// input: n
// output:
// 0 1 3 6 10 15 21 28 .... Bilangan ke n

#include <stdio.h>
int main(){
    int n, i = 0, total = 0;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    while(i <= n){
        total += i;
        printf("%d ", total);
        i++;
    }
    return 0;
}