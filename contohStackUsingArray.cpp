//Implementasi Stack menggunakan Array
#include <iostream>
using namespace std;

#define max 5 //mendefinisikan nilai yg sama untuk variabel max di sepanjang program (konstan)

int stack[max]; //deklarasi array untuk menyimpan elemen
int top = -1; //inisialisasi stack kosong (empty stack)

//fungsi untuk cek apakah stack kosong
int isEmpty(){
	if(top == -1)
		return 1; //true
	else
		return 0; //false
}

//fungsi untuk cek apakah stack penuh
int isFull(){
	if(top == max - 1)
		return 1; //true
	else
		return 0; //false
}

//fungsi untuk input elemen ke dalam stack
void push(int x){
	if(isFull()){ //cek apakah stack sudah penuh
		cout << "Stack penuh. Tidak bisa push." << endl;
		return;
	}
	else{ //jika stack belum penuh
		top++; //nilai top (indeks array) akan ditambahkan 1 (top = top + 1 atau top += 1)
		stack[top] = x; //assign nilai dari x ke stack indeks sesuai top
		//atau stack[++top] = x;
		cout << x << " sudah masuk ke dalam stack." << endl;
	}
}

//fungsi untuk menghapus elemen dari dalam stack
void pop(){
	if(isEmpty()){
		cout << "Stack kosong. Tidak ada yang perlu dihapus dari stack." << endl;
		return;
	}
	else{
		int temp;
		temp = stack[top];
		top--;
		cout << temp << " sudah dihapus dari stack." << endl;
	}
}

int topOfStack(){
	return stack[top];
}

void display(){
	if(isEmpty()){
		cout << "Stack kosong." << endl;
		return;
	}
	for(int i=top;i>=0;i--){
		cout << endl;
		cout << stack[i];
	}
	cout << endl;
}

int main(){
	int num; //variabel untuk menyimpan bilangan yang akan dimasukkan oleh user
	int pilihan; //variabel untuk menyimpan pilihan menu
	int elemenTop; //variabel untuk mengambil nilai dari elemen teratas dari fungsi topOfStack
	do{
		cout << "===Menu Stack===" << endl;
		cout << "1. Display \n" 
			 << "2. Push \n"
			 << "3. Pop \n"
			 << "4. Top of Stack \n"
			 << "5. Keluar\n";
		cout << "Masukkan pilihan anda: ";
		cin >> pilihan;
		switch(pilihan){
			case 1:
				display();
				break;
			case 2:
				cout << "Input bilangan integer: ";
				cin >> num;
				push(num); //panggil fungsi push
				break;
			case 3:
				pop(); //panggil fungsi pop
				break;
			case 4:
				elemenTop = topOfStack();
				cout << "Elemen teratas adalah " << elemenTop << endl;
				break;
			default:
				cout << "Pilihan yg anda masukkan salah!\n";
		}
	}while(pilihan!=5);
	cout<<"Elemen terakhir dalam stack adalah " << stack[max-1];
	return 0;
}


