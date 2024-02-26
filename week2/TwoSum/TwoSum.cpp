/*Given an array of integers, return whether or not two numbers sum to a given target, k. 
Note: you may not sum a number with itself. 

Ex: Given the following...
[1, 3, 8, 2], k = 10, return true (8 + 2)
[3, 9, 13, 7], k = 8, return false
[4, 2, 6, 5, 2], k = 4, return true (2 + 2)*/

#include<iostream>
#include<unordered_map>
#include<vector>

bool twoSum(std::vector<int>nums,int k);

int main(){
    std::vector<int>nums={1,3,8,2};
    std::cout<<twoSum(nums,10)<<' ';
    nums={3,9,13,7};
    std::cout<<twoSum(nums,8)<<' ';
    nums={4,2,6,5,2};
    std::cout<<twoSum(nums,4)<<' ';
}

bool twoSum(std::vector<int>nums,int k){
    std::unordered_map<int,int>umap;
    for(int i=0;i<nums.size();i++)
        umap[nums[i]]=i;
    for(int i=0;i<nums.size();i++)
        if(umap.count(k-nums[i])&&umap[k-nums[i]]!=i)
            return true;
    return false;
}