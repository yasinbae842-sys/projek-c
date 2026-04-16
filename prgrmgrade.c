#include <stdio.h>
#include <math.h>
#include <string.h>

void mode1() {
    float a, b, hasil;
    char op[10];

    printf("\nMode 1 - Kalkulator biasa\n");
    printf("Operator: + - * / ** sqrt\n");

    printf("Masukkan operator: ");
    scanf("%s", op);

    if (strcmp(op, "sqrt") == 0) {
        printf("Masukkan angka: ");
        scanf("%f", &a);
        hasil = sqrt(a);
    } else {
        printf("Masukkan angka pertama: ");
        scanf("%f", &a);
        printf("Masukkan angka kedua: ");
        scanf("%f", &b);

        if (strcmp(op, "+") == 0) hasil = a + b;
        else if (strcmp(op, "-") == 0) hasil = a - b;
        else if (strcmp(op, "*") == 0) hasil = a * b;
        else if (strcmp(op, "/") == 0) hasil = a / b;
        else if (strcmp(op, "**") == 0) hasil = pow(a, b);
        else {
            printf("Operator salah!\n");
            return;
        }
    }

    printf("Hasil: %.2f\n", hasil);
}

void mode2() {
    float a, b, hasil;
    char op;

    printf("\nMode 2 - Format (3 + 4)\n");

    if (scanf(" ( %f %c %f )", &a, &op, &b) != 3) {
        printf("Format salah!\n");
        return;
    }

    switch (op) {
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b; break;
        case '/': hasil = a / b; break;
        default:
            printf("Operator salah!\n");
            return;
    }

    printf("Hasil: %.2f\n", hasil);
}

void mode3() {
    FILE *input, *output;
    float a, b, hasil;
    char op;

    input = fopen("ops.txt", "r");
    output = fopen("results.txt", "w");

    if (input == NULL || output == NULL) {
        printf("File error!\n");
        return;
    }

    while (fscanf(input, "%f %c %f", &a, &op, &b) == 3) {
        switch (op) {
            case '+': hasil = a + b; break;
            case '-': hasil = a - b; break;
            case '*': hasil = a * b; break;
            case '/': hasil = a / b; break;
            default:
                fprintf(output, "Error\n");
                continue;
        }

        fprintf(output, "%.2f %c %.2f = %.2f\n", a, op, b, hasil);
    }

    fclose(input);
    fclose(output);

    printf("Hasil disimpan di results.txt\n");
}

int main() {
    int pilihan;

    do {
        printf("\n=== MENU KALKULATOR ===\n");
        printf("1. Kalkulator biasa\n");
        printf("2. Format (3 + 4)\n");
        printf("3. Baca dari file\n");
        printf("0. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: mode1(); break;
            case 2: mode2(); break;
            case 3: mode3(); break;
            case 0: printf("Keluar...\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 0);

    return 0;
}