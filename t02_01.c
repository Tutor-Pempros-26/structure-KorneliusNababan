  // 12S25013 - Kornelius Dwi Yuda Nababan 

  #include <stdio.h>

// Struct untuk menyimpan data buku
typedef struct {
    int jumlah;
    float harga;
} Buku;

int main() {
    Buku beli;
    float total, diskon = 0; // diskon awal 0
     
    // Input jumlah buku dan harga per buku
    scanf("%d", &beli.jumlah);
    scanf("%f", &beli.harga);

    // Hitung total harga
    total = beli.jumlah * beli.harga;

    // Hitung diskon
    if (total > 500000) diskon = total * 0.15;
    else if (total >= 100000) diskon = total * 0.10;
    else if (total > 50000)  diskon = total * 0.05;

    // Tampilkan potongan
    if (diskon == 0) printf("---\n");
    else printf("%.2f\n", diskon);

    // Tampilkan total bayar
    printf("%.2f\n", total - diskon);

    return 0;
} 