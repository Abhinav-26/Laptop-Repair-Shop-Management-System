#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Customer
{
	int num;                                 
	string cname,dog,pc,dp;    
	public:
		void details()
		{
			//cin.ignore();
			cout<<"name  :"<<ends;
			//cin.ignore();
			getline(cin,cname);
			cout<<"Mob. No.:"<<ends;
			cin.ignore();
			cin>>num;
			cout<<"Company :"<<ends;
			cin.ignore();
			getline(cin,pc);
			goto l1;
			cin.ignore();
			l1:
			cout<<"Damaged part:"<<ends;
			getline(cin,dp);
			ofstream out;
			out.open("Add_Customer.txt",ios::app);
			if(out)
			{
				out<<"The name of the Customer is    :"<<cname<<endl;
				out<<"The Mob. No. of Customer is    :"<<num<<endl;
				out<<"The Company of Product is      :"<<pc<<endl;
				out<<"The Damaged part of product is :"<<dp<<endl;
		    }
	    }
	    
};

main()
{
	Customer c;
	c.details();
}
