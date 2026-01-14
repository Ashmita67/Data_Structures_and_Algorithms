class Solution {
public:
    bool isPowerOfTwo(int n) {
        double t=log2(n);
        if(n==0)
            return false;
        if(floor(t)==t)
            return true;
        else
            return false;        
    }
};