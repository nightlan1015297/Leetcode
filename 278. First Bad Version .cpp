// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L = 0;
        int R = n;
        while (R-L>=0){
            int mid = L + (R-L)/2;
            if (isBadVersion(mid)){
                R = mid-1;
            }else{
                L = mid+1;
            }
        }
        return R+1;
    }
};

//
// Created by dim on 2/25/23.
//