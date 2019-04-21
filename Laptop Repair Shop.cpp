/*****************************************************************************/
/*************************** PROJECT ON LAPTOP REPAIR ************************/
/*****************************************************************************/
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<sstream>
#include<fstream>
using namespace std;  

void Shoping();
void Admin_Login();
void Exit();
void jump();

/****************************************************************************/
/********************** FUNCTION FOR SHOPKEEPER PORTAL **********************/
/****************************************************************************/

void Shoping()
{
	
	int ch1;
	cout<<endl;
	cout<<"\t\t\t\t *****************************************************"<<endl;
	cout<<"\t\t\t\t * What do you want to do ?                          *"<<endl;
    cout<<"\t\t\t\t * 1) LOGIN                                          *"<<endl;
 	cout<<"\t\t\t\t * 2) EXIT SOFTWARE                                  *"<<endl;
    cout<<"\t\t\t\t *****************************************************"<<endl<<endl;
    cout<<"\t\t\t\t *****************************************"<<endl;
	cout<<"\t\t\t\t Enter your choice as (1 or 2) :"<<ends;
	cin>>ch1;
	cout<<"\t\t\t\t *****************************************"<<endl<<endl;
	switch(ch1)
	{
		case 1:
			char login_usr[50],login_pwd[50];
			while(strcmp(login_usr,"Abhi")!=0)
		    {
		    	cin.ignore();
		    	cout<<"\t\t\t\t\t Please Enter Username :"<<ends;
		    	cin.getline(login_usr,50);
		    	if(strcmp(login_usr,"Abhi")==0)
		    	goto l2;
		    	else
		    	cout<<"\t\t\t\t\t\t Invalid Username"<<endl;
			}
			while(strcmp(login_pwd,"202")!=0)
			{
				cin.ignore();
				l2:
				cout<<"\t\t\t\t\t Please enter Password :"<<ends;
				cin.getline(login_pwd,50);
				if(strcmp(login_pwd,"202")==0)
				break;
				else
				cout<<"\t\t\t\t\t\t Incorrect Password"<<endl<<endl;
			}
			break;
		case 2:
			Exit();
			exit(0);
			break;				
	}
	
	
	cout<<"\n";
	cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t\t\t\t\t ***Login Sucessfull***"<<endl;
	cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	system("pause");
	system("cls");
	int num,quan;
	char name[100];
	A1:
	cout<<"\n\n\n";
	cout<<"\t\t\t***************************************************************************"<<endl;
	cout<<"\t\t\t ITEMS: \t\t\t Quantity: \t\t\t PRICE: "<<endl;
	cout<<"\t\t\t***************************************************************************"<<endl<<endl;
	cout<<"\t\t\t 1.Laptop Skins \t\t 120 pcs \t\t\t 1200/-"<<endl; 
	cout<<"\t\t\t 2.Laptop HDMI port cables \t 1000 pcs \t\t\t 50/-"<<endl;
	cout<<"\t\t\t 3.Display \t\t\t 230 pcs \t\t\t 1000/-"<<endl;
	cout<<"\t\t\t 4.External Ram DDR \t\t 200 pcs \t\t\t 3500/-"<<endl;
	cout<<"\t\t\t 4.USB Dongal \t\t\t 80 pcs \t\t\t 350/-"<<endl;
	cout<<"\t\t\t 5.JBL Speaker \t\t\t 120 pcs \t\t\t 1800/-"<<endl;
	cout<<"\t\t\t 6.Cooling Pad \t\t\t 60 pcs \t\t\t 599/-"<<endl;
	cout<<"\t\t\t 7.Laptop Bttery \t\t 150 pcs \t\t\t 2600/-"<<endl;
	cout<<"\t\t\t 8.Pendrives 16GB \t\t 400 pcs \t\t\t 499/-"<<endl;
	cout<<"\t\t\t 9.Laptop Sleeve \t\t 280 pcs \t\t\t 1500"<<endl;
	cout<<"\t\t\t 10.Wifi Adapter \t\t 26 pcs \t\t\t 399/-"<<endl<<endl;
	
	cout<<"\t\t\t**************************************************"<<endl;
	cout<<"\t\t\t No. of Items Customer wants to purchase :"<<ends;
	cin>>num;
	cout<<"\t\t\t**************************************************"<<endl<<endl;
	
		cout<<"\t\t\t\t\t******************************"<<endl;
		for(int i=1;i<=num;i++)
		{
		cout<<"\t\t\t\t\t "<<i<<".Item Name :"<<ends;
		cin.ignore();
		cin.getline(name,100);
		
		cout<<"\t\t\t\t\t   Item Quantity :"<<ends;
		cin>>quan;
		cout<<"\n";
		}
		cout<<"\t\t\t\t\t******************************"<<endl<<endl;				
	
		int ss;
		cout<<"\t\t\t************************************************************"<<endl;
		cout<<"\t\t\t Press 1 for another entry or 2 for exit the software :"<<ends;
		cin>>ss;
		cout<<"\t\t\t************************************************************"<<endl;
		switch(ss)
		{
			case 1:
				system("pause");
				system("cls");
				goto A1;
				break;
			case 2:
				cout<<endl;
				cout<<"\t\t\t****************************"<<endl;
				cout<<"\t\t\t Thanks For Shoping :)"<<endl;
				cout<<"\t\t\t Do Visit Again ..."<<endl;
				cout<<"\t\t\t****************************"<<endl;
				Exit();
				exit(0);
				break;	
		}
}

/****************************************************************************/
/****************************ADMIN_LOGIN FUNCTION****************************/
/****************************************************************************/
void Admin_Login()
{
	char login_un[50],login_pw[50],un[50],pw[50];
	while(strcmp(login_un,"Admin")!=0)
    {
    	cin.ignore();
    	cout<<"\t\t\t\t\t Please enter Username :"<<ends;
    	cin.getline(login_un,50);
    	if(strcmp(login_un,"Admin")==0)
    	goto l1;
    	else
    	cout<<"\t\t\t\t\t\t Invalid Username"<<endl;
	}
	while(strcmp(login_pw,"Pass")!=0)
	{
		cin.ignore();
		l1:
		cout<<"\t\t\t\t\t Please enter Password :"<<ends;
		cin.getline(login_pw,50);
		if(strcmp(login_pw,"Pass")==0)
		break;
		else
		cout<<"\t\t\t\t\t\t Incorrect Password"<<endl<<endl;
	}
	
	cout<<"\n";
	cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\t\t\t\t\t ***Login Sucessfull***"<<endl;
	cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
}


/*********************************************************************/
/**************************** EXIT FUNCTION **************************/
/*********************************************************************/

void Exit()
{
	
	cout<<endl;
	cout<<"\t\t\t\t\t**************************************"<<endl;
	cout<<"\t\t\t\t\t* Thank You for Using my Software :) *"<<endl;
	cout<<"\t\t\t\t\t**************************************"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t*******************************************"<<endl;
	cout<<"\t\t\t\t\t* You have been logged out of the shop :) *"<<endl;
	cout<<"\t\t\t\t\t*******************************************"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Designed by @Abhinav Dubey"<<endl;
	
}

void jump()
{
	int go;
	cout<<"\t\t\t Enter 1 to go back to main menu and 2 to exit"<<ends;
	cin>>go;
	switch(go)
	{
		case 1:
			break;
		case 2:
			Exit();
			exit(0);	
			break;
	}
}

/****************************************************************************/
/***************************** FUNCTION FOR UPDATE **************************/
/****************************************************************************/

void filechange(string &line,string &newl)
{
	ifstream oldf("Customer_Details.txt",ios::in|ios::out|ios::app);
	ofstream newf("Customer_Details_Temp.txt");
	string check;
	while(oldf>>check)
	{
		if(check == line)
		{
			check = newl;
		}
		newf<<check<<endl;
	}
	
	ifstream oldff("Customer_Details_Temp.txt",ios::in|ios::out|ios::app);
	ofstream newff("Customer_Details.txt");
	
	
	while(oldff>>check)
	{
		
		newff<<check<<endl;
	}

}

/***********************************************************************************/
/**************************** CLASS FOR REPAIR TECHNICIAN **************************/
/***********************************************************************************/

class Customer
{
	long long int num;                                                    // num=mob. no. of customer
	char cname[50],submssion_date[50],product_company[50],problem[50];    // dog=date of given, product_company=product company, problem=damage part
	public:

/****************************************************/		
/************** DETAILS OF CUSTOMERS ****************/  	
/****************************************************/			
		
		void details()
		{
			
			cout<<"\n\n\n";
			cout<<"\t\t\t*************************************************"<<endl;
			cin.ignore();
			cout<<"\t\t\t* Enter the name of the Customer    :"<<ends;
			cin.getline(cname,50);
			cout<<"\t\t\t*************************************************"<<endl<<endl;
			goto l2;
			cin.ignore();
			l2:
			cout<<"\t\t\t*************************************************"<<endl;	
			cout<<"\t\t\t* Enter the Mob. No. of Customer    :"<<ends;
			cin>>num;
			cout<<"\t\t\t*************************************************"<<endl<<endl;
			cout<<"\t\t\t*************************************************"<<endl;
			cout<<"\t\t\t* Enter the Company of Product      :"<<ends;
			cin.ignore();
			cin.getline(product_company,50);
			cout<<"\t\t\t*************************************************"<<endl<<endl;
			goto l3;
			cin.ignore();
			l3:
			cout<<"\t\t\t*************************************************"<<endl;	
			cout<<"\t\t\t* Enter the Damaged part of product :"<<ends;
			
			cin.getline(problem,50);
			cout<<"\t\t\t*************************************************"<<endl<<endl;

/****************************************************/		
/******************* STORING DATA *******************/
/****************************************************/		  			

			ofstream out;
			out.open("Customer_Details.txt",ios::app);
			if(out)
			{
				out<<cname<<","<<num<<","<<product_company<<","<<problem<<endl;
			}
		}
		
/****************************************************/		  					
/*************** SEARCH FOR CUSTOMER ****************/
/****************************************************/		  		
		
		void Search()
		{
			string search,line,c_name,mob_no,p_c,d_p;
			ifstream in;
			in.open("Customer_Details.txt");
			cout<<"\n\n\n";
			cout<<"\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t* Enter the Customer_Name or Customer_mob_number to search for :"<<ends;
			cin.ignore();
			getline(cin,search);
			cout<<"\t\t\t***********************************************************************"<<endl;
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
			    	cout<<"\n\n\n";
			    	cout<<"\t\t\t************************************************************"<<endl;
			    	cout<<"\t\t\t* DEATAILS OF CUSTOMER IS ::                                "<<endl;
			    	cout<<"\t\t\t*                                                           "<<endl;
					cout<<"\t\t\t* Name of Customer is :"<<c_name<<                        " "<<endl;
					cout<<"\t\t\t* Mobile Number of customer is :"<<mob_no<<               " "<<endl;
					cout<<"\t\t\t* Customer's product company is :"<<p_c<<                 " "<<endl;
					cout<<"\t\t\t* Damage part of product is :"<<d_p<<                     " "<<endl;
					cout<<"\t\t\t************************************************************"<<endl<<endl;
				}
			}
			}
		}
		
/****************************************************/				
/************** UPDATE FOR CUSTOMER *****************/
/****************************************************/
		  		
/*** NAME UPDATE ***/
		void NameUpdate()
		{
			string search,line,c_name,mob_no,p_c,d_p,nname;
			ifstream in;
			in.open("Customer_Details.txt");
			cout<<"\n\n\n";
			cout<<"\t\t\t***************************************************************"<<endl;
			cout<<"\t\t\t* Enter the Customer name to searched his deatils:"<<ends;
			cin.ignore();
			getline(cin,search);
			cout<<"\t\t\t***************************************************************"<<endl<<endl;
			
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
			    	cout<<"\t\t\t*************************************************"<<endl;
					cout<<"\t\t\t* Name of Customer is :"<<c_name<<"              "<<endl;
					cout<<"\t\t\t* Mobile Number of customer is :"<<mob_no<<"     "<<endl;
					cout<<"\t\t\t* Customer's product company is :"<<p_c<<"       "<<endl;
					cout<<"\t\t\t* Damage part of product is :"<<d_p<<endl<<"     "<<endl;
				 	cout<<"\t\t\t*************************************************"<<endl<<endl;
				 	cout<<"\t\t\t**********************************************"<<endl;
		     		cout<<"\t\t\t* Enter the New Name of the Customer :- "<<ends;
					getline(cin,nname);
					cout<<"\t\t\t**********************************************"<<endl<<endl;
					string newl;
					newl=nname +","+ mob_no +","+ p_c +","+ d_p + "\n";
					filechange(line,newl);
				}
			}
	    	}
	    }
	    
/*** NUMBER UPDATE ***/
		
		void NumUpdate()
		{
			string search,line,c_name,mob_no,p_c,d_p,new_no;
			ifstream in;
			in.open("Customer_Details.txt");
			cout<<"\t\t\t************************************************************************"<<endl;
			cout<<"\t\t\t* Enter the Customer name or Customer no. to show details of Customer :*"<<ends;
			cin.ignore();
			getline(cin,search);
			cout<<"\t\t\t************************************************************************"<<endl;
			
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
			    	cout<<"\t\t\t*********************************************"<<endl;
					cout<<"\t\t\t* Name of Customer is :"<<c_name<<"          "<<endl;
					cout<<"\t\t\t* Mobile Number of customer is :"<<mob_no<<" "<<endl;
					cout<<"\t\t\t* Customer's product company is :"<<p_c<<"   "<<endl;
					cout<<"\t\t\t* Damage part of product is :"<<d_p<<"       "<<endl;
					cout<<"\t\t\t*********************************************"<<endl<<endl;
				 	cout<<"\t\t\t********************************************************"<<endl;
		     		cout<<"\t\t\t* Enter the new mobile number of the customer :- "<<ends;
					cin>>new_no;
					cout<<"\t\t\t********************************************************"<<endl;
					string newl;
					newl=c_name + "," + new_no + "," + p_c + "," + d_p + "\n";
					filechange(line,newl);
				}
			}
	    	}
	    }
	    
/****************************************************/
/***************** DELETE CUSTOMER ******************/		
/****************************************************/					    
	    		
		void Delete()
		{
			string search,line,c_name,mob_no,p_c,d_p,nname;
			ifstream in;
			in.open("Customer_Details.txt");
			cout<<"\n\n\n";
			cout<<"\t\t\t************************************************"<<endl;
			cout<<"\t\t\t*  Enter the name of customer to delete :"<<ends;
			cin.ignore();
			getline(cin,search);
			cout<<"\t\t\t************************************************"<<endl<<endl;
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
			    	
					string newl;
					newl= "\n";
					filechange(line,newl);
					cout<<"\t\t\t***************************************"<<endl;
					cout<<"\t\t\t*  Customer Details has been deleted  *"<<endl;
					cout<<"\t\t\t***************************************"<<endl;
				}
				
			}
	    	}
	    }
	    
/****************************************************/		
/************** TO SHOW ALL CUSTOMERS ***************/		
/****************************************************/			    
		
		void showall()
	    {
	    		cout<<"\n\n\n";
	    		string line,c_name,mob_no,p_c,d_p;
				ifstream in;
				in.open("Customer_Details.txt");
				if(in)
				{
					
				

				while(in>>line)
				{
					stringstream ss(line);
					getline(ss,c_name,',');
					getline(ss,mob_no,',');
			    	getline(ss,p_c,',');
			    	getline(ss,d_p,'\n');
			    
			    
			    	
					cout<<"\t\t\t* Name of Customer is :"<<c_name<<                        " "<<endl;
					cout<<"\t\t\t* Mobile Number of customer is :"<<mob_no<<               " "<<endl;
					cout<<"\t\t\t* Customer's product company is :"<<p_c<<                 " "<<endl;
					cout<<"\t\t\t* Damage part of product is :"<<d_p<<                     " "<<endl;
					cout<<"\t\t\t************************************************************"<<endl;
				}
				}
				in.close();
		}
			
};

/****************************************************************************/
/**************************** MAIN FUNCTION *********************************/
/****************************************************************************/
main()
{
/****************************************************/	
/**************** MAIN PAGE DESIGN ******************/
/****************************************************/    
	cout<<"\t\t\t\t\t\t*****************************************************************************************************************"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  #          #      ###### #######  ###   ######"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  #         # #     #    #    #    #   #  #    #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  #        #   #    ######    #    #   #  ######"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  #       #######   #         #    #   #  #    "<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  ###### #       #  #         #     ###   #    "<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t  ######   #####   ######     #       #   ######           ######  #   #   ###   ######"<<endl;
	cout<<"\t\t\t\t\t\t\t  #    #   #       #    #    # #      #   #    #           #       #   #  #   #  #    #"<<endl;
	cout<<"\t\t\t\t\t\t\t  ######   ####    ######   #   #     #   ######           ######  #####  #   #  ######"<<endl;
	cout<<"\t\t\t\t\t\t\t  # #      #       #       #######    #   # #                   #  #   #  #   #  #     "<<endl;
	cout<<"\t\t\t\t\t\t\t  #  ##    #####   #      #       #   #   #  ##            ######  #   #   ###   #     "<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t \t\t\t\t\t\t\t\t\t\t                By Abhinav Dubey"<<endl<<endl;
    cout<<"\t\t\t\t\t\t*****************************************************************************************************************"<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t================================================================================================================================="<<"\n";
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t   *** WELCOME TO OUR SHOP *** "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ "<<endl;

/****************************************************/
/****************** JOB SELECTION *******************/ 
/****************************************************/           
 	int ch2;
 	cout<<"\t\t\t**********************************"<<endl;
	cout<<"\t\t\t* SELECT YOUR RESPECTIVE JOB :)  *"<<endl;
	cout<<"\t\t\t* 1. Shopkeeper :                *"<<endl;
	cout<<"\t\t\t* 2. Repair Technician :         *"<<endl;
	cout<<"\t\t\t**********************************"<<endl<<endl;
	cout<<"\t\t\t Enter your choice :"<<ends;
	cin>>ch2;
	switch(ch2)
	{
		case 1:
			Shoping();
			Exit();
			exit(0);
			break;
		case 2:
			break;	
	}
    
/****************************************************/    
/************** Login/Exit Selection ****************/
/****************************************************/

	int ch3;
	cout<<endl;
	cout<<"\t\t\t\t *****************************************************"<<endl;
	cout<<"\t\t\t\t * What do you want to do ?                          *"<<endl;
    cout<<"\t\t\t\t * 1) LOGIN                                          *"<<endl;
 	cout<<"\t\t\t\t * 2) EXIT SOFTWARE                                  *"<<endl;
    cout<<"\t\t\t\t *****************************************************"<<endl<<endl;
    cout<<"\t\t\t\t *****************************************"<<endl;
	cout<<"\t\t\t\t Enter your choice as (1 or 2) :"<<ends;
	cin>>ch3;
	cout<<"\t\t\t\t *****************************************"<<endl<<endl;
	
	switch(ch3)
	{
		case 1:
			Admin_Login();
			system("pause");
			system("cls");
			break;
		case 2:
			Exit();
			exit(0);
			break;
		default:
			return(1);
				
	}
/****************************************************/
/********** OPTIONS FOR TASKS TO PERFORM ************/	
/****************************************************/	
	A:
	cout<<endl<<endl;
	cout<<"\t\t\t Select the options to perform the respective tasks :)"<<endl<<endl;
	cout<<"\t\t\t******************************************"<<endl;
	cout<<"\t\t\t* 01 - To Add new customers :-           *"<<endl;
	cout<<"\t\t\t* 02 - To Search any customer :-         *"<<endl;
	cout<<"\t\t\t* 03 - To Update a customer :-           *"<<endl;
	cout<<"\t\t\t* 04 - To Delete a new customer :-       *"<<endl;
	cout<<"\t\t\t* 05 - To Show all Customers of shop :-  *"<<endl;
	cout<<"\t\t\t******************************************"<<endl<<endl;
	int select;
	cout<<"\t\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t Enter your option number to perform the respective task"<<ends;
	cin>>select;
	cout<<"\t\t\t*********************************************************************"<<endl;
	
	switch(select)
	{
		case 01:
			system("cls");
			Customer c;
    		c.details();
    		jump();
    		goto A;
        	break;
        case 02:
        	system("cls");
        	c.Search();
        	jump();
        	goto A;
        	break;
        case 03:
        	system("cls");
       		int choice;
       		cout<<"\n\n\n";
       		cout<<"\t\t\t*********************************"<<endl;
       		cout<<"\t\t\t* What do you want to update :  *"<<endl;
       		cout<<"\t\t\t*                               *"<<endl;
			cout<<"\t\t\t* 1) To update name             *"<<endl;
       		cout<<"\t\t\t* 2) To update number           *"<<endl;
       		cout<<"\t\t\t*********************************"<<endl<<endl;
			cout<<"\t\t\t*************************"<<endl;
			cout<<"\t\t\t Enter your choice :"<<ends;
       		cin>>choice;
       		cout<<"\t\t\t*************************"<<endl<<endl;
       		switch(choice)
       		{
       			case 1:
       				
       				c.NameUpdate();
       				jump();
       				goto A;
       				break;
      			case 2:
					c.NumUpdate();
					jump();
					goto A;	
					break;
			}	
			break;
		case 04:
			system("cls");
			c.Delete();
			jump();
			goto A;
			break;
		case 05:
			system("cls");
			c.showall();
			jump();
			goto A;
			break;	
				
    }
}
