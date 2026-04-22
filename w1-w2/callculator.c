#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float a, b, hasil;
    char op[10];
    char lagi;

    float history[100];
    int count = 0;

    do {
        printf("\n=== Kalkulator ===\n");
        printf("Operator: +  -  *  /  **  sqrt\n");

        printf("Masukkan operator: ");
        scanf("%s", op);

        if (strcmp(op, "sqrt") == 0) {
            printf("Masukkan angka: ");
            scanf("%f", &a);

            if (a < 0) {
                printf("Error: Tidak bisa akar negatif!\n");
                continue;
            }

            hasil = sqrt(a);
        } else {
            printf("Masukkan angka pertama: ");
            scanf("%f", &a);

            printf("Masukkan angka kedua: ");
            scanf("%f", &b);

            if (strcmp(op, "+") == 0) {
                hasil = a + b;
            } else if (strcmp(op, "-") == 0) {
                hasil = a - b;
            } else if (strcmp(op, "*") == 0) {
                hasil = a * b;
            } else if (strcmp(op, "/") == 0) {
                if (b == 0) {
                    printf("Error: Pembagian nol!\n");
                    continue;
                }
                hasil = a / b;
            } else if (strcmp(op, "**") == 0) {
                hasil = pow(a, b);
            } else {
                printf("Operator tidak valid!\n");
                continue;
            }
        }

        history[count++] = hasil;

        printf("Hasil: %.2f\n", hasil);

        printf("\n--- History ---\n");
        for (int i = 0; i < count; i++) {
            printf("%d. %.2f\n", i + 1, history[i]);
        }

        printf("\nHitung lagi? (y/n): ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    printf("Program selesai.\n");
    return 0;
}