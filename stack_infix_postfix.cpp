#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class stack
{
	public:
		int top,length;
	
		char origindata[100],finaldata[100];
		char opt[100];
		int posopt,posch,posfinal;
		char ch[100];
		void pop(char);
		int getoperand(char);
		void show();
		bool check(char ch);
		stack(char data[100]){
			top=strlen(data);
			int j=0;
			posch=posopt=posfinal=0;
			strcpy(origindata,data);
			while(j<top)
			{
				std::cout<<"\n"<<finaldata;
				if(check(data[j]))
				{
					
					
						pop(data[j]);	
					
					
				}
				else
				{
					ch[posch]=data[j];
					finaldata[posfinal]=data[j];
					posfinal++;
					posch++;
				}
				j++;
			}
			show();
			std::cout<<"\n"<<finaldata;
			
		}
		
};
bool stack::check(char c)
{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int stack::getoperand(char c)
{
	
	if(c=='+'||c=='-')
	{
		return 1;
	}
	else if(c=='*'||c=='/')
	{
		return 2;
	}
	else if(c=='^')
	{
		return 3;
	}
	else if(c==')')
	{
		if(posopt>=0)
		{
			for(int k=posopt;opt[posopt]!='(';k--)
			{
				finaldata[posfinal]=opt[k];
				posfinal++;
				posopt--;
			}
		}
	}
	
}
void stack::pop(char c)
{
	std::cout<<"\n"<<opt;
	if(posopt==0||c==')')
	{
		opt[posopt]=c;
		posopt++;
	}
	else
	{
		if(getoperand(c)>getoperand(opt[posopt-1])||opt[posopt-1]=='(')
		{
			opt[posopt]=c;
			posopt++;	
		}
		else
		{
			posopt--;
			finaldata[posfinal]=opt[posopt];
			posfinal++;
			if(posopt>=0)
			{
				pop(c);
			}
		}	
	}
	
						
	
}
void stack::show()
{
	if(posopt>=0)
	{
		for(int k=posopt;k>=0;k--)
		{
			finaldata[posfinal]=opt[k];
			posfinal++;
		}
	}
}
int main()
{
	char tmp[100];
	std::cout<<"\n Enter String For Converting Infix to Postfix";
	std::cin>>tmp;
	stack st(tmp);
	return 0;
}
