#include<iostream>
#define max 10
using namespace std;

struct Stack
{
	int *stk_ptr;
	int top = -1, capacity;
};

void push(Stack *, int);
void pop(Stack*);
void display(Stack*);

int main()
{
	Stack stk;
	
	cout<<"Size of stack : ";
	cin>>stk.capacity;
	
	stk.stk_ptr = new int[stk.capacity];
	cout<<"Stack of capacity "<<stk.capacity<<" has been created.\n";
	
	int choice=0;
	while(choice != 3)
	{
		cout<<"1. PUSH\n2. POP\n3. EXIT\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int item;
				cout<<endl<<"Give value to push into the stack : ";
				cin>>item;
				push(&stk, item);
				display(&stk);
				break;
			case 2:
				pop(&stk);
				display(&stk);
				break;
			case 3:
				break;
			default:
				cout<<"Invalid input.";
		}
	}
	return 0;
}

void push(Stack *ptr , int item)
{
	if(ptr->top == ptr->capacity-1)
		cout << "\nStack Overflow.\n";	
	else
	{
		ptr->stk_ptr[++ptr->top] = item;
	}
}

void pop(Stack *ptr)
{
	if(ptr->top == -1)
		cout << "\nStack Underflow.\n";
	else
	{
		int item = ptr->stk_ptr[ptr->top--];
		cout<<item<<" has been popped.\n";
	}
}

void display(Stack *ptr)
{
	if(ptr->top==-1)
	{
		cout<<"\nNo element to display.\n";
	}
	else
	{
		cout << "Displaying Stack : ";
		for(int i=ptr->top; i!=-1; i--)
			cout<<ptr->stk_ptr[i]<< "\t";
		cout<<endl;
	}
}










