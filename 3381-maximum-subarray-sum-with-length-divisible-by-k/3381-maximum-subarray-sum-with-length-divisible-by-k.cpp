class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> pref(n+1, 0);
        for (int i = 1; i <= n; ++i) pref[i] = pref[i-1] + nums[i-1];

        const long long INF = (1LL<<60);
        vector<long long> minPref(k, INF);
        minPref[0] = 0; // prefix at index 0

        long long ans = LLONG_MIN;
        for (int j = 1; j <= n; ++j) {
            int r = j % k;
            // any earlier index i with same remainder r gives length (j-i) divisible by k
            if (minPref[r] != INF) ans = max(ans, pref[j] - minPref[r]);
            // update the smallest prefix seen for this remainder
            minPref[r] = min(minPref[r], pref[j]);
        }
        return ans;
    }
};
