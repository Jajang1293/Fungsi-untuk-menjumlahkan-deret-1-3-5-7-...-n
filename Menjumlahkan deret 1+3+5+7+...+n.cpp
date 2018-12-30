#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int a=0, b, c, jumlah=0, i, n;

	cout<<"Masukkan Jumlah Deret Bilangan\n";
	cout<<"Masukkan Bilangan Awal : ";
	cin>>a;
	cout<<"Masukkan Beda : ";
	cin>>b;
	cout<<"Masukkan Jumlah Sampai Deret Ke-n : ";
	cin>>n;

	cout<<"Total Deret "<<n<<" : ";
	cout<<a<<",";
	jumlah=jumlah+a;
	for(i=0; i<n-1; i++){
			c=a+b;
			a=c;
			cout<<c<<",";
			jumlah=jumlah+c;
	}

	cout<<"\nJumlah Total Deret "<<n<<" : ";
	cout<<jumlah;

	getch();
	return 0;
}
