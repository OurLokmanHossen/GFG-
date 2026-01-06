class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        
        // int ans = n >> k;
        // if((ans & 1) != 0) return true;
        // else return false;
        
        int ans = 1 << k;
        if((n & ans) != 0) return true;
        else return false;
        
        
        
    }
};