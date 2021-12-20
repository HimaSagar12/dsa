//three mistakes 
#include <bits/stdc++.h>   //there should be no space in < >
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

void printl(Node* n)
{

	while(n!= NULL)  //thats n!= NULL but i wrote n!= 0
	{
		cout<<n->data<<endl;
		n=n->next; // thats n= n->next and not n = n+1;
	}
}


int main()
{
Node* one = NULL;
Node* two = NULL;
Node* three = NULL;

one = new Node();
two = new Node();
three = new Node();

one->data = 23;
one->next = two;

two->data = 234;
two->next = three;

three->data = 567;
three->next = NULL;

printl(one);
return 0;
}