class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        bool flag = false;//assuming that last word is not found yet
        int count = 0;//for counting length of the last word

        for(int i=s.length()-1 ; i>=0 ; i--)
        {
            if(s[i]!=' ')
            {
                ++count;
                flag = true;//last word is found
            }
            else if(s[i]==' ' && flag==true)
                break;
        }
        return count;
    }
};
