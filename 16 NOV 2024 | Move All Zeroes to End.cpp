    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int cnt = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[cnt++] = arr[i];
            }
        }
        
        // Now add zeros at the end
        while (cnt < n) arr[cnt++] = 0;
    }
