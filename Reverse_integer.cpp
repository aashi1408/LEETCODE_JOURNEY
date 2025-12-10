class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while(x!=0)
        {
            int ld = x%10;
            rev*=10;
            rev+=ld;

        if(rev>INT_MAX || rev<INT_MIN) return 0;//without this check ,
        //rev will overflow and give invalid/garbage values
        //so, this prevents 32-bit overflow -> return 0 as required.

            x/=10;
        }
        return rev;
        
    }
};
