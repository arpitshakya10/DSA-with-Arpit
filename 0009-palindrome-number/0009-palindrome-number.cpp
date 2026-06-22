class Solution {
public:
    bool isPalindrome(long long x) {
        int r;
        long long rev=0;
        long long temp=x;
       while(x>0){
        r=x%10;
        rev=rev*10+r;
        x=x/10;}
        if(rev!=temp){
            return false;
        }
        return true;
    }
};