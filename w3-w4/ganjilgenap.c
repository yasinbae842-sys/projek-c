#include <stdio.h>


void cekBilangan(int angka) {
    if (angka % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
}

int main() {
    int n, angka;

    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        printf("\nBilangan ke-%d: ", i);
        scanf("%d", &angka);

        printf("Hasil: ");
        cekBilangan(angka); 
    }

    return 0;
}