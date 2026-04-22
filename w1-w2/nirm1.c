#include <stdio.h>

int main() {
    char nama[50];
    int nilai;

    printf("Masukkan nama mahasiswa: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    printf("\n--- Data Mahasiswa ---\n");
    printf("Nama  : %s", nama);
    printf("Nilai : %d\n", nilai);

    return 0;
}