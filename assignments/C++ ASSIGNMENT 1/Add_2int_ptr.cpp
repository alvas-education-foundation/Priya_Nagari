//program 2. Write a C++ program to find the sum of 2 integers using Pointers.

#include<iostream>
using namespace std;
int  main()
{

	int num1,num2,sum = 0;
	int *ptr1, *ptr2;
	cout<<"Enter the two number :"<<endl;
	cin>>num1>>num2;
	ptr1 = &num1;
	ptr2 = &num2;
	sum = *ptr1 + *ptr2;
	cout<<"Sum of the two number is "<<sum;

}