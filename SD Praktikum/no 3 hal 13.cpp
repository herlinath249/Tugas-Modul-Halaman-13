#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char kata[50];
    int i, j,k;
    cout<<"\n----- Program Menampilkan Tulisan yang Berkurang Satu Setiap Barisnya Hingga Berakhir -----"<<endl;
    cout<<"Masukkan Kata    = "<<endl;
    cin>>kata;
    i=strlen(kata);
    i--;
    cout<<"Keluaran    ="<<endl;
    for(j=i;j>=0;j--)
    {
    	for(k=0;k<=i;k++)
       	{cout<<kata[k];}
       	cout << endl;
       	i--;
    }
    getch();
    return 0;
}
