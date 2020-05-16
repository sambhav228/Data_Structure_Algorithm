import java.lang.*; 
import java.util.*;

public class Test { 

    public static void main(String args[]) 
    { 
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        StringBuffer sbf=new StringBuffer(s);
        sbf.reverse();
        String str=sbf.toString();
        if(s.equals(str))
        {
            System.out.println("Yes");
            
        }
        else
            System.out.println("No");
    } 
} 
