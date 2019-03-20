#include <iostream>
#include <conio.h>
using namespace std;

void quicksort( int simpan[], int kiri, int kanan){
    int bagi=simpan[(kiri+kanan)/2];
	int i=kiri, j=kanan;
    int tmp;
    

    while(i<=j){
        while(simpan[i]<bagi)
            i++;
        while(simpan[j]>bagi)
            j--;
        if(i<=j){
            tmp=simpan[i];
            simpan[i]=simpan[j];
            simpan[j]=tmp;
            i++;
            j--;
        }
    }

    if(kiri<j)
        quicksort(simpan,kiri,j);
    if(i<kanan)
        quicksort(simpan,i,kanan);
}
main(){
    int simpan[100];
    int i,n,awalbatas,akhirbatas;
    awalbatas=0;
    cout<<"PROGRAM QUICK SORT \n";
    cout<<"\nmasukkan banyak data yang diurutkan : "; cin>>n;

    akhirbatas=n;
    cout<<"\n";
    for(i=1; i<=n; i++)
	{
        cout<<"data ke- "<<i<<" : "; cin>>simpan[i];
    }

    quicksort(simpan,awalbatas,akhirbatas);
    cout<<"\nHasil pengurutan data: ";
    for(i=1; i<=n; i++){
      cout<<" "<<simpan[i];	
	}
      
    return 0;
}
