//Lab 3.2 22.09.2020
//Binary search in array

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   //sorted array
	int item, lb=0, ub=9, beg, end, mid, loc;
	
	cout<<"Enter item to search : ";
	cin>>item;
	
	beg = lb;
	end= ub;
	mid = int((lb+ub)/2);
	
	while(beg<=end)
	{
		if(item == arr[mid])
		{
			loc = mid+1;
			break;
		}
		else if(item < arr[mid])
		{
			end = mid-1;
		}
		else
		{
			beg = mid+1;
		}
		mid = int((beg+end)/2);
	}
	
	if(loc == -1)
		cout<<item<<" not found.";
	else
		cout<<item<<" found at position : "<<loc;
	
	return 0;
}







