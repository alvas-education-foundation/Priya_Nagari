/*Return a version of the given array where all the 10's have been removed. The remaining elements should shift left towards the start of the array as needed, and the empty spaces a the end of the array should be 0. So {1, 10, 10, 2} yields {1, 2, 0, 0}. You may modify and return the given array or make a new array.*/
public class RemoveTens {
	public static void main(String[] args) {
		int Input[]={10,2,10};
		int toRemove=10;
		RemoveTens.toRemoveElement(Input, toRemove);
	}	
	private static void toRemoveElement(int[] Input,int toRemove)
	{
	 int[] ini=Input;
	int rem=toRemove;
	int count=0;	
	System.out.println("before");
	for(int i =0;i<ini.length;i++)
	{		
	System.out.println(ini[i] +" ");
	}
	for(int i =0;i<ini.length;i++)
	if(ini[i]==rem)
	{
		for(int j=i;j<ini.length;j++)
		{
			if(i!=ini.length-1)
			{
			ini[i]=ini[i+1];
			ini[i]=0;
			}
			else
			{
				ini[i]=0;
			}
		}
	}
	for (int i=0;i<ini.length;i++)
	{
		if(ini[i]!=0) { 
			ini[count++]=ini[i];
			
		}
		
	}
	while(count<ini.length) {
		ini[count++]=0;
	}
	System.out.println("after" +rem);
	
	for(int i=0;i<ini.length; i++)
	{
		System.out.println(ini[i] +" ");
	}
	}
}
