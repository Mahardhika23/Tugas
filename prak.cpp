#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n[100];
	string MK[100];
	int nilai[100];
	int jml;

	cout<<"Masukan Jumlah Mahasiswa : ";
	cin>>jml;
	for (int i = 0; i < jml; i++)
	{
	cout<<"masukan nama mahasiswa : ";
	cin>>n[i];
	cout<<"masukan mata kuliah yang diambil : ";
	cin>>MK[i];
	cout<<"masukan nilai mahasiswa : ";
	cin>>nilai[i];
	cout<<endl;
	}
	
	for (int j = 0; j < jml; j++)
	{
	cout<<"\ntampilkan data"<<endl;
	cout<<"Nama : "<<n[j]<<" Nilai Matkul : "<<MK[j]<<" adalah : "<<nilai[j]<<endl;
	}
	
	return 0;
}
