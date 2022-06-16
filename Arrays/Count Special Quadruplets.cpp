// 1995. Count Special Quadruplets
// Easy

// 293

// 141

// Add to List

// Share
// Given a 0-indexed integer array nums, return the number of distinct quadruplets (a, b, c, d) such that:

// nums[a] + nums[b] + nums[c] == nums[d], and
// a < b < c < d
 

// Example 1:

// Input: nums = [1,2,3,6]
// Output: 1


// Explanation: The only quadruplet that satisfies the requirement is (0, 1, 2, 3) because 1 + 2 + 3 == 6.


CODE
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int i,j,k,l,res=0;
        int n=nums.size();
            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    for(k=j+1;k<n;k++){
                        for(l=k+1;l<nums.size();l++){
                            if(nums[i]+nums[j]+nums[k]==nums[l]){
                                 res++;
                            }
                           
                        }
                        
                    }
                }
            }
        return res;
    }
};
