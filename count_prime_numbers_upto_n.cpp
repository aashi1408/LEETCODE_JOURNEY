class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        int count = 1;//2 is prime
        for(int i=3 ; i<n ; i+=2)
        {
            bool prime = true;

            for(int j=3 ; j*j <= i ; j+=2)
            {
                if(i%j == 0 )
                {
                    prime = false;
                    break;
                }
            }
            if(prime) count ++;
        }
        return count;
    }
};
