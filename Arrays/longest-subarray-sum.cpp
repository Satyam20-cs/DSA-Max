/*
QUESTION:-
You are given an array 'A' of size 'N' and an integer 'K'. You need to print the length of the longest subarray of array 'A' whose sum = 'K'.
Example:
Input: 'N' = 7 'K' = 3
'A' = [1, 2, 3, 1, 1, 1, 1]
Output: 3
Explanation: Subarrays whose sum = '3' are:
[1, 2], [3], [1, 1, 1], [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.
*/
/*Approach->
Brute: 2 for loops, for(i){for(j){sum+=arr[j]}}
Optimal: Prefix sum + Hashmap*/
//Code->
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int longestsubarr(vector<int>&nums ,int k){
            unordered_map<int,int>mpp; //prefix sum, index
            int n = nums.size();
            int x = 0; //total sum
            int maxi = -1;
            mpp[0] = -1; // or write if(sum == k) len = max(len, i+1);
            for(int i = 0; i<n; i++){
                x += nums[i];
                int rem = x - k;
                if(mpp.find(rem)!=mpp.end()){
                    int len = i - mpp[rem];
                    maxi = max(maxi, len);
                }
                if(mpp.find(x)==mpp.end()){
                    mpp[x] = i;
                }
            }
            return maxi;


        }
};