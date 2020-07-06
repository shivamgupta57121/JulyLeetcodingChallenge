// Problem: Hamming Distance
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3381/

// Solution: 


// Method 1: 
class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x^y, count=0;
        while(ans){
            count += ans&1;
            ans = ans>>1;
        }
        return count;
    }
};

// Method 2: Using Built in function to count set bits (One liner Solution)
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
    }
};
