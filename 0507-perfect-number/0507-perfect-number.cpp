class Solution {
public:
    bool checkPerfectNumber(long long num) {
        long long sum;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                sum+=i;
            }
            }
            if(sum==num){
                return true;
        }
        return false; }
};