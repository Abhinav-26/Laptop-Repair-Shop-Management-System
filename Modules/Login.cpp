#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;

void Login()
{
	char login_un[50],login_pw[50],username[50],password[50];
	int c;
	cout<<"1) Login"<<endl;
	cout<<"2) Quit"<<endl<<endl;
	cin>>c;
	
	if(c==1)
	{
		while(strcmp(login_un,"admin")!=0)
		{
			cin.ignore();
			cout<<"Username :"<<ends;
			cin.getline(login_un,50);
			if(strcmp(login_un,"admin")==0)
			break;
			else
			cout<<"Invalid Username"<<endl;
		}
		while(strcmp(login_pw,"password")!=0)
		{
			cout<<"Password :"<<ends;
			cin.getline(login_pw,50);
			if(strcmp(login_pw,"password")==0)
			break;
			else
			cout<<"Invalid Password"<<endl;
		}
	}
	else if(c==2)
	{
		cout<<"Quitting.."<<endl;
		exit(1);
		
	}
	return;
}

 main()
{
	Login();
	int ch;
	cout<<"1) Add a new Entery"<<endl;
	cout<<"2) Edit a Entry"<<endl;
	cout<<"3) Search"<<endl;
}
