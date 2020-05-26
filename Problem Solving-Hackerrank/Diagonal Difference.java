//https://www.hackerrank.com/challenges/diagonal-difference/problem

import java.io.*;
import java.math.*;
import java.util.*;
import java.lang.*;
public class D
{
    public static void main(String args[])
    {
    int n,i,j,s1=0,s2=0;
    Scanner sc=new Scanner(System.in);
    n= sc.nextInt();
    int [][] a= new int[n][n];
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
           // System.out.print(i+" "+j);
            a[i][j] = sc.nextInt();
        }
    }

for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i==j)
            {
                s1=s1+a[i][j];
            }
            
            else
                continue;
        }
    }

    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                s2=s2+a[i][j];
            }
            
            else
                continue;
        }
    }

    
    int t=(Math.abs(s1-s2));
System.out.println(t);

}
}
