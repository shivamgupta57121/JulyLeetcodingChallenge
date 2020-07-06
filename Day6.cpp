// Problem: Plus One
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3382/

// Solution: 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1;i>=0;){
            digits[i]+=1;
            if(digits[i]>9) {
                digits[i]=0;
                i--;
            }
            else return digits;
        }
        if(digits[0]==0) digits.insert(digits.begin(),1);
        return digits;
    }
};
