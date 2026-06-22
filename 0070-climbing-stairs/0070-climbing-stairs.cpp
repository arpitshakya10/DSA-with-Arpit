class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;           // base cases
        int a = 1, b = 2;              // a = f(1), b = f(2)
        for (int i = 3; i <= n; ++i) {
            int c = a + b;             // f(i) = f(i-1) + f(i-2)
            a = b; b = c;
        }
        return b;
    }
};