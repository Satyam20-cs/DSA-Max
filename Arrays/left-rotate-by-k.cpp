/*Rotate array by K elements


31

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples
Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]
Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2]
Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]*/

/*Approach->
to right rotate-> reverse whole array, reverse k elements, then remaining n-k elements
to left rotate-> reverse k elements, reverse n-k elements, then whole array. */
#include <bits/stdc++.h>
using namespace std;
void leftrotatebyk(vector<int>& arr, int n, int k){
    reverse(arr.begin(), arr.begin()+k); //iterators req not values
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}

void rightrotatebyk(vector<int>&arr, int n, int k){
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    leftrotatebyk(arr, n, k);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    rightrotatebyk(arr, n, k);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}