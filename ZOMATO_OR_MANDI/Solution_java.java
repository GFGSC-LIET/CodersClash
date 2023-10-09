import java.io.*;
import java.util.*;
import java.math.*;
public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int zomatoCost = sc.nextInt();
        int mandiCost = sc.nextInt();
        
    
        int discount = (int) (zomatoCost * 0.9);
        
        if (discountedZomatoCost < mandiCost) {
            System.out.println(discount);
            System.out.println("ZOMATO");
        } else if (mandiCost < discount) {
            System.out.println(mandiCost);
            System.out.println("MANDI");
        } else {
            System.out.println(mandiCost);
            System.out.println("BOTH");
        }
        
        sc.close();
    }
}
