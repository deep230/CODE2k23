class Solution {
public:
    long long minimumSteps(string s) {
        long long ans =0,cnt =0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') ans++;
            else cnt+=ans;
        }
        return cnt;
    }
};