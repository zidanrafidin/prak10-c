// Pada program no 2 tambahkan rata-rata, maksimum dan minimum dari angka yang
// dimasukkan.
// Contoh dari input di atas tambahan outputnya adalah sebagai berikut:
// Rata-rata : 4
// Maksimum : 5
// Minimum : 3

#include <stdio.h>
int main(){
    int bilangan, total = 0, start = 1;
    char ulang;
    int max = 0;
    int min = 999999999;

    while(1){
        printf("Masukkan bilangan ke-%d : ", start);
        scanf("%d", &bilangan);
        total += bilangan;
        start++;

        if(bilangan > max){
            max = bilangan;
        }
        if(bilangan < min){
            min = bilangan;
        }

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
    }
    printf("Total bilangan = %d\n", total);
    float rata = total / (start - 1);
    printf("Rata-rata : %.2f\n", rata);

    printf("Maksimum : %d\n", max);
    printf("Minimum : %d\n",min);

    return 0;
}