/*Write a Java program to calculate nPr.*/
import java.util.*; 
  
public class NPR { 
  
    static int fact(int n) 
    { 
        if (n <= 1) 
            return 1; 
        return n * fact(n - 1); 
    } 
  
    static int nPr(int n, int r) 
    { 
        return fact(n) / fact(n - r); 
    } 
  
    public static void main(String args[]) 
    { 
	int T;
	
	Scanner sc=new Scanner(System.in);
		for(;;)
		{
		System.out.println("Enter no. of test cases(1 <= T <= 100) to be performed  (enter  to stop)");
		T=sc.nextInt();
		if(T==0)
		break;
			else if((T>=1) && (T<=100))
        		{
			for(int a=1;a<=T;a++)
			{
	
			int n; 
        		int r; 
  			System.out.println("Enter n value");
			n=sc.nextInt();
	
			System.out.println("Enter r value");
			r=sc.nextInt();
			if((n>=1) && (n<=20) && (n>=r))
	
			{
        		System.out.println(n + "P" + r + " = " + nPr(n, r));
	 		}
	
	
		else
		{
		System.out.println("The values of n,r should be n>=1,r <= 20 and also n>=r");
		}
		}
		System.out.println("Enter no. of test cases to be performed (enter 0 to stop)");
		T=sc.nextInt();

		if(T==0)
		break;
	}
	}
	
	
	
		
	
	
    } 
} 