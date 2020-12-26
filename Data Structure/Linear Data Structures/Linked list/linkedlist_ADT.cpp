#include<iostream>
#include<windows.h>    //system("CLS");
#define LINE "\n--------------------------------\n"
using namespace std;

class LinkedList
{
	struct Node{
		int data;
		Node *next;
	};
	int size;
	Node *start;
	public:
		LinkedList()
		{
			cout<<"Linked List has been created.\n";
			this->start = NULL;
			this->size = 0;
		}
		void insertNode(int data);       //inserts a node at the end of linkedlist
		void deleteNode(int data);       //deletes a node having first occurence of given data
		bool isEmpty();                  //checks whether the linkedlist is empty [returns true if empty, else false]
		int getSize();                   //return the size of linkedlist
		void printList();                //prints the linkedlist
		bool search(int data);           //finds if the given element exists in the list [returns true if found, else false]
};

bool LinkedList::isEmpty()
{
	if (this->start == NULL)
	{
		cout<<"\nLinked-List is empty.";
		return true;	
	}
	return false;	
} 

int LinkedList::getSize()
{
	if(isEmpty())
	{
		return 0;
	}
	else
		return this->size;
}

void LinkedList::insertNode(int item)
{
	Node *ptr, *aux;
	cout<<"\nCreating the Node....";
	ptr = new Node;
	cout<<"\nNode has been created.";
	ptr->data = item;
	ptr->next = NULL;
	cout<<"\nInserting the Node to the linkedlist...";
	if(this->start == NULL)
	{
		start = ptr;
	}
	else{
		aux = this->start;
		while(aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = ptr;		
	}
	cout<<"\nThe Node has been inserted to the linkedlist.";
	this->size++;
}

void LinkedList::deleteNode(int item)
{
	bool deleted = false;
	//if found at first
	if(this->start->data == item)
	{
		//only one element in linkedlist
		if(this->start->next == NULL)
		{
			delete this->start;
			this->start = NULL;
			deleted = true;
		}
		else
		//more than one element in the linkedlist
		{
			Node *aux;
			aux = this->start->next;
			delete this->start;
			this->start = aux;
			deleted = true;
		}

	}
	//if not found at first
	else{
		Node *left, *right;
		left = this->start;
		while(left->next != NULL)
		{
			//if found in middle
			if(left->next->data == item)
			{
				 right = left->next->next;
				 delete left->next;
				 deleted = true;
				 left->next = right;
				 break;
			}
			left = left->next;
		}
		//if not found in middle, must be in the end
		if(!deleted)
		{
			left = this->start;
			while(left->next->next != NULL)
			{
				 left = left->next;
			}
			right = left->next->next;
			delete left->next->next;
			left->next = right;	
		}	
	}
	this->size--;
	cout<<"\nNode has been deleted.";
}

bool LinkedList::search(int item)
{
	Node *ptr;
	ptr = this->start;
	cout<<"\nSearching the Node....";
	if(ptr->next == NULL)
	{
		if(ptr->data == item)
		{
			cout<<"\nNode Found";			
			return true;
		}
	}
	else
	{
		while(ptr->next != 	NULL)
		{
			if(ptr->data == item)
			{
				cout<<"\nNode Found.";
				return true;			
			}
			ptr = ptr->next;					 	
		}
		if(ptr->data == item)
		{
			cout<<"\nNode Found.";
			return true;			
		}		
	}
	cout<<"\nNode does not exist.";
	return false;
}

void LinkedList::printList()
{
	cout<<endl<<LINE;
	if(this->start->next == NULL)
		cout<<"| "<<this->start->data<<" | -> ";
	else
	{
		Node *ptr;
		ptr = this->start;
		while(ptr->next != NULL)
		{
			cout<<"| "<<ptr->data<<" | -> ";
			ptr = ptr->next;
		}
		cout<<"| "<<ptr->data<<" | -> ";
	}
	cout<<"NULL";	
} 

int menu()
{
	cout<<"\n--------------MENU--------------\n";
	cout<<"\n1. INSERT A NODE.";
	cout<<"\n2. DELETE A NODE.";
	cout<<"\n3. PRINT THE LIST.";
	cout<<"\n4. SEARCH AN ELEMENT.";
	cout<<"\n5. DELETE THE LIST & EXIT.";
	cout<<"\n6. CLEAR THE SCREEN.";
	cout<<LINE;
	cout<<"ENTER YOUR CHOICE: ";
	int choice;
	cin>>choice;
	while(choice<1 || choice>6)
	{
		cout<<"\nPLEASE ENTER A VALID VALUE [1:6].\nRE-ENTER YOUR CHOICE: ";
		cin>>choice;		
	}	
	return choice;
}
int main()
{
	LinkedList list;
	int i = menu();
	while(i != 5)
	{
		if(i == 1)
		{
			cout<<"ENTER THE ELEMENT TO BE INSRETED (integer only): ";
			int item;
			cin>>item;
			list.insertNode(item);
		}
		if(i == 2)
		{
			cout<<"ENTER THE ELEMENT TO BE DELETED : ";
			int item;
			cin>>item;
			if(list.search(item))
				list.deleteNode(item);
		}
		if(i == 3)
		{
			if(!list.isEmpty())
			{
				cout<<"PRINTING THE LINKED-LIST....\n";
				list.printList();				
			}
		}
		if(i == 4)
		{
			cout<<"ENTER THE ELEMENT TO BE SEARCHED : ";
			int item;
			cin>>item;
			if(!list.isEmpty())
			{
				list.search(item);
			}
		}
		if(i == 6)
		{
			system("CLS");
		}
		cout<<LINE;
		cout<<"\nSIZE OF THE LIST:: "<<list.getSize();
		i = menu();
	}
	system("CLS");
	cout<<"\nLinked-List has been deleted.";
    return 0;
}
