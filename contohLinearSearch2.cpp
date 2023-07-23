#include <iostream>
using namespace std;

int search(int array[], int n, int key){
	for(int i=0;i<n;i++){
		if(array[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	int array[] = {2, 4, 0, 1, 9};
	int key;
	int n = sizeof(array)/sizeof(array[0]);
	//menampilkan elemen dalam array
	cout<<"Elemen dalam array adalah ";
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//meminta user untuk memasukkan elemen yang ingin dicari
	cout<<"Masukkan elemen yang ingin dicari dalam array: ";
	cin>>key;
	
	int result = search(array, n, key);
	if(result==-1){
		cout<<"Elemen tidak ditemukan.";
	}else{
		cout<<"Element ditemukan dalam array pada indeks ke-" <<result;
	}
	return 0;
}
