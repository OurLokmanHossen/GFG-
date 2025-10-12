// User function teamplate for C++

class Solution {
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        // code here
        
        
        
        int l = 0, r = m-1;
        
        int num = 0, num2 = 0;
        
        int dif = INT_MAX;
        
        while(l < n && r >= 0) 
        {
            int sum = arr[l] + brr[r];
            
            int currd = abs(sum - x);
            
            if(currd < dif) 
            {
                dif = currd;
                num = arr[l];
                num2 = brr[r];
            }
            
            if(sum > x) r--;
            else l++;
            
        }
        
        return {num, num2};
        
        
        
    }
};