#include <iostream>
#include "vector"
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool initialized = false;
        int ptr = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0){
                if (!initialized){
                    initialized = !initialized;
                    ptr = i;
                }else{
                    continue;
                }
            }else{
                if (!initialized){
                    continue;
                }else{
                    nums[ptr] ^= nums[i];
                    nums[i] ^= nums[ptr];
                    nums[ptr] ^= nums[i];
                    ptr++;
                }

            }
        }
    }
};
//
// Created by dim on 2/28/23.
//
