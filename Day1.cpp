// Problem: Arranging Coins
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/

// Solution: 

class Solution {
public:
    int arrangeCoins(int n) {
        int start = 0, end = n, ans;
        while(start<=end){
            long long mid = (start + end)/2;
            if(mid*(mid+1)==(long long int)2*n) return mid;
            else if(mid*(mid+1)>(long long int)2*n) end = mid-1;
            else {
                ans = mid;
                start = mid +1;
            }
        }
        return ans;
    }
};
