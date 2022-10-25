#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int count[26] = {0};
        int l = str.length();
        
        for(int i=0; i<l; i++)
        {
            char ch = str[i];
            int index = 0;
            //lowercase
            if(ch >= 'a' && ch <= 'z')
            index = ch - 'a';
           
            //uppercase
           // else
           // char ch = ch - 'A';
            
            count[index]++;
        }
        
        int max = 0, ans = 0;
        for(int i=0; i<26; i++)
        {
            if (max < count[i])
            {
                max = count[i];
                ans = i;
            }
        }
        z
        return ans + 'a';
        
    }

};

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
