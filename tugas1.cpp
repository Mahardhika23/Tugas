#include <iostream>

using namespace std;
int main()
{
	int a[8];
	int jml;

	for (int i = 0; i < 7; i++)
	{
		cout<<"Masukan Jumlah Aray ke "<<i+1<<" : ";
		cin>>a[i];
	}
	jml = 0;
	for (int j = 0; j < 7; j++)
	{
		jml=jml+a[j];
	}
	cout<<"Jumlah Seluruh Aray : "<<jml;
	return 0;
}
