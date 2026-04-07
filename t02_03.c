// 12S25013 - Kornelius Dwi Yuda Nababan 
#include <stdio.h>

// Struct untuk operasi
typedef struct {
    char op;       // Operator: +, -, *
    int total;     // Total hasil operasi
    int count;     // Jumlah input bilangan
} Kalkulator;

int main() {
    Kalkulator kalk;
    int angka;

    // Input operator
    scanf(" %c", &kalk.op);

    // Inisialisasi total
    if (kalk.op == '*') kalk.total = 1;
    else kalk.total = 0;

    kalk.count = 0;

    while (kalk.count < 5) {
        scanf("%d", &angka);

        // Stop jika input -1
        if (angka == -1) break;

        // Tampilkan operator dan bilangan yang dioperasikan
        printf("%c\n", kalk.op);
        if (kalk.count > 0) printf("%d\n", kalk.total);

        // Hitung operasi
        if (kalk.op == '+') kalk.total += angka;
        else if (kalk.op == '-') kalk.total -= angka;
        else if (kalk.op == '*') kalk.total *= angka;

        // Tampilkan hasil operasi
        printf("%d\n", kalk.total);

        kalk.count++;
    }

    // Tampilkan -1 jika berhenti lebih awal
    if (angka == -1) printf("-1\n");

    // Tampilkan total terakhir
    printf("%d\n", kalk.total);

    return 0;
}
