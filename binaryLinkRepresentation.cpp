#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node * left;
	node * right;
};

node * create(int data)
{
	node * p=(node*)malloc(sizeof(node));
	p->data=data;
	p->right=NULL;
	p->left=NULL;
	return p;
}

int display(node * &head)
{
	node * temp=head;
	while(temp!=NULL)
	{return temp->data;
	
	}
	
}
void preorder(node * root)
{if(root!=NULL)
{
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
	}
	
}
int main()
{
//consrtucting root node
/*
node * p;
p=(node*)malloc(sizeof(node));
p->data=2;
p->left=NULL;
p->right=NULL;
//constructing 1st node
node * p1;
p1=(node*)malloc(sizeof(node));
p1->left=NULL;
p1->data=3;
p1->right=NULL;
//constructing 2nd node
node * p2;
p2=(node*)malloc(sizeof(node));
p2->left=NULL;
p2->data=
p2->right=NULL;
//constructing 3rd node
node * p3;
p3=(node*)malloc(sizeof(node));
p3->left=NULL;
p3->right=NULL;
*/
struct node *p=create(4);	

struct node *p1=create(1);
struct node *p2=create(5);
struct node *p3=create(2);

struct node *p4=create(6);
p->left=p1;
p1->right=p2;
p1->left=p3;
p3->right=p4;
preorder(p);


return 0;	
}
