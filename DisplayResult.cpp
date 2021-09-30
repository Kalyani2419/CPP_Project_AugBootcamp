#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int rollNo;
		char name[20];
	
	public:
		void read();
		void display();
};

class marks : public student
{
	protected:
		int English;
		int Maths;
		int Computer;

	public:
		void getMarks();
		void putMarks();	
};

class result : public marks
{
	private:
		int totalMarks;
		float percentage;
		char div[10];

	public:
		void process();
		void printResult();
};


void student :: read()
{
	cout<<"Enter Roll No: ";
	cin>>rollNo;
	cout<<"Enter Name: ";
	cin>>name;
}

void student :: display()
{
	cout<<"\n\n******Display Student Result******"<<endl;

	cout<<"\nRoll No: "<<rollNo<<endl;
	cout<<"Name: "<<name<<endl;
}

void marks :: getMarks()
{
	cout<<"\n====Enter 3 Subject Marks===="<<endl;	

	cout<<"Enter Marks of English: ";
	cin>>English;
	
	cout<<"Enter Marks of Maths: ";
	cin>>Maths;

	cout<<"Enter Marks of Computer: ";
	cin>>Computer;
}

void marks :: putMarks()
{
	cout<<"\nSubject 1- English: "<<English<<endl;
	cout<<"Subject 2- Maths: "<<Maths<<endl;
	cout<<"Subject 3- Computer: "<<Computer<<endl;
}

void result :: process()
{
	totalMarks = English + Maths + Computer;
	percentage = totalMarks/3.0; //(t/300.0)*100;

	//Ternary operator
	percentage>=60 ? strcpy(div, "First") : percentage>=50 ? strcpy(div, "Second") : strcpy(div, "Third");
}

void result :: printResult()
{
	cout<<"\nTotal Marks = "<<totalMarks<<endl;
	cout<<"Percentage = "<<percentage<<endl;
	cout<<"Division = "<<div<<endl;
}

int main()
{
	result x;

	x.read();
	x.getMarks();
	x.process();

	x.display();
	x.putMarks();
	x.printResult();
	
	return 0;
}

