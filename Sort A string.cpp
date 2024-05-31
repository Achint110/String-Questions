string sort(string s){
    //complete the function here
    
    // Method 1
    // sort(s.begin(),s.end());
    // return s;
    // We can also use any other sorting technique
     
    vector<int>alpha(26,0);
    
    for(int i=0;i<s.size();i++){
         
         int index=s[i]-'a';
         
         alpha[index ]++;
         
        //  Or do directly
        // alpha[s[i]-'a']++;
        
    }
    
    string ans;
    
    for(int i=0;i<26;i++){
        
         char c=i+'a';     
        //  Now it will become desired character
        
    // Eg 0+'a'=a
    //   1+'a'=b
    while(alpha[i]--){
        ans+=c;
    }
    
        
    }
    
    return ans;
    
}