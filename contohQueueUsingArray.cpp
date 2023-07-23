#include <iostream>
using namespace std;

#define max 5 // mendefinisikan variabel max dengan nilai tetap

int queue[max]; //array untuk menyimpan elemen antrian
int front = -1, rear = -1; //variabel sebagai pintu masuk (rear) & keluar (front)

//fungsi untuk cek apakah antrian kosong
bool isEmpty(){
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}

//fungsi untuk cek apakah antrian penuh
bool isFull(){
	if(rear == max-1)
		return true;
	else
		return false;
}

//fungsi untuk insert/input elemen ke dalam antrian
void enqueue(int bilangan){
	if(isFull()){
		cout << "Antrian penuh. Tidak bisa menambahkan elemen.";
		return;
	} else if(isEmpty()){ //kondisi ketika input bilangan yg pertama
		front = 0; // front = rear = 0;
		rear = 0;
	} else {
		rear++; //rear = rear + 1 atau rear += 1
	} 
	queue[rear] = bilangan;
	cout << bilangan << " sudah masuk dalam antrian.\n";
}

//fungsi untuk hapus elemen dari antrian
void dequeue(){
	if(isEmpty()){
		cout << "Antrian kosong. Tidak ada yang perlu dihapus.\n";
		return; //keluar dari fungsi dequeue
	}
	else if(front == rear){ //kondisi ketika tersisa satu elemen di dalam antrian
		front = -1;
		rear = -1; //front = rear = -1;
		cout << "Elemen sudah dihapus. Antrian sekarang kosong.\n";
	} else{
		cout << "Elemen yang dihapus dari antrian adalah " << queue[front] << endl;
		front++; 
	}
	//cout << queue[0] << endl;
	//cout << queue[1] << endl;
	//cout << queue[2] << endl;
	//cout << queue[3] << endl;
	//cout << queue[4] << endl;
}

void display(){
	if(isEmpty()){
		cout << "Antrian kosong. Input elemen ke dalam antrian.\n" << endl;
	} else{
		cout << "Elemen dalam antrian adalah ";
		for(int i=front; i<=rear; i++){
			cout << queue[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	int pilihan, bilangan;
	
	do{
		cout << "\n=== Menu Queue ===\n";
		cout << "1) Enqueue \n"
			 << "2) Dequeue \n"
		 	 << "3) Display \n"
		 	 << "4) Keluar \n";
		cout << "Masukkan pilihan anda: " << endl;
		cin >> pilihan;
		switch(pilihan){
			case 1:
				
				if(isFull()){
					cout << "Antrian penuh. Tidak bisa menambahkan elemen.";
				} else{
					cout << "Masukkan elemen ke dalam antrian : ";
					cin >> bilangan;
					enqueue(bilangan);
				}
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				cout << "Anda sudah keluar dari program." << endl;
				break;
			default:
				cout << "Pilihan yang anda masukkan salah."<<endl;
		}
	}while(pilihan != 4);
	return 0;
}

