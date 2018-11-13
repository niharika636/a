#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct node
{
    int info;
    node *link;
};
int main()
{
	node *start,*p,*q,*T;
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
	T=start;
	while(T!=NULL)
	{
		cout<<T->info<<endl;
		T=T->link;
		
	}
}

