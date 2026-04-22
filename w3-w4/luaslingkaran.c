#include <stdio.h>


float hitungLuas(float r) {
    return 3.14 * r * r;
}

int main() {
    float jari_jari, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    luas = hitungLuas(jari_jari);

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}
