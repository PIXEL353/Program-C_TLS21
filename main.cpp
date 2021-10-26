#include <iostream>

using namespace std;

int main()
{
    int sum, av, a, b, c, d, e, f, g;
    
    cout<<"Masukkan pengeluaran hari Senin ";
    cin>>a;
    cout<<"Masukkan pengeluaran hari Selasa ";
    cin>>b;
    cout<<"Masukkan pengeluaran hari Rabu ";
    cin>>c;
    cout<<"Masukkan pengeluaran hari Kamis ";
    cin>>d;
    cout<<"Masukkan pengeluaran hari Jum'at ";
    cin>>e;
    cout<<"Masukkan pengeluaran hari Sabtu ";
    cin>>f;
    cout<<"Masukkan pengeluaran hari Minggu ";
    cin>>g;
    
    sum=a+b+c+d+e+f+g ;
    cout<<"Total Pengeluaran Minggu Ini "<<sum;
    
    av=sum/7 ;
    cout<<"\nRata-Rata Pengeluaran Minggu Ini "<<av;
    
    return 0;
}
