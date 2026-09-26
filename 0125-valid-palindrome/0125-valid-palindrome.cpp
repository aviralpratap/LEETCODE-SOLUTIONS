class Solution {
public:
    bool isPalindrome(string &s,int i,int j) {
        if(i>=j){
            return true;
        }
        if(!isalnum(s[i])){
            return isPalindrome(s,i+1,j);
        }
        if(!isalnum(s[j])){
            return isPalindrome(s,i,j-1);
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        return isPalindrome(s,i+1,j-1);
    }

    bool isPalindrome(string s) {
        return isPalindrome(s,0,s.size()-1);
    }
};