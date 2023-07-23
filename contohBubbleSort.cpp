#include<iostream>
using namespace std;

int main(){
	int i, j, temp;
	int a[6] = {77, 42, 35, 12, 101, 5};
	cout << "Elemen sebelum diurutkan: \n";
	for (i=0;i<6;i++){
		cout << a[i]<<"\t";
	}
	cout<<endl;
	//proses swapping untuk pengurutan
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(a[j] > a[i]){
				temp = a[i]; 
				a[i] = a[j]; 
				a[j] = temp; 
			}
		}
	}
	cout << "Elemen setelah diurutkan: \n";
	for(i=0;i<6;i++){
		cout << a[i] << "\t";
	}
	
	return 0;
}
