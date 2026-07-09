/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function*/
/*Approach->
Brute: Sort
Better: count 0s, 1s, 2s using for loop. then use another for loop and assign a[i] = 0 till cnt0, and so on.
Optimal: Dutch National Flag Algo->
low = 0, mid = 0, high = n-1, mid scans unknown area*/
//Code->
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;

            }
            else{
                swap(nums[mid], nums[high]);
                high--; //mid++ not because swap is of unknown
            }
        }
    }
};