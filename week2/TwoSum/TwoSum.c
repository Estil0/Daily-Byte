/*Given an array of integers, return whether or not two numbers sum to a given target, k. 
Note: you may not sum a number with itself. 

Ex: Given the following...
[1, 3, 8, 2], k = 10, return true (8 + 2)
[3, 9, 13, 7], k = 8, return false
[4, 2, 6, 5, 2], k = 4, return true (2 + 2)*/

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int compare(const void*,const void*);
bool twoSum(int*,int,int);

int main(void){
    int nums1[4]={1,3,8,2};
    printf("%d",twoSum(nums1,4,10));
    int nums2[4]={3,9,13,7};
    printf("%d",twoSum(nums2,4,8));
    int nums3[5]={4,2,6,5,2};
    printf("%d",twoSum(nums3,5,4));
    return 0;
}

int compare(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}

bool twoSum(int*nums,int numsSize,int k){
    qsort(nums,numsSize,sizeof(int),compare);
    int left=0,right=numsSize-1;
    while(left<right){
        if(nums[left]+nums[right]==k)
            return true;
        if(nums[left]+nums[right]<k){
            left++;
            continue;
        }
        right--;
    }
    return false;
}