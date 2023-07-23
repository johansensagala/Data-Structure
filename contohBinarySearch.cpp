#include <iostream>
using namespace std;

int main(){
	int array[] = {3, 4, 5, 6, 7, 8, 9};
	int key; //variable untuk menyimpan nilai yang ingin dicari
	int low, mid, high, i;
	bool found = false;
	
	//menampilkan elemen dalam array
	cout<<"Elemen dalam array adalah ";
	for(i=0;i<7;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//meminta user untuk memasukkan elemen yang ingin dicari
	cout<<"Masukkan elemen yang ingin dicari dalam array: ";
	cin>>key;
	
	//inisialisasi nilai awal untuk low dan high
	low = 0; //nilai terkecil ada di indeks ke-0
	high = 6; //nilai terbesar ada di indeks ke-6
	
	while(low<=high){
		mid = (low + high)/2; //mencari indeks/nilai tengah dari array
		if(key>array[mid]){
			low = mid + 1;
		}
		//apabila nilai yang dicari lebih kecil dari nilai mid
		else if(key<array[mid]){
			high = mid - 1;
		}else{
			found = true;
			break;
		}
	}
	//jika elemen ditemukan atau tidak
	if(found==true){
		cout<<"Elemen " << key << " ditemukan dalam array pada indeks ke-" << mid <<endl; 
	}else{
		cout<<"Elemen tidak ditemukan di dalam array.";
	}
	return 0;
}
