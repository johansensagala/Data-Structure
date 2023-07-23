#include <iostream>
using namespace std;

//fungsi untuk menampilkan isi array
void display(int array[], int ukuran){
	for (int i=0;i<ukuran;i++){
		cout << array[i] << " ";
	}
}

//fungsi untuk insertion sort
//untuk cara kerja insertion sort lihat di lecture slides
void insertionSort(int array[], int ukuran){
	for(int i=1;i<ukuran;i++){
		int key = array[i];
		int j = i - 1;
		while(key < array[j] && j>=0){
			array[j+1] = array[j]; //proses swapping 
			j--;
		}
		array[j+1] = key;
	}
}

int main(){
	int nilai[] = {9, 5, 1, 4, 3};
	int ukuran = sizeof(nilai)/sizeof(nilai[0]);
	cout << "Isi array sebelum diurutkan: \n";
	display(nilai, ukuran);
	insertionSort(nilai, ukuran);
	cout << "\nIsi array setelah diurutkan dalam ascending order: \n";
	display(nilai, ukuran);
	
	return 0;
}

