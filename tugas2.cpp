#include <iostream>
using namespace std;
int main ()
{
	int a;
	string kode[100];
	string judul[100];
	string pengarang[100];
	string penerbit [100];
	string halaman[100];
	
	cout<<"\n\t\t----------Data Buku Perpustakaan----------\n\n";
	cout<<"Masukan Jumlah Buku : ";
	cin>>a;
	cout<<endl;
	for(int i=1; i<=a;i++)
	{
	    cout << "Masukan Kode Buku : ";
        cin>>kode[i];
        cout << "Masukan Judul Buku : ";
        cin>>judul[i];
        cout << "Masukan Pengarang Buku : ";
        cin>>pengarang[i];
        cout << "Masukan Penerbit Buku : ";
        cin>>penerbit[i];
        cout << "Masukan Jumlah Halaman Buku : ";
        cin>>halaman[i];
        cout<<endl;
	}
	cout<<endl;
	cout<<"Data Buku Yang Dimasukan "<<endl;
	for(int j=1;j<=a;j++)
	{
		cout<<"Kode buku : "<<kode[j]<<endl;
        cout << "Judul buku : "<<judul[j]<<endl;
        cout << "Pengarang buku : "<<pengarang[j]<<endl;
        cout << "Jenerbit buku : "<<penerbit[j]<<endl;
        cout << "Jumlah halaman buku : "<<halaman[j];
        cout<<"\n\n";
	}
}
