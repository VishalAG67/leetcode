class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        vector<char> reversed;
        for(int i=0;i<s.size();i++){
            if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end()){
                reversed.push_back(s[i]);
            }
        }
        reverse(reversed.begin(),reversed.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end()){
                s[i]=reversed[j];
                j++;
            }
        }
        return s;
    }
};