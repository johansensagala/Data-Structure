#include <iostream>
using namespace std;

struct mahasiswa{
	char nama[60];
	int umur;
	float ipk;
};

//fungsi untuk mengambil data mahasiswa dengan tipe fungsi struktur
mahasiswa getData(mahasiswa mhs1){
	//meminta input dari user
	cout<<"Silahkan memasukkan data berikut:"<<endl;
	cout<<"Masukkan nama anda: ";
	cin>>mhs1.nama;
	//cin.get(mhs1.nama,60); //cara input supaya whitespace/spasi terbaca
	cout<<"Masukkan umur anda: ";
	cin>>mhs1.umur;
	cout<<"Masukkan ipk anda: ";
	cin>>mhs1.ipk;
	
	return mhs1;
}

void displayData(mahasiswa mhs1){
	cout<<"\n----Informasi Mahasiswa----"<<endl;
	cout<<"Nama : " << mhs1.nama <<endl;
	cout<<"Umur : " << mhs1.umur<<endl;
	cout<<"IPK : " << mhs1.ipk<<endl;
}

int main(){
	mahasiswa m1;
	m1 = getData(m1);
	displayData(m1);
	return 0;
}
