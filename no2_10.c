// Gunakan loop while untuk membuat program yang dapat mencari total angka yang
// dimasukkan dengan tampilan sebagai berikut :
// Masukkan bilangan ke-1 : 5
// Mau memasukkan data lagi [y/t] ? y
// Masukkan bilangan ke-2 : 3
// Mau memasukkan data lagi [y/t] ? t
// Total bilangan = 8
#include <stdio.h>
int main(){
    int bilangan, total = 0, start = 1;
    char ulang;

    while(1){
        printf("Masukkan bilangan ke-%d : ", start);
        scanf("%d", &bilangan);
        total += bilangan;
        start++;

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &ulang);

        if(ulang == 't' || ulang == 'T'){
            printf("Total bilangan = %d\n", total);
            break;
        } else if (ulang =='y' || ulang == 'Y'){
            continue;
        } else {
            printf("Input tidak valid. Program dihentikan.\n");
            continue;
    }
    printf("Total bilangan = %d\n", total);
    }return 0;
}