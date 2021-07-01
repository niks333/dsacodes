import java.util.*;
import java.lang.*;
import java.io.*;

/*For findind maximum element and minimum element in given array*/

public class MaxAndMinOfArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            if(arr[i]>max) max=arr[i];
            if(arr[i]<min) min=arr[i];
        }
        System.out.println("Maximum number is: "+max+"\nMinimum number is: "+min);
    }
}