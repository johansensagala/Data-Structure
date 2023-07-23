#include <iostream>
using namespace std;

int main(){
	int contoh[4] = {8, 2, 1, 6}; //deklarasi array
	int *ptrContoh; //deklarasi variabel pointer yg akan menunjuk ke array contoh
	
	cout << "Menampilkan alamat elemen array menggunakan array dan operator referensi: " << endl;
	for(int i = 0; i<4; i++){
		cout << "&contoh[" << i << "] = " << &contoh[i] << endl;
	}
	
	cout << "Menampilkan alamat elemen array menggunakan pointer: " << endl;
	ptrContoh = contoh; //menyimpan alamat array contoh ke variabel ptrContoh
	for (int i = 0; i<4; i++){
		cout << "pointer + " << i << " = " << ptrContoh + i << endl;
	}
	
	cout<<"Menampilkan nilai dari elemen array: "<<endl;
	cout<<"Akses berdasarkan indeks : " <<contoh<<endl;
	cout<<"Akses menggunakan pointer : "<<*ptrContoh<<endl;
	cout<<"Akses elemen ketiga berdasarkan indeks: "<<contoh[2]<<endl;
	ptrContoh = &contoh[2];
	cout<<"Akses elemen ketiga menggunakan pointer: "<<*ptrContoh<<endl;
	cout<<"Akses elemen keempat menggunakan pointer: "<<(*ptrContoh + 1)<<endl;
	return 0;
}
