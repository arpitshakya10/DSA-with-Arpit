class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        int ans = 0;

        vector<int> mod1, mod2;

        // ----- simple for loop -----
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (nums[i] % 3 == 1) 
                mod1.push_back(nums[i]);
            else if (nums[i] % 3 == 2) 
                mod2.push_back(nums[i]);
        }

        if (sum % 3 == 0) return sum;

        sort(mod1.begin(), mod1.end());
        sort(mod2.begin(), mod2.end());

        int rem = sum % 3;
        int best = 0;

        // ----- your original logic: try removing 1 element -----
        for (int i = 0; i < nums.size(); i++) {
            int x = sum - nums[i];
            if (x % 3 == 0) best = max(best, x);
        }

        // ----- edge cases: removing 2 elements -----
        if (rem == 1) {
            // remove 1 mod1
            if (mod1.size() >= 1)
                best = max(best, sum - mod1[0]);

            // remove 2 mod2
            if (mod2.size() >= 2)
                best = max(best, sum - (mod2[0] + mod2[1]));
        }
        else { // rem == 2
            // remove 1 mod2
            if (mod2.size() >= 1)
                best = max(best, sum - mod2[0]);

            // remove 2 mod1
            if (mod1.size() >= 2)
                best = max(best, sum - (mod1[0] + mod1[1]));
        }

        return best;
    }
};
