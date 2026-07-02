/*Problem Statement: Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.

Examples
Example 1:
Input:
 nums = [1, 2, 3, 4, 5]  
Output:
 [2, 3, 4, 5, 1]  
Explanation:
 Initially, nums = [1, 2, 3, 4, 5]  
Rotating once to the left results in nums = [2, 3, 4, 5, 1].

Example 2:
Input:
 nums = [-1, 0, 3, 6]  
Output:
 [0, 3, 6, -1]  
Explanation:
 Initially, nums = [-1, 0, 3, 6]  
Rotating once to the left results in nums = [0, 3, 6, -1].
*/
/*Approach->
Brute: Make a new array and place elements there by left rotating, i.e. temp[i-1] = arr[i] starting from i = 1 to n-1 and then temp[n-1] = arr[0]
Optimal: in place using 2 pointer approach. or in place by arr[i-1] = arr[i] except last element. nums[n-1] = temp = nums[0] */
//Code->
#include <bits/stdc++.h>
using namespace std;
void leftrotate(vector<int>&nums, int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        swap(nums[i], nums[j]);
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    leftrotate(nums, n);
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}