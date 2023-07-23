#include <iostream>
using namespace std;

//fungsi untuk menampilkan isi array
void display(int array[], int ukuran){
	for (int i=0;i<ukuran;i++){
		cout << array[i] << " ";
	}
}

//fungsi untuk tukar elemen array atau swapping
void tukarElemen(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

//fungsi selection sort
void selectionSort(int array[], int ukuran){
	for(int i=0;i < ukuran-1;i++){ 
		int min = i; //ambil nilai dari i simpan sebagai elemen terkecil (indeks)
		for(int j = i+1;j<ukuran;j++){ 
			//lakukan perbandingan antara minimum elemen dgn elemen berikutnya
			if(array[j] < array[min])
				min = j;
		}
		tukarElemen(&array[min], &array[i]);
	}
}

int main(){
	int nilai[] = {20, 12, 10, 15, 2};
	int ukuran = sizeof(nilai)/sizeof(nilai[0]);
	cout << "Isi array sebelum diurutkan: \n";
	display(nilai, ukuran);
	selectionSort(nilai, ukuran);
	cout << "\nIsi array setelah diurutkan dalam ascending order: \n";
	display(nilai, ukuran);
	
	return 0;
}
