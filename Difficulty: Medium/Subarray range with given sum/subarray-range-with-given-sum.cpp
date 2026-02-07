class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        //  code here
        
        int n = arr.size();
        
        int cs = 0, res = 0;
        
        unordered_map<int, int> mp;
        
        mp[0] = 1;
        
        for(int i = 0; i<n; i++)
        {
            cs += arr[i];
            
            if(mp.find(cs - tar) != mp.end())
            {
                res+= mp[cs-tar];
            }
            mp[cs]++;
        }
        
        return res;
    }
};