#include<iostream>
using namespace std;
int que[20],n = 20,front=0,rear=0;
void insert(int val)
{
	if(rear==n)
	cout<<"\nqueue overflow"<<endl;
	else
	{
		rear++;
		que[rear] = val;
	}
}
void Delete()
{
	if(front==rear)
	{
		cout<<"\nqueue is empty";
	}
	else
	{
		for(int i = 0;i<rear;i++)
		{
			que[i]=que[i+1];
		}
		rear--;
	}
	return;
}
void display()
{
	int i;
	if(front==rear)
	{
		cout<<"\nqueue is empty"<<endl;
		return;
	}
	for(i=front;i<rear;i++)
	{
		cout<<"\n"<<que[i+1];
	}
	return;
}
int main (void)
{
	cout<<"\nenter the size of queue:";
	cin>>n;
	display();
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	display();
	insert(60);
	display();
	Delete();
	Delete();
	cout<<"\nafter deletion of nodes ,queue =";
	display();
	return 0;
}