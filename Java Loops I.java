import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);    
        int N = scanner.nextInt();
        for(int i=1;i<=10;i++)
        {
            int a=N*i;
        System.out.println(+N+" x " +i+ " = " +a);

        }
        scanner.close();
    }
}
