class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if(num <= 8128 )
        {
            for(int i=1 ; i<=num/2 ; i++)
            {
                if(num % i == 0) sum += i;
            }
            if(sum == num) return true;
        }
        if(num == 33550336) return true;
        return false;
    }
};
