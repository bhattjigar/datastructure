#include<iostream>
#include<conio.h>
using namespace std;

class cqueue
{
	public:
		int data[100];
		int front;
		int rear;
		int length;
		void insert();
		void show();
		void del();
		cqueue(int len)
		{
			int i=0;
			front=rear=-1;
			length=len;
		}
};
void cqueue::insert()
{
	std::cout<<"\n Rear pointer "<<rear<<"\n";
	std::cout<<"\n Front pointer "<<front<<"\n";
	if((rear==length-1&&front==0)||rear==front-1)
	{
		std::cout<<"\n Queue is full\n";
		exit(1);
	}
	else
	{
		if(front==-1||front==length-1)
		{
			front=0;
		}
			rear++;
			std::cout<<"\n Enter Data\n";
			std::cin>>data[rear];
		
	}
}
void cqueue::del()
{
	if((front==-1&&rear==-1)||front>rear)
	{
		std::cout<<"\n Queue underflow\n";
		exit(1);
	}
	else
	{
		std::cout<<"\n Data deleted \n"<<data[front];
		front++;
	}
}
void cqueue::show()
{
	for(int j=front;j<=rear;j++)
	{
		std::cout<<"\n Your Data Is \n"<<data[j];
	}
}
int main()
{
	int c;
	cqueue q(3);
	while(true)
	{
		std::cout<<"\n Enter Case\n";
		std::cout<<"\n 1. Insert \n";
		std::cout<<"\n 2. Delete  Case\n";
		std::cout<<"\n 3. Show Data \n";
		std::cout<<"\n 4. Exit \n";
		std::cin>>c;
		if(c==1)
		{
			q.insert();
			
		}	
		else if(c==2)
		{
			q.del();
		
		}
		else if(c==3)
		{
			q.show();
		
		}
		else
		{
			exit(1);
		}
			
	
	}
	return 0;
	
}
