/*Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples
Example 1:
Input:
 [1, 2, 4, 7, 7, 5]
Output:

Second Smallest : 2
Second Largest : 5
Explanation:
  The elements are sorted as 1, 2, 4, 5, 7, 7.
Hence, the second smallest element is 2, and the second largest element is 5.

Example 2:
Input:
 [1]
Output:

Second Smallest : -1
Second Largest : -1
Explanation:
  Since there is only one element in the array, it is both the largest and smallest element.
Therefore, there is no second smallest or second largest element present.
*/

/*Approach ->
Consider base case i.e. if n = 2. in that case we return -1.
Brute: sort array, and then we can find second largest and smallest.
Better: we can traverse twice, find smallest and largest, then we can traverse again and find element just smaller && != smallest element, same for largest.
Optimal: single traversal. we keep track of second small and small (curr) and same for largest.
*/

//Code->
#include <bits/stdc++.h>
using namespace std;
int secondsmallest(int arr[], int n){
    int secondsm = INT_MAX;
    int sm = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<sm){
            secondsm = sm;
            sm = arr[i];
        }
        else if(arr[i]<secondsm && arr[i]>sm){
            secondsm = arr[i];
        }
    }
    return secondsm;
}

int secondlargest(int arr[], int n){
    int secondlr = INT_MIN;
    int lr = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>lr){
            secondlr = lr;
            lr = arr[i];
        }
        else if(arr[i]>secondlr && arr[i]<lr){
            secondlr = arr[i];
        }
    }
    return secondlr;
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int secondsm = secondsmallest(arr,n);
    int secondlr = secondlargest(arr,n);
    cout<<secondsm<<"    "<<secondlr;
    return 0;
}