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
	
	struct mahasiswa m1;// deklarasi variabel struct
	
	//Input data mahasiswa
	for(int i=0;i<3;i++){
		cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
		cout << "Nama mahasiswa : ";
		cin >> m1[i].nama;
		cout << "Umur mahasiswa : ";
		cin >> m1[i].umur;
		cout << "IPK mahasiswa : ";
		cin >> m1[i].ipk;
	}
	
	//Tampilkan informasi mahasiswa yang sudah diinput
	cout << "-----Informasi Mahasiswa-----\n";
	for(int i=0;i<3;i++){
		cout << m1[i].nama <<endl;
		cout << m1[i].umur <<endl;
		cout << m1[i].ipk <<endl;
	}
	return 0;
}
