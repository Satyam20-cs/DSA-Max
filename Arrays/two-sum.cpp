/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.(or just yes or no)

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/
/*Approach->
Brute: 2 for loops
Better: Using hashmap, rem = target - el, then find mpp.find(rem)
Optimal: 2 pointer approach(sort first)*/
//Code->
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp; //el, index
        for(int i = 0; i<nums.size(); i++){
            int el = nums[i];
            int rem = target - el;
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem], i};
            }
            else{
                mpp[el] = i;
            }
        }
        return {};
    }
};