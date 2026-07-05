/*Problem: Return intersection of sorted arrays*/
/*Approach-> 2 pointer*/
//Code
#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> intersectionSortedArrays(vector<int> a, vector<int> b){
        //Write your code here...
        vector<int>ans;
        int i = 0; int j = 0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
        
    }
};