#include <stdio.h>
#include <stdlib.h>

struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n, i;

    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);
    getchar(); // bersihkan newline

    struct Karyawan *kar;
    kar = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    for(i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i+1);

        printf("Nama  : ");
        fgets(kar[i].nama, sizeof(kar[i].nama), stdin);

        printf("Umur  : ");
        scanf("%d", &kar[i].umur);

        printf("Gaji  : ");
        scanf("%f", &kar[i].gaji);
        getchar(); // bersihkan newline lagi
    }

    printf("\n=== Data Karyawan ===\n");
    for(i = 0; i < n; i++) {
        printf("%d. Nama: %sUmur: %d | Gaji: %.2f\n",
               i+1, kar[i].nama, kar[i].umur, kar[i].gaji);
    }

    free(kar);
    return 0;
}