//compairing Strings in java
import java.io.*;

class StringXXXXX
{
    public static void main(String a[])
    {
        String str1="Hello";
        String str2="Hello";
        String str3=new String("Hello");

        if(str1==str3)
        {
            System.out.println("String are same");
        }
        else
        {
            System.out.println("String are different");
        }
        if(str1.equals(str2))
        {
            System.out.println("String are same");
        }
        else
        {
            System.out.println("String are different");
        }
    }
}