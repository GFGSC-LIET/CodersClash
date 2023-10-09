import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
   
    
        int res;
        Scanner sc = new Scanner(System.in);
        
    
        int n = sc.nextInt();
        
        if(n%2==0) {
            res = n*(n/2+1);
        }
        else {
            res = (n*n) - (2*n-1);
        }
        System.out.print(res);
    }
}