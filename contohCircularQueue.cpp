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
	if((rear+1)%max == front)
		return true;
	else
		return false;
}

//fungsi untuk insert/input elemen ke dalam antrian
void enqueue(int bilangan){
	if(isFull()){
		cout << "Antrian penuh. Tidak bisa menambahkan elemen.";
		return;
	} else if(isEmpty()){
		front = rear = 0;
	} else {
		rear = (rear+1) % max;
	} 
	queue[rear] = bilangan;
	cout << bilangan << " sudah masuk dalam antrian.\n";
}

int dequeue(){
	int temp;
	if(isEmpty()){
		cout << "Antrian kosong. Tidak ada yang perlu dihapus.\n";
		return(-1);
	}
	else {
		temp = queue[front]; //menyimpan bilangan yang ada di front
		if(front == rear){
			front = -1;
			rear = -1;
			cout << "Elemen sudah dihapus. Antrian sekarang kosong.\n";
		} else{
			front = (front + 1) % max;
		}
		return (temp);. 
	}
}

void display(){
	int i;
	if(isEmpty()){
		cout << "Antrian kosong. Input elemen ke dalam antrian.\n" << endl;
	} else{
		cout << "Elemen dalam antrian adalah ";
		for(i=front; i!=rear; i = (i + 1) % max)
			cout << queue[i] << " ";
		cout << queue[i];
		cout << endl;
	}
}

int main(){
	int pilihan, bilangan, hapus;
	
	do{
		cout << "\n=== Menu Circular Queue ===\n";
		cout << "1) Enqueue \n"
			 << "2) Dequeue \n"
		 	 << "3) Display \n"
		 	 << "4) Keluar \n";
		cout << "Masukkan pilihan anda: " << endl;
		cin >> pilihan;
		switch(pilihan){
			case 1:
				cout << "Masukkan elemen ke dalam antrian : ";
				cin >> bilangan;
				enqueue(bilangan);
				break;
			case 2:
				hapus = dequeue();
				cout << hapus << " sudah dihapus dari antrian.\n";
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

