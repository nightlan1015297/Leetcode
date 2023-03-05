#include "vector"
#include "stdio.h"
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        bool needs_avg = (nums1.size() +nums2.size()+1)%2;
        int mid = (nums1.size() +nums2.size())/2 +1;
        int n = 0;
        int i = -1;
        int j = -1;
        int first = 0;
        int second = 0;
        while (n<mid){
            if (j==nums2.size()-1){
                if ((mid-n)>=2){
                    first = nums1[i+mid-n-1];
                    second = nums1[i+mid-n];
                }else{
                    first = second;
                    second = nums1[i+1];

                }
                break;
            }

            if (i==nums1.size()-1){
                if ((mid-n)>=2){
                    first = nums2[j+mid-n-1];
                    second = nums2[j+mid-n];
                }else{
                    first = second;
                    second = nums2[j+1];


                }
                break;
            }

            if (nums1[i+1]<=nums2[j+1]){
                first = second;
                second = nums1[i+1];
                i++;
            }else{
                first = second;
                second = nums2[j+1];
                j++;
            }
            n++;

        }

        if (needs_avg){
            return (first+second)/2.0;
        }else {
            return second;
        }

    }
};

//
// Created by dim on 2/26/23.
//
