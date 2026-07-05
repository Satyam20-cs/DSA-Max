/*Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.

NOTE: Elements in the union should be in ascending order
*/
/*Approach->
Brute: Use set and insert elements of both vectors
Optimal: Two pointers*/
//Code->
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> unionOfTwoSortedArrays(vector<int> arr1, vector<int> arr2) {
        int i = 0, j = 0;
        vector<int> ans;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] <= arr2[j]) {
                if (ans.empty() || arr1[i] != ans.back())
                    ans.push_back(arr1[i]);
                i++;
            } else {
                if (ans.empty() || arr2[j] != ans.back())
                    ans.push_back(arr2[j]);
                j++;
            }
        }

        while (j < arr2.size()) {
            if (ans.empty() || arr2[j] != ans.back())
                ans.push_back(arr2[j]);
            j++;
        }

        while (i < arr1.size()) {
            if (ans.empty() || arr1[i] != ans.back())
                ans.push_back(arr1[i]);
            i++;
        }

        return ans;
    }
};