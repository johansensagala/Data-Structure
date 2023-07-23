#include <iostream>
using namespace std;

int main() {
    int *pc; //deklarasi variabel pointer
	int c;
    
    c = 5; //assign nilai 5 ke variabel c
    cout << "Alamat dari c (&c): " << &c << endl; //menampilkan alamat dari variabel c menggunakan operator referensi (&)
    cout << "Nilai dari c (c): " << c << endl << endl;

	c = 11;
	cout << "Alamat dari c (&c): " << &c << endl; //menampilkan alamat dari variabel c menggunakan operator referensi (&)
    cout << "Nilai dari c (c): " << c << endl << endl;
    
    pc = &c; //menetapkan pointer pc untuk menyimpan alamat dari variabel c
	*pc = 2;    // Pointer pc menyimpan alamat dari c
    cout << "Alamat yang dipegang oleh pointer pc (pc): "<< pc << endl;
	cout << "Isi dari alamat yang dipegang oleh pointer pc (*pc): " << *pc << endl << endl;
    
    return 0;
}
