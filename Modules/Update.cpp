#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

void filechange(string &line,string &newl)
{
	ifstream oldf("Updatefile.txt",ios::in|ios::out|ios::app);
	ofstream newf("Updatefile_Temp.txt");
	string check;
	while(oldf>>check)
	{
		if(check == line)
		{
			check = newl;
		}
		newf<<check<<endl;
	}
	
	ifstream oldff("Updatefile_Temp.txt",ios::in|ios::out|ios::app);
	ofstream newff("Updatefile.txt");
	
	
	while(oldff>>check)
	{
		
		newff<<check<<endl;
	}

}

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
			out.open("Updatefile.txt",ios::app);
			if(out)
			{
				out<<cname<<","<<num<<","<<pc<<","<<dp<<endl;
			
			}
		}
	
		
	void Update()
		{
			string search,line,c_name,mob_no,p_c,d_p,nname;
			ifstream in;
			in.open("Updatefile.txt");
			cout<<"\t\t\t\t\t Enter the name of customer to search :"<<ends;
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
					cout<<"\t\t\t\t\t Name of Customer is :"<<c_name<<endl;
					cout<<"\t\t\t\t\t Mobile Number of customer is :"<<mob_no<<endl;
					cout<<"\t\t\t\t\t Customer's product company is :"<<p_c<<endl;
					cout<<"\t\t\t\t\t Damage part of product is :"<<d_p<<endl<<endl;
				 	
		     		 cout<<"\t\t\t\t\t Enter the new Name of the Customer to change with :- "<<ends;
				     getline(cin,nname);
					
					string newl;
					newl=nname + "," + mob_no +","+ p_c +","+ d_p +"\n";
					filechange(line,newl);
				}
				
			}
	    	}
	    }
};
		
main()
{
	
	int ch;
	cout<<"Enter 1 to add cutomer :"<<endl;
	cout<<"Enter 2 to update customer :"<<endl;
	cout<<"Give ur input :"<<ends;
	cin>>ch;
	switch(ch)
		{
		case 1:
			customer ob;
			ob.details();
			break;
					
		case 2:
			ob.Update();
			break;	
		}
			
}
