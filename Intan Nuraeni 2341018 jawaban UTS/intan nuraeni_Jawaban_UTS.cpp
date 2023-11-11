#include <stdio.h>

// Fungsi untuk menghitung nilai tengah pada array
int hitungNilaiTengah(int array[], int ukuran) {
    return array[ukuran / 2];
}

// Fungsi untuk simulasi motor listrik utama
void putarMotorUtama() {
    printf("Motor Utama Berputar 180 Derajat\n");
}

// Fungsi untuk simulasi motor listrik lengan tungkai
void putarMotorTungkai() {
    printf("Motor Tungkai Berputar 45 Derajat\n");
}

// Fungsi untuk simulasi motor listrik jari robot
void gerakMotorJari() {
    printf("Motor Jari Bergerak Mendekati Objek\n");
}

// Fungsi untuk simulasi proses pengelasan
void prosesPengelasan(int waktu) {
    printf("Proses Pengelasan Berlangsung selama %d detik\n", waktu);
}

int main() {
    // Array ketebalan pengelasan
    int ketebalan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int ukuran = sizeof(ketebalan) / sizeof(ketebalan[0]);

    // Tombol Start ditekan
    putarMotorUtama();

    // Pengulangan untuk setiap ketebalan pengelasan
    for (int i = 0; i < ukuran; i++) {
        // Hitung nilai tengah
        int nilaiTengah = hitungNilaiTengah(ketebalan, ukuran);

        // Motor listrik utama pindah ke nilai tengah
        printf("Motor Utama Pindah ke Nilai Tengah %d\n", nilaiTengah);

        // Motor listrik lengan tungkai aktif
        putarMotorTungkai();

        // Motor listrik jari robot mendekati objek
        gerakMotorJari();

        // Proses pengelasan sesuai ketebalan
        prosesPengelasan(i + 1);

        // Proses selesai, ulangi untuk ketebalan berikutnya
    }

    return 0;
}
