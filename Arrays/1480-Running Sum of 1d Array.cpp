// ven an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
// Example 2:

// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=i;j++){
                sum=sum+nums[j];
            }
            ans.push_back(sum);
            sum=0;
        }
        return ans;
    }
};        //TC = O(N2)  //SC=O(N)


// 2) OPTIMIZED = TC(O(N)
//                   SC=O(1


