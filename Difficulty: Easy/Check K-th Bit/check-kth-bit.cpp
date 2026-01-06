class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        
        int ans = n >> k;
        if((ans & 1) != 0) return true;
        else return false;
        
        
        
    }
};