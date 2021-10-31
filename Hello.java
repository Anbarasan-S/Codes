import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
     Scanner sc=new Scanner(System.in);
     String s[]=new String[20000];
     int jk=-1;
     while(true)
     {
         s[++jk]=sc.nextLine();
        if(s[jk].equals("Q")||s[jk].equals("q"))
        break;
     }
     int count=0;
     for(int i=0;i<jk;i++)
     {
         if(s[i].length()!=10)
         count++;
         else
         {
             for(int j=0;j<s[i].length();j++)
             {
                 if(!(s[i].charAt(j)>='0'&&s[i].charAt(j)<='9'))
                 {
                     count++;
                     break;
                 }
             }
         }
     }
     System.out.println(count);
	}
}