#include <iostream>
using namespace std;
int main()
{
    int i,n,search_number;
    cout << "Enter array index :" << endl;
    cin >> n;
    cout<<endl;
    
    int arr[n];
    for (i = 0; i<n; i++)
    {cout << "Enter array values "  ;
     cin >> arr[i]; }
	 
	 cout << "\nEnter a number to serach in Array\n";
     cin >> search_number;
	 
	 for (i = 0; i<n; i++)
	 
	 {if (arr[i]==search_number)
	 {cout<<"\nYour number '"<< search_number<<"' is found at index '"<<i+1<<"'";
	 break;} }
	 
	 {if(arr[i]!=search_number)
	 {cout<<"\n Your search number '"<< search_number<<"' is not included.";
	 }
	 }
	 
		 	

}
