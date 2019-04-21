#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

class customer
{
	long long int num;                                 
	char cname[50],dog[50],pc[50],dp[50];
	public:		
	void details()
		{
			cin.ignore();
			cout<<"Enter the name of the Customer    :"<<ends;
			cin.getline(cname,50);
			goto l2;
			cin.ignore();
			l2:
			cout<<"Enter the Mob. No. of Customer    :"<<ends;
			cin>>num;
			cout<<"Enter the Company of Product      :"<<ends;
			cin.ignore();
			cin.getline(pc,50);
			goto l3;
			cin.ignore();
			l3:
			cout<<"Enter the Damaged part of product :"<<ends;
			
			cin.getline(dp,50);
			ofstream out;
			out.open("Search_Details.txt",ios::app);
			if(out)
			{
				out<<cname<<","<<num<<","<<pc<<","<<dp<<endl;
			//	out<<"**********************************"<<endl;
			}
		}
		
		
		void Search()
		{
			string search,line,c_name,mob_no,p_c,d_p;
			ifstream in;
			in.open("Search_Details.txt");
			cout<<"Enter the Customer_Name or Customer_mob_number to search for :"<<ends;
			cin.ignore();
			getline(cin,search);
			if(in)
			{
			while(getline(in,line))
			{
				if(line.find(search)!=string::npos)
				{
					stringstream ss(line);
					getline(ss,c_name,',');
					getline(ss,mob_no,',');
			    	getline(ss,p_c,',');
			    	getline(ss,d_p,'\n');
					cout<<"Name of Customer is :"<<c_name<<endl;
					cout<<"Mobile Number of customer is :"<<mob_no<<endl;
					cout<<"Customer's product company is :"<<p_c<<endl;
					cout<<"Damage part of product is :"<<d_p<<endl;
				}
			}
			}
		}
		
};
		
		main()
		{
			int ch;
			cout<<"Select your choice"<<endl;
			cout<<"1. Add new customer :"<<endl;
			cout<<"2. Search existing customer :"<<endl;
			cout<<"Enter you choice :"<<ends;
			cin>>ch;
			switch(ch)
			{
				case 1:
					customer s;
					s.details();
					break;
				case 2:
					customer b;
					b.Search();
					break;	
			}
		}
