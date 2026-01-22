class Solution {
public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();

        int prefix = 0, t_sum = 0;

        for (int i = 0; i < n; i++) {
            t_sum += arr[i];
        }

        for (int i = 0; i < n; i++) {
            prefix += arr[i];
            int ans = t_sum - prefix;

            if (ans == prefix)
                return true;
        }

        return false;
    }
};
