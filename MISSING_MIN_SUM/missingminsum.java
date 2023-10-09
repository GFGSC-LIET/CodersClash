
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;



public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
    
        int n = sc.nextInt();
        
        long[] arr = new long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextLong();
        }
        
        Arrays.sort(arr);
        
        long smallestSum = 1;
        
        
        for (int i = 0; i < n; i++) {
            if (arr[i] <= smallestSum) {
                smallestSum += arr[i];
            } else {
                break;
            }
        }
        
        System.out.println(smallestSum);
        
        sc.close();
    }
}