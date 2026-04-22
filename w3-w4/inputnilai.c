#include <stdio.h>


char tentukanGrade(int nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

int main() {
    int n;
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    
    char nama[n][50];
    int nilai[n];
    char grade[n];
    int total = 0;

    
    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Masukkan nama: ");
        scanf(" %[^\n]", nama[i]); 

        printf("Masukkan nilai: ");
        scanf("%d", &nilai[i]);

        grade[i] = tentukanGrade(nilai[i]);
        total += nilai[i];
    }

   
    float rata = (float) total / n;

    
    printf("\n===== DATA MAHASISWA =====\n");
    printf("No\tNama\t\tNilai\tGrade\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%c\n", i + 1, nama[i], nilai[i], grade[i]);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

    return 0;
}
