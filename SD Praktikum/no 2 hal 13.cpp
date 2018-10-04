#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int i, n;
	float a, angka[50], total, kuadrat[i], jumlah;
	
	cout << "----- Program Menghitung Standar Deviasi dari Sejumlah Angka yang Dimasukkan -----"<<endl;
	cout << "Banyak Angka yang Dimasukkan = ";cin>>n;
	
	for (i=1; i<=n; i++)
	{
		cout << "Masukkan Angka ke-" << i << " = ";cin>>angka[i];
		total += angka[i];
		kuadrat[i] = pow(angka[i],2);
		jumlah += kuadrat[i];
	}
	
	a = pow(total,2);
	cout << "Standar Deviasi dari Angka di atas adalah = " << sqrt((n*jumlah-a)/(n*(n-1))) << endl;
	return 0;
}
