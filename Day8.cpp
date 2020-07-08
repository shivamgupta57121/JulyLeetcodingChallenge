// Problem: 3Sum
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3384/

// Solution: 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j = i+1, k = n-1;
            while(j<k){
                long long int sum = nums[i]+nums[j]+nums[k];
                if(sum==0) {
                    vector<int> a = {nums[i],nums[j],nums[k]};
                    ans.push_back(a);
                    while(j<k && nums[j+1]==nums[j]) j++;
                    while(j<k && nums[k-1]==nums[k]) k--;
                    j++;
                    k--;
                }
                else if(sum>0) k--;
                else j++;
            }
            while(i<n-2 && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};
