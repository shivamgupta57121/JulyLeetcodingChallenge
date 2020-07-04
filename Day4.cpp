// Problem: Ugly Number II
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3380/

// Solution: 
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0) return 0;
        else if(n==1) return 1;
        
        int two=0, three=0, five=0;
        vector<int> ugly(n); 
        ugly[0]=1;
        int cur = 1;
        while(cur<n){
            ugly[cur] = min(2*ugly[two],min(3*ugly[three],5*ugly[five]));
            if(ugly[cur]==2*ugly[two]) two++;
            if(ugly[cur]==3*ugly[three]) three++;
            if(ugly[cur]==5*ugly[five]) five++;
            cur++;
        }
        //for(int i=0;i<n;i++) cout<<ugly[i];
        return ugly[n-1];
    }
};
