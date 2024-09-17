class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       unordered_map<string, int> wordCount;
    stringstream ss(s1 + " " + s2);
    string word;
    
    // Count the frequency of each word
    while (ss >> word) {
        wordCount[word]++;
    }
    
    vector<string> result;
    // Add words that appear only once to the result
    for (auto &entry : wordCount) {
        if (entry.second == 1) {
            result.push_back(entry.first);
        }
    }
    
    return result;
}

};