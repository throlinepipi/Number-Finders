#include <iostream>
using namespace std;
int main()
{
	int n;
    cout << "Enter array index :" << endl;
    cin >> n;
    cout<<endl;
    
    int values[n];
    for (int i = 0; i<n; i++)
    {cout << "Enter array values "  ;
     cin >> values[i];}

    int smallest = values[0];
    int greatest = values[0];

    for (int i= 1; i< n; i++) 
	{ if (values[i] > greatest)
        {greatest = values[i];}

      if (values[i] < smallest)
        {smallest = values[i];}
    }

    cout << "\nSmallest number is : " << smallest << endl;
    cout << "Greatest number is : "  << greatest << endl;
}

