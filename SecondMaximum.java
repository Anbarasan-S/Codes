import java.util.LinkedList;
import java.util.List;
import java.util.*;
public class SecondMaximum {
    public static void main(String[] args)
    {
        List<Integer>lst=new LinkedList<>();
        lst.add(12);
        lst.add(123);
        lst.add(122);
        lst.add(42);
        lst.add(123);
         int max=Integer.MIN_VALUE;
        for(int i=0;i<lst.size();i++)
        {
            if(lst.get(i)>max)
            {
                max=lst.get(i);
            }
        }
        int secondmax=Integer.MIN_VALUE;
        for(int i=0;i<lst.size();i++)
        {
            if(lst.get(i)<max&&lst.get(i)>secondmax)
            {
                secondmax=lst.get(i);
            }
        }
        System.out.println(secondmax);
    }
}
