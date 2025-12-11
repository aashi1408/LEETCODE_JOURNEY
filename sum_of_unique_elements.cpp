class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();

        int mx = 0;
        for(int x:nums) mx = max(mx,x);
        vector<int> check(mx+1,0);//assigns default value 0
        /* n=5 and arr[] = {9,3,7,2,4} then what about 7 and 9 
        it will trash
        as check ko tum size nums ka deri ho 
        then check[9] and check[7] doesn't exist 
        so find max 
        then add 1 as indexing starts from 0 
        and 0 index kisi kaam ka ni
        so +1 
        i.e., mx+1 size given to check*/
        int sum = 0;

        for(int i=0 ; i<n ; i++)
        {
            check[nums[i]]++;
        }
        
        for(int j=0 ; j<n ; j++)
        {
            if(check[nums[j]]==1)
            {
                sum+=nums[j];
            }
        }
        return sum;
    }
};
