#include <iostream>
using namespace std;

struct Node{
	int data; //variabel untuk menyimpan nilai yang dimasukkan oleh user
	Node *next; //variabel pointer untuk menyimpan alamat dari node berikutnya
};

struct Node *head; //variabel pointer untuk menyimpan alamat dari elemen/node yang pertama yang ada di dalam list

void insertDiAwal(int bilangan){
	Node *nodeBaru = new Node(); //alokasi tempat di memori untuk node baru yang ditambahkan ke dalam list
	nodeBaru -> data = bilangan;
	nodeBaru -> next = head;
	head = nodeBaru;	
}

void display(){
	Node *temp = head;
	cout << "Elemen dalam list adalah ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->next;
	cout<<endl;
}

int main(){
	head = NULL; //menandakan list masih kosong
	insertDiAwal(4);
	display();
	insertDiAwal(8);
	insertDiAwal(3);
	display();
	return 0;
}

