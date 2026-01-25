// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        
        int n = a.size();
        
        int currS = 0, minS = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            currS += a[i];
            minS= min(currS, minS);
            
            if(currS > 0)
            {
                currS = 0;
            }
        }
        return minS;
    }
};
