#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pilihan, max, angka, tebakan, percobaan;

    srand(time(NULL));

    while (1) {
        printf("=== GAME TEBAK ANGKA ===\n");
        printf("1. Easy (1 - 10)\n");
        printf("2. Medium (1 - 100)\n");
        printf("3. Hard (1 - 1000)\n");
        printf("4. Keluar\n");
        printf("Pilih level: ");
        scanf("%d", &pilihan);

        if (pilihan == 4) {
            printf("Terima kasih sudah bermain!\n");
            break;
        }

        
        if (pilihan == 1) max = 10;
        else if (pilihan == 2) max = 100;
        else if (pilihan == 3) max = 1000;
        else {
            printf("Pilihan tidak valid!\n\n");
            continue;
        }

        angka = rand() % max + 1;
        percobaan = 0;

        printf("\nTebak angka antara 1 sampai %d\n", max);

        do {
            printf("Masukkan tebakan: ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan > angka) {
                printf("Terlalu besar!\n");
            } else if (tebakan < angka) {
                printf("Terlalu kecil!\n");
            } else {
                printf("🎉 Benar! Angkanya adalah %d\n", angka);
                printf("Jumlah percobaan: %d\n", percobaan);
            }

        } while (tebakan != angka);

        printf("\nMain lagi? (1 = ya, 0 = tidak): ");
        int ulang;
        scanf("%d", &ulang);

        if (ulang == 0) {
            printf("Terima kasih sudah bermain!\n");
            break;
        }

        printf("\n");
    }

    return 0;
}