/*Sorted only->
Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

Examples
Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2:
Input: N = 5, array[] = {5,4,6,7,8}
Output: False.
Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.
Here element 5 is not smaller than or equal to its future elements.
*/
/*Approach->
Brute: two loops, stand at one index, compare with next & so on.
Optimal: single traversal, compare with previous
*/
//Code->
#include <bits/stdc++.h>
using namespace std;
bool sortedarr(int arr[], int n){
    for(int i = 1; i<n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    bool ans = sortedarr(arr, n);
    cout<<ans;
    return 0;
}

/*Rotated&Sorted both->
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
*/
/*Approach->
there will be one case where arr[i]>arr[i+1] and also consider arr[n]>arr[0] only one case. if same elements, break will be 0
*/
//Code->
#include <bits/stdc++.h>
using namespace std;
bool rotatedsorted(int arr[], int n){
    int cnt = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1]){
            cnt++;
        }
    }
    if(arr[n-1]>arr[0]){
        cnt++;
    }
    if(cnt <= 1) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bool ans = rotatedsorted(arr,n);
    cout<<ans;
    return 0; 
}
