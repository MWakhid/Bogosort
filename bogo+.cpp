#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
 
// Mengecek urutan data
bool urut(double arr[], int n)
{
    for(int i=0;i<n;i++){
	
        if (arr[i] < arr[i-1]){
		
            return false;}}
    return true;
}
 
// Mengacak data
void acak(double arr[], int n)
{
	int total;
    for (int i = 0; i < n; i++)
        swap(arr[i], arr[rand() % n]);
        cout<<total<<". ";
        for(int j=0;j<n;j++){
        	cout<<arr[j]<<" ";
		}
		total++;
		cout<<endl;
}
 
// Untuk memulai bogosort
void bogosort(double arr[], int n)
{
	//Jika terurut=false
	//maka acak lagi
    while (!urut(arr, n))
        acak(arr, n);
}
 
//Output array
void printArray(double arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

int main()
{	
	int i,pil,n,p,l,a,t;
	double arr[n],hasil;
	cout<<"Masukkan jumlah bangun : ";cin>>n;
	
	do{
	cout<<"Bangun ke "<<i<<endl;
	cout<<"Pilih bangun"<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Segitiga"<<endl;
	cout<<"Pilihan anda : ";cin>>pil;
	switch(pil){	
	case 1:
		cout<<"Masukkan panjang : ";cin>>p;
		cout<<"Masukkan lebar : ";cin>>l;
		hasil=p*l;
		cout<<"Hasil: "<<hasil<<endl;
		arr[i]=hasil;
			cout<<"+++++++++++++++++++++++++"<<endl;
		break;
	case 2:
		cout<<"Masukkan panjang alas: ";cin>>a;
		cout<<"Masukkan tinggi : ";cin>>t;
		hasil=0.5*a*t;
		cout<<"Hasil: "<<hasil<<endl;
		arr[i]=hasil;
		cout<<"+++++++++++++++++++++++++"<<endl;
		break;
			
	default:
		break;	}
		i++;
	}while(i<n);
	getch();
	cout << "Luas semua bangun : ";
		printArray(arr,n);

	cout <<endl;
	getch();
	 bogosort(arr,n);
	 
	 cout<<"Data terurut dari terkecil : ";
	 printArray(arr,n);
    
} 
