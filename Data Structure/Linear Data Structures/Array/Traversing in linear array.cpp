//LAB -1   08.09.2020
//IMPLEMENTATION OF LINEAR ARRAY TRAVERSING ALGORITHM.

#include<iostream>
using namespace std;

int main()
{
	int arr[6] = {4, 8, 2, 25, 47, 89};  //Declaration of array
	
	int k=0;   			//Initialization of counter
	while(k<=5)       	//while counter <= upper bound
	{
		cout<<"Element at "<<k<<" is : "<<arr[k]<<endl;     //Apply process to arr[k]
		k++;			//increment the counter
	}
	
	return 0;
}

