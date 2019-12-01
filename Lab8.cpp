#include<iostream>
#include<fstream>
using namespace std;
class item
{
	private:
		 int item_number;
		 int quantity;
		 int wholesale;
		 int retail;
		 int date;
		 public:
		 	item();
		 	item(int i,int q,int w,int r);
		 	void add();
		 	void display();
		 	void modify();
		 	void del();
	
};
item::item()
{
	item_number=0;
	quantity=0;
	wholesale=0;
	retail=0;
}
item::item(int i,int q,int w,int r)
{

    item_number=i;
	quantity=q;
	wholesale=w;
	retail=r;
}
void item::add()
{
	cout<<"Enter Item number: ";
	cin>>item_number;
	cout<<"Enter Quantity in hand: ";
	cin>>quantity;
	cout<<"Enter Wholesale cost: ";
	cin>>wholesale;
	cout<<"Enter Retail cost: ";
	cin>>retail;
	cout<<"Enter Date:";
	cin>>date;
	fstream file;
	file.open("item.txt",ios::app);
	if(file.fail())
	{
		 cout<<"Error"<<endl;
	}
	else
	{
	
	file<<item_number<<endl;
	file<<quantity<<endl;
	file<<wholesale<<endl;
	file<<retail<<endl;
	file<<date<<endl<<endl;}
	file.close();
	
}
void item::display()
{
	int i;
	fstream file;
	file.open("item.txt",ios::in);
	while(!file.eof())
	{
	file>>i;
		cout<<"Item number: "<<i<<endl;
	file>>i;
	cout<<"Quantity in hand: "<<i<<endl;
	file>>i;
	cout<<"wholesale cost:"<<i<<endl;
	file>>i;
	cout<<"Retail cost: "<<i<<endl;
	file>>i;
	cout<<"Date: "<<i<<endl<<endl;
}
	file.close();
}
void item::modify()
{ 
	int x;
		cout<<"Enter Item number which you want to Modify:";
		cin>>x;
	fstream file;
	file.open("item.txt",ios::in);
	{
	while(!file.eof())
	{
	
	file>>item_number;
	file>>quantity;
	file>>wholesale;
	file>>retail;
	file>>date;
	fstream file1;
	file1.open("item1.txt",ios::app);
	{
		if(file1.fail())
	{
		 cout<<"Error"<<endl;
	}
	else
	{
		
		if(x!=item_number)
		{
	file1<<item_number<<endl;
	file1<<quantity<<endl;
	file1<<wholesale<<endl;
	file1<<retail<<endl;
	file1<<date<<endl<<endl;}
	}
	file1.close();
}
}
}
file.close();
rename("item.txt","item1.txt");
remove("item.txt");
cout<<"Enter Modified Data.\n";
cout<<"Enter Item number: ";
	cin>>item_number;
	cout<<"Enter Quantity in hand: ";
	cin>>quantity;
	cout<<"Enter Wholesale cost: ";
	cin>>wholesale;
	cout<<"Enter Retail cost: ";
	cin>>retail;
	cout<<"Enter Date: ";
	cin>>date;
	fstream file1;
	file1.open("item1.txt",ios::app);
	if(file1.fail())
	{
		 cout<<"Error"<<endl;
	}
	else
	{
	
	file1<<item_number<<endl;
	file1<<quantity<<endl;
	file1<<wholesale<<endl;
	file1<<retail<<endl;
	file1<<date<<endl<<endl;
	}
	file1.close();
}
void item::del()
{
	int x;
		cout<<"Enter Item number which you want to delet:";
		cin>>x;
	fstream file;
	file.open("item.txt",ios::in);
	{
	while(!file.eof())
	{
	
	file>>item_number;
	file>>quantity;
	file>>wholesale;
	file>>retail;
	file>>date;
	fstream file1;
	file1.open("item1.txt",ios::app);
	{
		if(file1.fail())
	{
		 cout<<"Error"<<endl;
	}
	else
	{
		
		if(x!=item_number)
		{
	file1<<item_number<<endl;
	file1<<quantity<<endl;
	file1<<wholesale<<endl;
	file1<<retail<<endl;
	file1<<date<<endl<<endl;
	}
	}
	file1.close();
}
}
}
file.close();
rename("item.txt","item1.txt");
remove("item.txt");
}	
	

int main()
{
	int x;
	item i;
	cout<<" Enter 1 for add:\n Enter 2 for display:\n Enter 3 for del:\n Enter 4 for modify:\n";
	cin>>x;
	if(x==1)
	{
	i.add();
}
if(x==2)
{
 i.display();
}
if(x==3)
{
 i.del();
}

if(x==4)
{
i.modify();
}
}
