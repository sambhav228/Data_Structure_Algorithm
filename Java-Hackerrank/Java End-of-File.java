import java.io.*;
import java.util.*;
public class Solution {

    public static void main(String[] args) {
        
            int i=1;
            Scanner sc = new Scanner(System.in);
            
            while(sc.hasNext())
            {
                String s=sc.nextLine();
                System.out.println(i++ +" "+s);
            }
    }
}
