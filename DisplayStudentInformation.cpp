//Write a program to use array of peimitive data types to store the information of students.

#include<iostream>
using namespace std;

int main()
{
	string stud_name[5] = {"Prabal", "Ram", "Rahul", "Chanchal", "Riya"};
	string course_name[5] = {"C++", "Java", "Python", "Android", "Web"};
	char stud_gender[5] = {'M', 'M', 'M', 'F', 'F'};
	int stud_age[5] = {21, 20, 19, 22, 18};
	float course_price[5] = {120.2, 312.5, 220.50, 410.80, 750.50};
	double discount[5] = {10.5, 5.2, 10.45, 40.50, 7.40};
	bool present_absent[5] = {true, false, false, true, false};

	for(int i=0; i<5; i++)
	{
		//printing students name
		cout<<"Information for: "<<stud_name[i]<<endl;

		//checking gender and printing he/she
		if(stud_gender[i] == 'F')
		{
			cout<<"She Enrolled for course: "<<course_name[i]<<endl;
			cout<<"Her age is: "<<stud_age[i]<<endl;
		}
		else
		{
			cout<<"He Enrolled for course: "<<course_name[i]<<endl;
			cout<<"His age is: "<<stud_age[i]<<endl;
		}

		//course price snd discount
		cout<<"Course price: "<<course_price[i]<<" and Discount: "<<discount[i]<<"%"<<endl;

		//Boolean for present or absent
		if(present_absent[i] == true)
		{
			cout<<"Today "<<stud_name[i]<<" is Present"<<endl;
		}
		else
		{
			cout<<"Today "<<stud_name[i]<<" is Absent"<<endl;
		}

		cout<<"======================*====================\n\n";
	}

	return 0;
}
