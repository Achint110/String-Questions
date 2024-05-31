class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);

        for(int i=0;i<sentence.size();i++){
           
           alpha[sentence[i]-'a']=1;
        //    sentence[i] --> value/character in the string sentence 
        // sentence[i] se 'a' minus karenge toh alpha ki voh location me pohoch jayenge jahan par sentence[i]chatacter stored hai aur usko 1 kardenge
        
        }
             
             for(int i=0;i<26;i++){
                if(alpha[i]==0)
                return false;
             }
return true;
    }
};