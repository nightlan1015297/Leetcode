#include <iostream>
#include "vector"
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k>=nums.size()){
            k%=nums.size();
        }
        rev(nums,0,nums.size()-k-1);
        rev(nums,nums.size()-k,nums.size()-1);
        rev(nums,0,nums.size()-1);
    }

    void rev(vector<int>& arr,int start,int end)
    {
        while (start<end){
            arr[start] = arr[start]^arr[end];
            arr[end] = arr[start]^arr[end];
            arr[start] = arr[start]^arr[end];
            start++;
            end--;
        }

    }
};
//
// Created by dim on 2/28/23.
//
