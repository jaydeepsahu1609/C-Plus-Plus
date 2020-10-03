//Lab 3.1 22.09.2020
//Linear search in array

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {12, 15, 18, 66, 41, 99, 19, 20, 254, 10}, N=10;
	int item, loc=-1;
	
	cout<<"Enter item to search : ";
	cin>>item;
	
	int i=0;
	while(i<N)
	{
		if(arr[i] == item)
		{
			loc = i+1;
			break;
		}
		i++;
	}
	
	if(loc == -1)
		cout<<item<<" not found.";
	else
		cout<<item<<" found at position : "<<loc;
	
	return 0;
}







