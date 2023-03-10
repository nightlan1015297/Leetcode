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
int main() {
    vector<int> a = {1,3,4,5,0};
    Solution().moveZeroes(a);
    for(int i = 0 ; i < a.size();i++){
        cout<<a[i]<<endl;
    }
}
