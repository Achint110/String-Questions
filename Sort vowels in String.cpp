class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
         

        //  Storing vowels in lower and upper named string
         for(int i=0;i<s.size();i++){
 
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
          lower[s[i]-'a']++;
           s[i]='#';
           }
               else if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
               s[i]='#';
               }
         }
// Making ans string
         string ans;
// Entering all the vowels in the answer string in sorted manner 
         for(int i=0;i<26;i++){
         char c=i+'A';
        //  This ensure counting of same vowel occuring multiple time
          while(upper[i]){
            ans+=c;
             upper[i]--;
          }

         }

 for(int i=0;i<26;i++){
         char c=i+'a';
          while(lower[i]){
ans+=c;
      lower[i]--; 
    } 
 }
   

int vowel=0,normalstring=0;

while(vowel<ans.size() ){
       
    if(s[normalstring]=='#'){
        s[normalstring]=ans[vowel];
          vowel++;
    }
    normalstring++;

}
return s;

    }
};