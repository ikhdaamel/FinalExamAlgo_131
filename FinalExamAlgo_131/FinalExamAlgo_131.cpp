#include <iostream> 
#include <string> 
using namespace std;

class Mahasiswa {
	const int MAX_MAHASISWA = ;

	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];

	int jumlahMahasiswa = 0;
};

void insert() {
	void tambahMahasiswa(
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM        : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama       : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();

			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	);
}


void tampilkanSemuaMahasiswa();

	int NIM;
	string nama;
	int tahun;

void algorithmaCariMahasiswaByNIM();

void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			insert();
			break;
		case 2:
			tampilkanSemua();
			break;
		case 3:
			search();
			break;
		case 4:
			display();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}

//2. algoritma yang digunakan dalam kasus diatas adalah circular linkedlist dan double linkedlist

//3. perbedaan antara algoritma stack dan queue adalah
//   algoritma stack :
//   - cara penyimpanan data dengan menumpuk
//   - yang paling akhir masuk, keluar duluan (last in first out = LIFO)
//   - kumpulan data yang bisa diakses melalui 1 sisi saja
//   algoritma queues :
//   - aplikasi dari banyak user
//   - dalam waktu yang sama hanya menjalankan 1 request
//	 - yang pertama dikerjakan adalah yg pertama masuk (first in first out = FIFO)

//4. algoritma stack digunakan pada saat meenyimpan suatu data dengan cara menumpuk

//5. a. kedalaman yang dimiliki struktur tersebut adalah 4
//   b. cara membacanya yaitu
//     - in = salah, harusnya : 1 5 8 (10) 12 15 20 22 25 28 30 36 38 40 45 48 50
//	   - pre = benar
//     - post = benar