class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
         if (s1.length() != s2.length()) {
        return false;
    }
    
    vector<int> v;
    
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            v.push_back(i);
        }
    }
    
    if (v.size() == 2) {
        return (s1[v[0]] == s2[v[1]] && s1[v[1]] == s2[v[0]]);
    }
    
    return v.empty();
    }
};