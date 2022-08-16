//Design java application using Collection in java such as array List, Link List





import java.util.*;

public class ArrayListExample
{
    public static void main(String args[])
    {
        ArrayList<String>list= new ArrayList<String>();
        list.add("Mango");
        list.add("Banana");
        list.add("Grapes");
        list.add("Tomato");

        Iterator itr=list.iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
    }
}