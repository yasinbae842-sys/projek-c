#include <stdio.h>

int main() {
    FILE *input, *output;
    float a, b, hasil;
    char op;

    input = fopen("ops.txt", "r");
    output = fopen("results.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error membuka file!\n");
        return 1;
    }

    while (fscanf(input, "%f %c %f", &a, &op, &b) == 3) {

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
                    fprintf(output, "Error: pembagian nol\n");
                    continue;
                }
                hasil = a / b;
                break;
            default:
                fprintf(output, "Operator tidak valid\n");
                continue;
        }

        fprintf(output, "%.2f %c %.2f = %.2f\n", a, op, b, hasil);
    }

    fclose(input);
    fclose(output);

    printf("Hasil sudah ditulis ke results.txt\n");
    return 0;
}