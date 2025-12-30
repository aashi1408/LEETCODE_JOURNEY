class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int n = arr.size();
        for(int i=1 ; i<n ; i++)
        {
            for(int j=i ; j>0 ; j--)
            {
                if(arr[j]>arr[j-1])
                {
                    swap(arr[j],arr[j-1]);
                }
                else break;
            }
        }
        //using insertion sort now the array is sorted
        int diff = arr[1] - arr[0];
        bool flag = true;//assuming it's an AP
        for(int i=1 ; i<n ; i++)
        {
            if(arr[i]-arr[i-1]!=diff)//means common diff is not common now
            {
            flag = false;//and diff now became uncommon so it's not AP
            break;
            }
        }
        if(flag) return true;
        else return false;
        
    }
};
