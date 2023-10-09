import java.io.*;
import java.util.*;


public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        String str = sc.nextLine();

        int[] charCount = new int[26]; 

        
        for (int i = 0; i < str.length(); i++) {
            charCount[str.charAt(i) - 'a']++;
        }

    
        int oddCount = 0;
        for (int count : charCount) {
            if (count % 2 != 0) {
                oddCount++;
            }
        }

        boolean Rearrange = oddCount <= 1;

        System.out.println(Rearrange);

        sc.close();
    }
}