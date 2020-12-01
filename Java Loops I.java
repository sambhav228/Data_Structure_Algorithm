import java.io.*;
import java.util.*;
import java.util.concurrent.*;

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
