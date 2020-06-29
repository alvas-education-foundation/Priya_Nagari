/*4.Write a C++ program to enter the details of students and display them using
class and object. The details should be private in nature and use public members
function to access the private members.(Define the member function outside the
class).*/


#include<iostream>
using namespace std;
class Student
{
	public:	int i;
	private:
		char name[20],usn[10],branch[10];
		int sem;
		
		
			
	    public:
		void input();
		void display();
		
};

void Student::input()
{
    cout<<"\nEnter "<<i<<" student details:"<<endl;
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter usn:";
	cin>>usn;
	cout<<"Enter Branch:";
	cin>>branch;
	cout<<"Enter Sem:";
	cin>>sem;
}
void Student::display()
{
	cout<<"\nName:"<<name;
	cout<<"\nusn.:"<<usn;
	cout<<"\nBranch:"<<branch;
	cout<<"\nSem:"<<sem<<endl;
}
int main()
{
    
	Student s;
	int n;
    cout<<"In this program function definations are written outside the class"<<endl;
	cout<<"enter number of student details to be stored: "<<endl;
	cin>>n;

	for(s.i=1;s.i<=n;s.i++)
	{
        s.input();
	s.display();
	}
}