class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0) return 1;
        /*binary of 0 is 0 
        complement of 0 is 1 decimal->1
        special case: when n=0 , binary representation would be empty.
        and calling complement of 0 is 1
        Handle n=0 separately to avoid stoi on empty string*/
        int temp = n;
        // int bin_rev = 0;
        string binary = "";
        while(temp!=0)
        {
            // int bin_dg = temp%2;
            // bin_rev*=10;
            // bin_rev+=bin_dg;
            int bin_dg = temp%2;
            binary = char('0'+bin_dg)+binary;
            /* i=1 "1"
               i=2 "0"+"1"
               i=3 "1"+"01"
               so no need of reversing binary*/
            temp/=2;//
        }
        // string binary = string(bin_rev);//don't repeat that mistake
        for(int i=0 ; i<binary.length() ; i++)
        {
           binary[i] = (binary[i]=='1')? '0':'1';//
        }
        // int ans = bin_rev;
        int ans = stoi(binary,nullptr,2);

        return ans;
    }
};
