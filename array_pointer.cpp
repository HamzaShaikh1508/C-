#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cout<<"Enter the number of elements of array you want to enter : ";
	cin>>n;
	int arr[n]={};
	for (int i = 0;i < n; i++){
		cout<<"Enter the elements : ";
		cin>>arr[i];
	}
	int *ptr = &arr[0];
	cout<<"The elements of array are : ";
	for (int i = 0; i < n;i++){
		cout<<*ptr<<" ";
		ptr++;
	}
	
}
	
