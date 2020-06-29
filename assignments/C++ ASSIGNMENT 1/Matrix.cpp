//1.Write a C++ program to declare a matrix of size 3*3 matrix of size, initialize the
matrix and display them. Also find the sum of matrix elements, sum of main
diagonal elements and secondary diagonal elements.
#include <iostream>
using namespace std;

int main()
{
    int r, c, a[80][80], i, j;

    cout << "Enter number of rows (between 1 and 80): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 80): ";
    cin >> c;

    cout << endl << "Enter elements of  matrix: " << endl;

    // Storing elements of  matrix 
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
       
    // Displaying the  matrix.
    cout << endl << " matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << a[i][j] << "  ";
            if(j == c - 1) //too go for next row
                cout << endl;
        }
        
        int sum=0;
        for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
    
        {
        sum=sum+a[i][j];
            
        }
            cout <<"Sum of all elements in the matrix is: "<<sum<<endl;
       
        //sum of main diagonal elements
        
        int diag_sum=0;
        for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        if(i==j)
        {
            diag_sum=diag_sum+a[i][j];
            
        }
            cout <<"Sum of main diagonal elements of the matrix is: "<<diag_sum<<endl;//sum of main diagonal elements
        
        int SEC_diag_sum=0;
        for(i = 0; i < r; ++i)
        
        
        {
            SEC_diag_sum=SEC_diag_sum+a[i][r-1-i];
            
        }
            cout <<"Sum of secondery diagonal elements of the matrix is: "<<SEC_diag_sum<<endl;

            
            
}