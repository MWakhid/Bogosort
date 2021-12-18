#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
// Mengecek urutan data
bool urut(int a[], int n)
{
    for(int i=0;i<n;i++){
	
        if (a[i] < a[i-1]){
		
            return false;}}
    return true;
}
 
// Mengacak data
void acak(int a[], int n)
{
	int total;
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
        cout<<total<<". ";
        for(int j=0;j<n;j++){
        	cout<<a[j];
		}
		total++;
		cout<<endl;
}
 
// Untuk memulai bogosort
void bogosort(int a[], int n)
{
	//Jika terurut=false
	//maka acak lagi
    while (!urut(a, n))
        acak(a, n);
}
 
//Output array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<a[i];
}
int main()
{
    int a[] = { 2,1,4,3,6,5 }; //isi dan ukuran array bebas
    int n = sizeof a / sizeof a[0];
    int total;
    bogosort(a, n);
    printf("terurut :\n");
    printArray(a, n);
    return 0;
}
