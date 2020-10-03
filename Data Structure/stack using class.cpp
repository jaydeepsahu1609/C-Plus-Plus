#include<iostream>
using namespace std;

class Stack
{
	private:
		int capacity, top;
		int *arr;
	public:
		Stack(int capacity)
		{
			this->capacity = capacity;
			top = -1;
			this->arr = new int[this->capacity];
			cout<<"Stack of capacity "<<this->capacity<<" has been created.\n\n";
		}
		void push(int item);
		void pop();
		void peek();
		void display();
		bool isEmpty();
		bool isFull();
};
void Stack:: push(int item)
{
	if(!isFull())
	{
		this->arr[++this->top] = item;
		this->display();
	}
	else
		cout<<"\nOverflow.\n";
}
void Stack:: pop()
{
	if(!isEmpty())
	{
		int item = this->arr[this->top--];
		cout<<endl<<item<<" has been popped.\n";
		this->display();
	}
	else
		cout<<"\nUnderflow.\n";
}
void Stack:: peek()
{
	if(!isEmpty())
	{
		cout<<"\nElement at top : "<<this->arr[this->top];
	}
	else
		cout<<"\nEmpty\n";
}
void Stack:: display()
{
	if(!isEmpty())
	{
		cout<<"\nDisplaying Stack : ";
		for(int i=this->top; i!=-1; i--)
			cout<<this->arr[i]<<" ";
		cout<<endl;
	}
	else
		cout<<"\nEmpty\n";
}
bool Stack:: isEmpty()
{
	return this->top==-1?true:false;
}
bool Stack:: isFull()
{
	return this->top==(this->capacity-1)?true:false;
}


int main()
{
	Stack stk(5);
	int choice=0;

	while(choice != 4)
	{
		cout<<"\n1. PUSH\n2. POP\n3. PEEK\n4. EXIT\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int item;
				cout<<"\nEnter element to push : ";
				cin>>item;
				stk.push(item);
				break;
			case 2:
				stk.pop();
				break;
			case 3:
				stk.peek();
				break;
			case 4:
				break;
			default:
				cout<<"Invalid input.";
		}
	}
	return 0;
}







