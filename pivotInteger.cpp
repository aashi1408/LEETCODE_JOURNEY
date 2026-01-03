class Solution {
public:
    int pivotInteger(int n) 
    {
        //to find that whether the sum of 1 to x (inclusive) is 
        //equals to sum of x to n(inclusive) or not?

        for(int i=1 ; i<=n ; i++)
        {
            int terms = n - i + 1 ;
            if(((i*(i+1))/2 == terms*(n+i)/2))
            //checking whether the cdn fulfills or not
            {
                return i;
            }
        }
        return -1;
    }
};
