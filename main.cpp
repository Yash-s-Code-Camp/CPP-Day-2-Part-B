#include <iostream>
using namespace std;

class Student
{
	int age;
	string fname;
	
	public:

		//setter for age
		void setAge(int a)
		{
			age = a;
		}

		//getter for age
		int getAge()
		{
			return age;
		}

		// setter for fname
		void setfName(string fn)
		{
			fname = fn;
		}

		// getter for fname
		string getfName()
		{
			return fname;
		}		
};




int main() {

	Student s;
	
	s.setAge(26);
	s.setfName("Yash");

	cout <<s.getfName()<<" "<< s.getAge()<<endl;

	s.setAge(17);
	s.setfName("Arpit");	

	cout <<s.getfName()<<" "<< s.getAge()<<endl;
 	
	return 0;
}



// Method Overloading

/*
	void sum()
	{

	}

	void sum(int a, int b)
	{

	}

	int sum()
	{

	}

	int sum(int a, int b)
	{

	}

	
*/

// Method Overriding

/*
	int sum(int a, int b)
	{
		statement1;
	}

	int sum(int a, int b)
	{
		statement2;
	}

	
*/
