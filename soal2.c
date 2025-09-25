#include <stdio.h>

int main() {
    int tahun;

    // Meminta input dari pengguna
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    // Menentukan apakah tahun kabisat atau tidak
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun kabisat\n");
    } else {
        printf("Bukan tahun kabisat\n");
    }

    return 0;
}
