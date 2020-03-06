#include<iostream>
using namespace std;
  
  struct node{
  	int info;
  	node*next;
  	
  };
  
  node*front ;
  node*rear;
  
  void enqueue(int data)
  {
  	node*temp;
  	temp= newNode;
  	temp->info=data;
  	temp->next=NULL;
  	if(front==NULL&& rear==NULL)
  	{
  		front=rear=NULL;
  		
	  }
	  rear->next=temp;
	  rear=temp;
  }
  
  int dequeue()
  {
  	 if(front=rear)
  	 {
  	 	front=rear=NULL;//if there is only one element present
	   }
	   else
	   {
	   	front= front->next;
	   }
  }
   void traverse()
   
   {
   	 node*temp;
   	 temp=front;
   	 while(temp!=NULL)
   	 {
   	 	 cout<< temp->info<<",";
   	 	 temp=temp->next;
		}
   	 
   	 
   	
   }
   
   
   int main()
   {
   	 front=null;
   	 rear=null;
   	   enqueue(20);
   	   enqueue(12);
   	   dequeue();
   	   traverse();
   	
   }
