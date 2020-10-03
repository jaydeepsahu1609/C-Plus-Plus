//LAB -2   15.09.2020
//IMPLEMENTATION OF LINEAR ARRAY INSERTION ALGORITHM.

#include<iostream>
using namespace std;

int main()
{
	int arr[15], N, K, Item;  
	int i;
	
	cout<<"Enter the size of array : ";
	cin>>N;
	cout<<"Enter all the elements : \n";
	for(i=0; i<N; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the position of new element : ";
	cin>>K;
	K--;
	cout<<"Enter the element : ";
	cin>>Item;

	int J = N;  	          //Set counter J=N	
	while(J>=K)               //Repeat while J>=K
	{
		arr[J+1] = arr[J];   //Move Jth element downward
		J--;		         //Decrement Counter
	}  
	arr[K] = Item;           //Insert item
	N++;	                 //increase N
	
	cout<<"Element added successfully.\nNew array : \n";
	for(i=0; i<N; i++)
		cout<<arr[i]<<"\t";
	
	return 0;
}
