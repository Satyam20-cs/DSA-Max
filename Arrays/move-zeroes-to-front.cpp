/*Problem : Move zeroes to front while maintaining order.*/
/*Approach->
start at n-1 index(j) and i at n-1 as well. now copy non zero elements to end. then initialize zero the rest of space.
*/
//Code
#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        //Write your code here...
        int j = n-1;
        for(int i = n-1; i>=0; i--){
            if(arr[i]!=0){
                arr[j] = arr[i];
                j--;
            }
        }
        while(j>=0){
            arr[j] = 0;
            j--;
        }
        
    }
};