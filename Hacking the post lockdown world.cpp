#include<bits/stdc++.h>

using namespace std;

int sus=0;

class customer_entry
{
    char name[50];
    long phone;
    
    int entry_hour;
    int entry_min; 
    int entry_sec;

    public:
    	
    	void entry_time()
        {
           time_t now2 = time(0);
           tm *ltma = localtime(&now2);
            entry_hour = ltma->tm_hour;
            entry_min = ltma->tm_min;
            entry_sec = ltma->tm_sec;

        }
        
        void input()
        {
            cout<<"\n Enter your name: ";
            gets(name);

            cout<<"\n Enter your phone number: ";
            cin>>phone;
            
            entry_time();
        }

        void output()
        {
            cout<<"\n Name: ";
            cout<<name;

            cout<<"\n Phone number: ";
            cout<<phone;
            
            cout<<"The time is: "<<entry_hour<<":"<<entry_min<<":"<<entry_sec;
        }

        char *getname()
        {
            return name;
        }

};

void intro()
{
	cout<<setw(328)<<"Contact Tracing Software";	
	cout<<setw(214)<<"by Aryan, Kushal and Shivam\n\n";
}


int main()
{	
	intro();
	int choice;
	
	loop: 
	
	cout<<"Menu\n1:Customer Entry\n2:Customer Exit\n3:Report Case\n4:Exit\n";
	cout<<"\n\nEnter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			exit(0);
	}
	
	goto loop:
	return 0;
}
