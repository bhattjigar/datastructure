#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	public:
		int length;
		int limit;
		int data[100];
		int pos;
  		void push(int);
  		void pop();
  		void setdata(int);
  		int getposition();
  		void msg(char[]);
  		void insert(int);
  		void show();
  		void clear();
  		stack(int length)
  		{
  			pos=-1;
  			int j=0;
  			while(j<length)
  			{
  				std::cout<<"\nEnter Element "<<j+1<<endl;
  				std::cin>>data[j];
  				pos++;
  				limit++;
  				j++;
			  }
  			
		  }
};
void stack::msg(char str[100])
{
	std::cout<<str;
	
}
void stack::insert(int val)
{
	std::cout<<val;	
}
int stack::getposition()
{
	return pos;
}
void stack::setdata(int val)
{
	data[pos]=val;
}
void stack::push(int val)
{
	
	if(pos>=length)
	{
		msg("Error Pushing Data");
	}
	else
	{
		pos++;
		setdata(val);
		msg("Data Inserted ");
		insert(val);
		
	}

}
void stack::pop()
{
	if(pos==-1)
	{
		msg("Error Pop Data");
	}
	else
	{
		std::cout<<"\n";
		insert(data[pos]);
		msg(" Data Deleted");
		pos--;
	}


}
void stack::show()
{
	int i=0;
	std::cout<<"\n Total Data are\n";
	while(i<=pos)
	{
		
		std::cout<<"\n"<<data[i];
		i++;
	}
}
void stack::clear()
{
	//system("clear");
}
int main()
{
	int num,tmp;
	char ch;
  	std::cout<<"Enter The Total Records \n";
  	std::cin>>num;
  	stack st(num);
  	
  	while(true)
  	{
  		std::cout<<"\n1. Enter Data"<<endl;
  		std::cout<<"\n2. Delete Data"<<endl;
  		std::cout<<"\n3. Exit "<<endl;
  		std::cin>>ch;
  		if(ch=='1'&&st.pos<st.limit-1)
  		{
  			st.clear();
  			std::cout<<"\n Enter Record \n"<<st.getposition()+1;
  			std::cin>>tmp;
  			st.push(tmp);
  			st.show();
		  }
		  else if(ch=='2')
		  {
		  	st.clear();
		  	st.pop();
		  	st.show();
		  }
		  else
		  {
		  	break;
		  }
	  }
	return 0;
}
