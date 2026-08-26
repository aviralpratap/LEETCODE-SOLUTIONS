class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int minimum=INT_MAX;
        for(int i=0;i<s.length();i++){
            int count=0;
            for(int j=i;j<s.length();j++){
                if(s[j]=='1'){
                    count++;
                }
                if(count==k){
                    string temp=s.substr(i,j-i+1);
                    if(temp.length()<minimum){
                        minimum=temp.length();
                        ans=temp;
                    }
                    else if(temp.length()==minimum && temp<ans){
                        ans=temp;
                    }
                }
                
            }
            

        }
        return ans;
        
    }
};