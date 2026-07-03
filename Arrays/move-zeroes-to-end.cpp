/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]*/
/*Approach->
Brute: initialize temp array, with 0, fill it with non zero elements of array. then copy to original array...
Optimal: two pointer approach.*/
// Code->
#include <bits/stdc++.h>
using namespace std;
void movezeroes(vector<int> &nums, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i; // first zero
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    movezeroes(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}