//https://leetcode.com/problems/count-good-numbers/

class Solution {
public:
    long long power(long long N,long long R)
    {
        if(R==0)
            return 1;
        if(R==1)
            return (N%1000000007);
        long long ans=1;
        long long know= power(N,R/2)%1000000007;
        if(R%2)
            ans=(ans*N)%1000000007;
       return (ans*((know*know)%1000000007))%1000000007;
    }
    
    int countGoodNumbers(long long n) 
    {
        long long ans=power(20,n/2);
        if(n%2==1) {
            ans=(ans*5)%1000000007;
        }
        return ans;
    }
};
