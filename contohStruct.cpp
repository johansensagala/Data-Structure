#include <iostream>
using namespace std;

struct mahasiswa
{
	char nama[60];
	int umur;
	float ipk;
};

int main()
{
	struct mahasiswa m1; // deklarasi variabel struct
	struct mahasiswa m2;
	
	cout << "\n";
	//memasukkan data mahasiswa yang pertama
	cout << "Masukkan nama mahasiswa: ";
	cin >> m1.nama; //input nama melalui variabel struct
	cout << "Masukkan umur mahasiswa: ";
	cin >> m1.umur;
	cout << "Masukkan IPK mahasiswa: ";
	cin >> m1.ipk;
	
	cout << "\n";
	//memasukkan data mahasiswan yang kedua
	cout << "Masukkan nama mahasiswa: ";
	cin >> m2.nama; //input nama melalui variabel struct
	cout << "Masukkan umur mahasiswa: ";
	cin >> m2.umur;
	cout << "Masukkan IPK mahasiswa: ";
	cin >> m2.ipk;
	
	//menampilkan informasi mahasiswa pertama
	cout << "\n-----Informasi Mahasiswa-----" << endl;
	cout << "Nama: "<<m1.nama<<endl;
	cout << "Umur: "<<m1.umur<<endl;
	cout << "IPK: "<<m1.ipk<<endl;
	
	//menampilkan informasi mahasiswa kedua
	cout << "\n-----Informasi Mahasiswa-----" << endl;
	cout << "Nama: "<<m2.nama<<endl;
	cout << "Umur: "<<m2.umur<<endl;
	cout << "IPK: "<<m2.ipk<<endl;
	
	return 0;
}
