#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter 10 integer values\n";
	for(int i=0;i<10;i++)
	cin>>arr[i];
	
	int i,j,temp;
	for(i=0;i<10;i++)
	for(j=9;j>i;j--)
	if(arr[j]<arr[j-1])
	{int temp=arr[j];
	arr[j]=arr[j-1];
	arr[j-1]=temp;}
	
	cout<<"\nGreatest number is "<<arr[9];
	cout<<"\nSmallest number is "<<arr[0];
}
