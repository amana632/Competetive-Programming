class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=num;i++){
        int m=floor(log2(i));
           // cout<<m;
        dp[i]=1+dp[i-pow(2,m)];
        }
        return dp;
    }
};