#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct node
{
    int info;
    node *link;
};
void reverse(node *t)
{
	
	while(t!=NULL)
	{
		//reverse(t->link);
		cout<<t->info<<endl;
	}
}
int main()
{
	node *start,*p,*q;
	int i;
	char ch;
	start=NULL;
	do{
		p=new node();
		cin>>i;
		cout<<i;
		p->info=i;
		p->link=NULL;
		if(start==NULL)
		start=p;
			else{
			q=start;
			while(q->link!=NULL)
			{
				q=q->link;
			}
			q->link=p;
		}
		cin>>ch;
	}while(ch=='Y');
  /* q=start;
   reverse(start);*/
   q=start;
   reverse(q);
/*	while(q!=NULL)
	{
		cout<<q->info<<endl;
		q=q->link;
		
	}*/
}

