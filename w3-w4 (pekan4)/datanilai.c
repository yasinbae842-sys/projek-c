#include <stdio.h>
#include <stdlib.h>


struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n, i;
    float total = 0, rata;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    
    struct Mahasiswa *mhs;
    mhs = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    
    for(i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i+1);
        printf("Nama  : ");
        scanf("%s", mhs[i].nama);
        printf("Nilai : ");
        scanf("%f", &mhs[i].nilai);

        total += mhs[i].nilai;
    }

    
    rata = total / n;

    
    printf("\n=== Data Mahasiswa ===\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s - %.2f\n", i+1, mhs[i].nama, mhs[i].nilai);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

   
    free(mhs);

    return 0;
}