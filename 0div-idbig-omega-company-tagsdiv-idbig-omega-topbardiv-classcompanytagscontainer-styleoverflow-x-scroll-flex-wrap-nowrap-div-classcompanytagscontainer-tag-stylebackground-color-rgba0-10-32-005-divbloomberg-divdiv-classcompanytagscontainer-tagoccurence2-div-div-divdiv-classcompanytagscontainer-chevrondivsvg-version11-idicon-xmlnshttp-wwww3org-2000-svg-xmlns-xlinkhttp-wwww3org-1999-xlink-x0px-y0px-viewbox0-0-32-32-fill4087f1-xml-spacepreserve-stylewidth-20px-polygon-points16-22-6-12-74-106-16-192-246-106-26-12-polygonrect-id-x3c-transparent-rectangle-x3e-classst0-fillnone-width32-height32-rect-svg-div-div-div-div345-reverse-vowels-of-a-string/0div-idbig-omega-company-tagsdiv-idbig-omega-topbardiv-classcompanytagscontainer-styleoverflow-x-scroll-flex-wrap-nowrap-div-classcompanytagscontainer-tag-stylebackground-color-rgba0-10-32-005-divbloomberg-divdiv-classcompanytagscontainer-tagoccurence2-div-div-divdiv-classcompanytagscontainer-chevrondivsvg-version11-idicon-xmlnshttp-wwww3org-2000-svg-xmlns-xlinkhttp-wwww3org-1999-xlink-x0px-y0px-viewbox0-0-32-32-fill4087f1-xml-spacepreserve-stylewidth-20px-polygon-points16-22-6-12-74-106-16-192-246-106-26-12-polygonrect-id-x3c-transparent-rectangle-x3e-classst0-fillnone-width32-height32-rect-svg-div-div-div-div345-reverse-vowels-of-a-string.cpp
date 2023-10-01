class Solution {
public:
    
    bool isVowel(char c){
     return( c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u' || c=='A' || c== 'E' || c== 'I' || c== 'O' || c=='U' );
  }
    string reverseVowels(string s) {
        
        int i = 0, j = s.size()-1;
        while(i<j){
          while(i<j and !isVowel(s[i])){
               i++;
          }
          while(i<j and !isVowel(s[j])){
              j--;
          }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
