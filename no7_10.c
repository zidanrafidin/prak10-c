#include <stdio.h>
int main (){
    float a, b, c;
    float tabungan = 0;
    int bulan = 0;

    printf("masukkan biaya haji saat ini: ");
    scanf("%f", &a);
    printf("masukkan cicilin tiap bulan: ");
    scanf("%f", &b);
    printf("berapa rata-rata kenaikan tiap tahun (%%): ");
    scanf("%f", &c);

    a = a*1000000;
    float biaya = a;

        while (tabungan < biaya) {
        bulan++;
        tabungan += b;
        if (bulan % 12 == 0) {
            biaya += (c / 100) * a;
        }
    }

    printf("\nHasil Perhitungan:\n");
    printf("Waktu yang dibutuhkan: %d bulan (%.1f tahun)\n", bulan, bulan / 12.0);

    return 0;
}