class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
        int n = arr.size();
        
        if(n < 2) return {};
        
        sort(arr.begin(), arr.end());
        
        int i = 0, j = n-1 ;
        int num = 0, num2 = 0;
        int dif = INT_MAX;
        
        while(i < j) 
        {
            int sum = arr[i] + arr[j];
            int currdif = abs(target-sum);
            
            if(currdif < dif)
            {
                dif = currdif;
                num = arr[i];
                num2 = arr[j];
            }
            if(sum > target) j--;
        else i++;
            
        }
        return {num,num2};
        
    }
    
    
};