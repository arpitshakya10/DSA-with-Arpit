class Solution {
public:
    // function to check prime
    bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }

    // function to count set bits
    int countBits(int n){
        int count = 0;
        while(n > 0){
            count += (n % 2);  // if last bit 1 -> +1
            n = n / 2;        // divide by 2
        }
        return count;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left; i <= right; i++){
            int bits = countBits(i);   // count 1's
            if(isPrime(bits))          // check prime
                ans++;
        }

        return ans;
    }
};