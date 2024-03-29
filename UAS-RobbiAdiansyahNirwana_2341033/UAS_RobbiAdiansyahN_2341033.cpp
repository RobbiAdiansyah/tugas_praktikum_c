#include <stdio.h>
#include <unistd.h>

// Definisi array untuk level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

void pengisianAir() {
	printf("Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    printf("harap tunggu hingga mesin terisi penuh dengan air\n");
    sleep(2*5);
}
// Fungsi untuk mengatur motor utama berdasarkan level kekeruhan air
void aturMotorUtama(int level) {
    // Implementasikan pengaturan kecepatan motor utama sesuai dengan level kekeruhan air
    // ...
    printf("Motor utama berputar dengan kecepatan sesuai level kekeruhan air %d rpm.\n", level);
    
}
void sensorturbin(){
	int level_kekeruhan = kekeruhan_air[1]; // Gantilah dengan nilai dari sensor turbidimeter
    printf("Sensor turbidimeter aktif. Level kekeruhan air: %d.\n", level_kekeruhan);
	sleep(2* 1);
}

void Penghentiansebentar() {
	printf("Motor listrik utama berhenti pada setiap pertengahan waktu.\n");
	sleep(2*5);
}
void putaransisa() {
	printf("Motor listrik utama berputar selama sisa waktu mencuci.\n");
	sleep(2*15);
}
// Fungsi untuk mengatur motor pembuka klep pembuangan air
void buangAirKotor() {
    // Implementasikan pengaturan motor pembuka klep pembuangan air
    // ...
    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis.\n");
    printf("harap tunggu selama 2 menit\n");
    sleep(2*5);
}

// Fungsi untuk mengatur motor utama saat pengeringan
void pengeringan() {
    // Implementasikan pengaturan motor utama saat pengeringan
    // ...
    printf("Motor utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    printf("harap tunggu selama 3 menit\n");
    sleep(2*10);
}

int main() {
    // Tombol Start ditekan
    printf("PROGRAM SIMULASI MESIN CUCI UNTUK UAS \n");
    printf("-----------------------------------------------------\n");
    printf("dibuat oleh robbi adiansyah nirwana nim : 2341033\n");
    printf("-----------------------------------------------------\n\n");
    
    
    printf("Tombol Start ditekan.\n");
	sleep(2*1);
    // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    pengisianAir();
    

    // Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air
    int level_kekeruhan = kekeruhan_air[1]; // Gantilah dengan nilai dari sensor turbidimeter
    printf("Sensor turbidimeter aktif. Level kekeruhan air: %d.\n", level_kekeruhan);
	sleep(2* 1);
    // Motor listrik utama berputar sesuai level kekeruhan air
    aturMotorUtama(level_kekeruhan);

    // Motor listrik utama berhenti pada setiap pertengahan waktu
    Penghentiansebentar();
	
    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    buangAirKotor();
	
    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    pengeringan();
	
    // Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    pengisianAir();
	
    // Motor listrik utama berputar selama sisa waktu mencuci
    putaransisa();
	
    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    buangAirKotor();
	
    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    pengeringan();
	
	
	printf("\nn-----------------------------------------------------\n");
	printf("terimakasih sudah menggunakan program yang saya buat\n");
	printf("tanggal di buat kamis 18 january 2024 pukul 15.36 WIB");
    return 0;
}
