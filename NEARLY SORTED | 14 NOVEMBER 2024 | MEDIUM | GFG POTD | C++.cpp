void nearlySorted(vector<int>& arr, int k) {
        // code
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        for (int i = 0; i <= k; i++)
            pq.push(arr[i]);
        
        for (int i = 0; i < n; i++) {
            arr[i] = pq.top();
            pq.pop();
            if (i + k + 1 < n)
                pq.push(arr[i + 1 + k]);
        }
