#include <iostream>
using namespace std;

//contoh struct terpisah
struct alamat //struct pendukung
{
	char namaJalan[60];
	int noRumah;
	char kecamatan[60];
	int kodePos;
};

struct mahasiswa //struct utama
{
	char nama[60];
	int umur;
	float ipk;
	struct alamat a1; //deklarasi variabel struct alamat
};

int main()
{
	struct mahasiswa m1; // deklarasi variabel struct
	
	cout << "\n";
	//memasukkan data mahasiswa yang pertama
	cout << "Masukkan nama mahasiswa: ";
	cin >> m1.nama; //input nama melalui variabel struct
	cout << "Masukkan umur mahasiswa: ";
	cin >> m1.umur;
	cout << "Masukkan IPK mahasiswa: ";
	cin >> m1.ipk;
	cout << "Masukkan alamat mahasiswa (nama jalan): ";
	cin >> m1.a1.namaJalan;
	cout << "Masukkan alamat mahasiswa (nomor rumah): ";
	cin >> m1.a1.noRumah;
	cout << "Masukkan alamat mahasiswa (kecamatan): ";
	cin >> m1.a1.kecamatan;
	cout << "Masukkan alamat mahasiswa (kode pos): ";
	cin >> m1.a1.kodePos;
	
	//menampilkan informasi
	cout << "\n-----Informasi Mahasiswa-----" << endl;
	cout << "Nama: "<<m1.nama<<endl;
	cout << "Umur: "<<m1.umur<<endl;
	cout << "IPK: "<<m1.ipk<<endl;
	cout << "Alamat: "<<endl;
	cout << "\tNama Jalan: "<<m1.a1.namaJalan<<endl;
	cout << "\tNo. Rumah: "<<m1.a1.noRumah<<endl;
	cout << "\tKecamatan: "<<m1.a1.kecamatan<<endl;
	cout << "\tKode Pos: "<<m1.a1.kodePos<<endl;
	
	return 0;
}
