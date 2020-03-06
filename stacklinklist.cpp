#include<iostream>
using namespace std;

struct node{
	int info;
	node*next;
};
node*top;

void push(int data)
{
	node*temp;
	temp=newNode;
	temp->info=data;
	temp->next=top;
	
}

void pop()
{
	node*temp;
	
	if(temp==null)//only one value
	temp=top;
	 top=top->next;
	 
}

 int traverse() 
 {
 	temp=top;
 	while(top!=null)
 	 cout<<temp->info;
 	 temp=temp->next;
 	 
 	
 }
 
 
 
 int main()
 {
 	top=null;
 	push(20);
 	push(30);
	 traverse();
	 pop();
 }
