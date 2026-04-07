// 12S25013 - Kornelius Dwi Yuda Nababan  SDFGHJKPL[;'
 
#include <stdio.h>

// Buat struct untuk menu makanan
typedef struct {
    char* nama;       // Nama menu
    char* kesimpulan; // Kesimpulan level
} Menu;

int main() {
    int level;

    // Definisikan semua menu
    Menu daftarMenu[5] = {
        {"staple food", "you need side dishes"},
        {"side dishes", "you need vegetables"},
        {"vegetables", "good"},
        {"fruits", "very good"},
        {"milk", "perfect"}
    };

    // Input level dari user
    scanf("%d", &level);

    // Tampilkan menu sampai level yang dipilih
    for (int i = 0; i < level; i++) {
        printf("%s\n", daftarMenu[i].nama);
    }

    // Tampilkan kesimpulan dari level terakhir
    printf("%s\n", daftarMenu[level - 1].kesimpulan);

    return 0;
}