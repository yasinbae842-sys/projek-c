#include <stdio.h>

int main() {
    float a, b, hasil;
    char op;

    while (1) {
        printf("\nMasukkan operasi (contoh: (3 + 4)) atau q untuk keluar:\n");

        if (getchar() == 'q') {
            break;
        } else {
            ungetc('\n', stdin);
        }

        if (scanf(" ( %f %c %f )", &a, &op, &b) != 3) {
            printf("Format salah! Contoh benar: (3 + 4)\n");
            while (getchar() != '\n'); // bersihkan buffer
            continue;
        }

        switch (op) {
            case '+':
                hasil = a + b;
                break;
            case '-':
                hasil = a - b;
                break;
            case '*':
                hasil = a * b;
                break;
            case '/':
                if (b == 0) {
                    printf("Error: Pembagian nol!\n");
                    continue;
                }
                hasil = a / b;
                break;
            default:
                printf("Operator tidak valid!\n");
                continue;
        }

        printf("Hasil: %.2f\n", hasil);
    }

    printf("Program selesai.\n");
    return 0;
}