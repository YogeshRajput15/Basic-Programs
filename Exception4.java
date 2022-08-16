import java.lang.*;
import java.util.*;

class Demo
{
    int no1=0,no2=0; 
    public  void Division(int no1, int no2)throws ArithmaticException;
    {
        return no1/no2;
    }
}
class Exception4
    {
        public static void main(String a[])
        {      
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number");
        int no1 = sobj.nextInt();
        System.out.println("Enter second number");
        int no2 = sobj.nextInt();

        Demo dobj=new Demo();
    try
    {

    
        int ret= dobj.Division(no1,no2);
        System.out.println("Division is:"+ret);
    
    }
        
        catch(ArithmeticException obj)
    {
        System.out.println("Inside catch");
        System.out.println(obj);
    }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
        finally
        {
                System.out.println("Inside finally");
                sobj.close();
        }
        System.out.println("End of application");
   
}
}