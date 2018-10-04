#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, n;
	float angka[50], total=0;
	
	cout << "\n----- Program Mencari Rerata dari Sejumlah Angka yang Dimasukkan ke dalam Deret Array -----"<<endl;
	cout << "Banyak Angka yang Dimasukkan = ";cin>>n;
	
	for (i=1; i<=n; i++)
	{
		cout << "Masukkan Angka ke-" << i << " = ";cin>>angka[i];
		total += angka[i];
	}
	cout << "Rerata dari Angka yang Anda Masukkan adalah = " << total/n << endl;
	return 0;
}
