#include <iostream>
using namespace std;

int main()
{
	int bilangan[5]; //deklarasi array untuk menyimpan 5 buah bilangan
	int n, result=0; //n adalah variabel untuk perulangan (looping), result adalah variabel untuk menyimpan hasil penjumlahan
	
	cout << "Masukkan 5 bilangan yang akan dijumlahkan : \n";
	
	//looping untuk membaca/scan 5 input dari user
	for(n=0;n<5;++n)
	{
		cout << "Masukkan bilangan ke-" << n+1 << "\n" ;
		cin >> bilangan[n];
	}
	
	for(n=0;n<5;++n)
	{
		result = result + bilangan[n]; //sama dengan --> result += bilangan[n];
	}
	cout << "Hasil penjumlahan adalah : " << result;
	return 0;
}
