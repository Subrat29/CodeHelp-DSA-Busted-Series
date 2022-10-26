class Solution {
    private:
    bool checkEqual(int a[26], int b[26])
    {
        for(int i=0; i<26; i++)
        {
            if(a[i] != b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        //count characters
        int count1[26] = {0};
        for(int i=0; i<s1.length(); i++)
        {
        int index = s1[i]- 'a';
        count1[index]++;
        }
        
        //running for first window
        int count2[26] = {0};
        int windowSize = s1.length();
        int i=0;
        while(i<windowSize && i<s2.length())
        {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
        }
        
        if(checkEqual(count1, count2))
            return 1;
        
        //Aage window process kro
        while(i<s2.length())
        {
        //add new char in window
        int index = s2[i] - 'a';
        count2[index]++;
            
        //remove old char in window
        index = s2[i-s1.length()] - 'a';
        count2[index]--;
        i++; 

        if(checkEqual(count1, count2))
        return 1;
    }
        return 0;      
    }
};
