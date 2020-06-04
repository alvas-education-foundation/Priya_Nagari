//write a java program to read three integer values from the keyboard and find the sum of the values. Declare a variable "sum" of type int and store the result in it.
import java.io.*
import java.util.Scanner;
public class SumOfThreeInt
{
	public static void main(String[] args)
	{       
		int i,n=0,s=0;
		{
	        	System.out.println("Input the 3 numbers: ");  			   
		}
		for (i=0;i<3;i++)
		{
			Scanner in = new Scanner(System.in);
			n = in.nextInt();
  			s +=n;
		}
		System.out.println("The sum of 5 no is : " +s);   
	}
}