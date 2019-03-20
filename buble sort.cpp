#include <iostream>

using namespace std;

int main(){

	bool adutukar=true;
	int n, i, j, temp;
	int x[50];
	i=1;

	cout<<"PROGRAM BUBLE SORT\n";
	cout<<"===================="<<endl;
	cout << "\nMasukkan jumlah angka yang akan diurutkan :  ";
	cin >> n;cout<<"\n";

	for(int a=1;a<n+1;a++){

		cout << "Masukkan angka ke-" <<a<< " : ";
		cin >> x[a];
	}

	while(i<n && adutukar)
	{
		j=1;
		adutukar =false;
		while(j<=(n-i))
		{
			if (x[j]>x[j+1])
			{
				adutukar= true;
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
            }
			j++;
		}
		i++;
    }
    cout<<"\ndata setelah diurutkan : ";
    for(int k=1;k<n+1;k++)
	{
        cout<<x[k]<<" ";
    }
	return 0;
}
