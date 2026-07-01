/*Problem Statement: Given an array, we have to find the largest element in the array.

Examples
Example 1:
Input:
 arr[] = {2, 5, 1, 3, 0}  
Output:
 5  
Explanation:
  
5 is the largest element in the array.

Example 2:
Input:
 arr[] = {8, 10, 5, 7, 9}  
Output:
 10  
Explanation:
  
10 is the largest element in the array. */

/*Approach->

Brute: sort array and select last element
Optimal: initialize maxi as INT_MINI and then run loop
*/

//Code->
#include <bits/stdc++.h>
using namespace std;
int largestelement(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = largestelement(arr, n);
    cout<<ans;
    return 0;
}
