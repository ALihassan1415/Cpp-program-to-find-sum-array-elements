//Wtrite a program to find sum of array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
		cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int sum=arr[0];
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i+1];
	}
	cout<<"The sum is : "<<sum;
	return 0;
}