#include <iostream>
using namespace std;

int main(){
	//deklarasi variabel pointer yang belum menunjuk ke alamat manapun dalam memori
	int *pointer = NULL; 
	
	//minta alokasi memori di Heap menggunakan new operator
	pointer = new int;
	if(!pointer){
		cout << "Gagal mengalokasikan memori.";
	} else{
		*pointer = 5;
		cout << "Alamat yg ditunjuk oleh pointer adalah : " << pointer <<endl;
		cout <<"Nilai pointer sebelum diubah adalah : " << *pointer <<endl;
		
		*pointer = 12;
		cout << "Alamat yg ditunjuk oleh pointer sesudah perubahan adalah : " << pointer <<endl;
		cout <<"Nilai pointer sesudah diubah adalah : " << *pointer <<endl;
		
		pointer = new int(10); //melakukan reassign
		cout << "Alamat yg ditunjuk oleh pointer sesudah reassign adalah : " << pointer <<endl;
		cout <<"Nilai pointer sesudah reassign adalah : " <<*pointer<<endl;
	}
	delete pointer;
	return 0;
}
