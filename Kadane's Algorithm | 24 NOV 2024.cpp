    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n = arr.size();
        long long cur = arr[0];
        long long ans = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            if (cur < 0) cur = arr[i];
            else cur += arr[i];
            ans = max(ans, cur);
        }
        
        return ans;
    }
