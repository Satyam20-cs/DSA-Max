/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Examples
Input: arr[]=[1,1,2,2,2,3,3]
Output: [1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
Output: [1,2,3,4,_,_,_,_,_,_,_]
Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.*/
/*Approach->
Brute: Insert elements in set and print its elements
Optimal: In-place. if equal, move pointer, if not swap. this is 2 pointer approach*/

//Code
#include <bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&nums, int n){
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if(nums[i] != nums[k]){
            k++;
            swap(nums[i], nums[k]);
          
        }
    }
    return k+1;
      
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    int k = removeduplicates(nums, n);
    cout<<k<<endl;
    for(int i = 0; i<k; i++){
        cout<<nums[i];
    }
    return 0;
}