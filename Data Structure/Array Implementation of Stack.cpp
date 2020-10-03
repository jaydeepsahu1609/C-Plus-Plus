//lab 4.1 29.09.2020
//Implementation of stack using array

#include<iostream>
using namespace std;

int stack[5], size=5, top=-1;
void push();
void pop();
void display();

int main()
{
	int choice=0;
	while(choice != 3)
	{
		cout<<"1. PUSH\n2. POP\n3. EXIT\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				break;
			default:
				cout<<"Invalid input.";
		}
	}
	return 0;
}

void display()
{
	if(top == -1)
		cout<<"\nStack is empty.\n";
	else
	{
		cout<<"\nDisplaying stack : ";
		for(int i=top; i!=-1; i--)
		{
			cout<<stack[i]<<" ";
		}	
		cout<<endl;
	}

}
void push()
{
	if(top<size-1)
	{
		top++;
		int item;
		cout<<"\nEnter element to push : ";
		cin>>item;
		stack[top] = item;
		display();
	}
	else
		cout<<"\nStack overflow.\n";
}
void pop()
{
	if(top!=-1)
	{
		int item;
		item = stack[top];
		top--;
		cout<<item<<" popped from stack.\n";
		display();
	}
	else
		cout<<"\nStack underflow.\n";	
}

















