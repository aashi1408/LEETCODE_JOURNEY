class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;
        if(x==0) return true;

        string s = to_string(x);//
        string ans;//+
        ans.resize(s.length());//

        int j=0;//to iterate j as indices of j

        for(int i=s.length()-1 ; i>=0 ; i--)
        {
            ans[j] = s[i];//reversing
            j++;
        }    
        // s == ans ? return true : return false;//bilkul galat
        return s==ans;//
    }
};
