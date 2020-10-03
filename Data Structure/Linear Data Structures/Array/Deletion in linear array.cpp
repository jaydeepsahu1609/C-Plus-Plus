//LAB -2   15.09.2020
//IMPLEMENTATION OF LINEAR ARRAY DELETION ALGORITHM.

#include<iostream>
using namespace std;

int main()
{
	int arr[15], N, K, item;  
	int i;
	
	cout<<"Enter the size of array : ";
	cin>>N;
	cout<<"Enter all the elements : \n";
	for(i=0; i<N; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the position of  element  to be deleted: ";
	cin>>K;

	item = arr[K];
	int J = K;  	//set counter J=K	
	while(J<=N-1)     //repeat while J<=N-1  
	{
		arr[J] = arr[J+1];
		J++;		//increment of counter
	}
	N--;			//decrease N
	
	cout<<item<<" deleted successfully.\nNew array : \n";
	for(i=0; i<N; i++)
		cout<<arr[i]<<" ";
	return 0;
}
