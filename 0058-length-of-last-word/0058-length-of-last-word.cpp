class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt =0;
        int i = s.length()-1;
        
        while(i>=0 and s[i]== ' ') i--;
        while(i>=0 and s[i]!= ' '){
            cnt++;
            i--;
        }
        return cnt;
    }
};
