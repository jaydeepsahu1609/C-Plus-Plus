#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next = NULL;
};

Node* createNode(int data)
{
	Node *ptr;
	ptr = new Node;
	ptr->data = data;
	return ptr;
}

int main()
{
	Node *start = createNode(10);
	start->next = createNode(20);
	start->next->next = createNode(30);
	Node *ptr;
	ptr = start;
	while(ptr != NULL)
	{
		cout<<ptr->data<<" -> ";
		ptr = ptr->next;
	}
	cout<<"NULL";
	return 0;
}
