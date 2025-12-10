class Solution {
public:
    bool isPowerOfTwo(int n)
    {
  
        if(n<=0) return false;//0%2 = 0 will create a infinite while loop
        //negative values (-1,-2,-4,-8) look like power of 2 but they actually are not considered mathematically
        
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n==1) return true;
        else return false;
        
    }
};
