#include <iostream>

using namespace std;

char kode, berat;
int beli, harga;

int main (){
	
	cout<<"PABRIK SUSU\n";
	cout<<"Kode Susu 1 : Dancow\n";
	cout<<"Kode Susu 2 : Indomilk\n";
	cout<<"Kode Susu 3 : Sustacal\n";
	
	cout<<"Masukan Pilihan :\n";
	cin>>kode;
	cout<<endl;
	
	cout<<"Pilihan Gram Susu :\n";
	cout<<"B = Besar\n";
	cout<<"S = Sedang\n";
	cout<<"K = Kecil\n";
	
	cout<<"Masukan Berat Gram (B/S/K) : ";
	cin>>berat;
	
	cout<<"Masukan Jumlah Pembelian :";
	cin>>beli;
	
	if (berat = 1)
	{
		cout<<"Susu Dancow\n";
	}
	else if (berat = 2)
	{
		cout<<"Susu Indomilk\n";
	}
	else if (berat = 3)
	{
		cout<<"Susu Sustacal\n";
	}
	else
	{
	if (berat = 'b')
	{
		cout<<"ukuran = Berat \n";
		harga = 10000;
	}
	else if (berat = 's')
	{
		cout<<"ukuran = Sedang\n";
		harga = 8500;
	}
	}
	if (berat = 'k')
	{
		cout<<"ukuran = Kecil \n";
		harga = 8300;
	''}
	else {
		cout<<"Ukuran salah";
	}
		cout<<"Jumlah beli :" << beli << endl;
	
		cout<<"Total Harga " << beli * harga;
	}
