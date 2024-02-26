/*Given an array of integers, return whether or not two numbers sum to a given target, k. 
Note: you may not sum a number with itself. 

Ex: Given the following...
[1, 3, 8, 2], k = 10, return true (8 + 2)
[3, 9, 13, 7], k = 8, return false
[4, 2, 6, 5, 2], k = 4, return true (2 + 2)*/

import java.util.HashMap;
import java.util.Map;

class TwoSum{
    public static void main(String[]args){
        int[]nums={1,3,8,2};
        int k=10;
        Map<Integer, Integer> numMap = new HashMap<>();
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            int complement = k - nums[i];
            if (numMap.containsKey(complement)) {
                System.out.println("true");
            }
            numMap.put(nums[i], i);
        }
        System.out.println("false");
    }
}