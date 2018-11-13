#include<iostream>
using namespace std;
struct node{
	int info;
	node *left,*right;
};
node * create(node *root,int v)
{
	node *p,*q,*r;
	p=new node();
	p->info=v;
	p->left=NULL;
	p->right=NULL;
	if(root==NULL)
	{
	root=p;	
	}
	else
	{
		q=root;
		while(q!=NULL)
		{
			r=q;
			if(q->info>p->info)
			q=q->left;
			else
			q=q->right;
		}
		if(r->info>p->info)
		r->left=p;
		else
		r->right=p;
	}
	return root;
}
void pre(node *root)
{
	if(root!=NULL)
	{
		pre(root->left);
		cout<<root->info<<endl;
		pre(root->right);
	}
}
int ht(node *root)
{
	if(root==NULL)
	return -1;
	else
	{
		int l=ht(root->left);
		int r=ht(root->right);
		if(l>r)
		return l+1;
		else
		return r+1;
	}
}
int  no(node *root)
{
	if(root==NULL)
	return 0;
	else
	{
		return no(root->left)+no(root->right)+1;
	}
}
int l(node *root)
{
	if(root==NULL||root->left==NULL)
	return root->info;
	else
	return l(root->left);
}
int main(){
node *root=NULL;
int n,i,j;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>j;
		root=create(root,j);
}
cout<<ht(root)<<endl;
pre(root);
cout<<"kk"<<no(root);
cout<<l(root);
}
