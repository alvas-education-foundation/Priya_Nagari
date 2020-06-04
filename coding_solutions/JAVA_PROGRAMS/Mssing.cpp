//Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
#include <iostream>
using namespace std;
int MissingNo(int arr[], int len)
{
   int temp;  
   temp  = ((len+1)*(len+2))/2;  
   for (int i = 0; i<len; i++)    
      temp -= arr[i];  
   return temp;
}
int main() 
{
   int n;   
   cout<<"Enter the size of array: "; 
   cin>>n;  
   int arr[n-1];  
   cout<<"Enter array elements: ";   
   for(int i=0; i<n; i++)
   {    
      cin>>arr[i];  
   } 
   int missingNo=MissingNo(arr,5); 
   cout<<"Missing Number is: "<<missingNo;
   return 0;
}
