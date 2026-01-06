class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        
        int cnt = 0;
        
        for(int i = 0; i<32; i++)
        {
            if((n & (1 << i)) != 0) cnt++;
            
        }
        
        return cnt;
        
    }
};