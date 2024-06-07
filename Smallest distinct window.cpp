class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here  
        vector<int>count(256,0);
        int first=0,second=0,length=str.size();
        int diff=0;
        
        // calculate all unique character to get diff value
        while(first<str.size()){
            if(count[str[first]]==0)
            diff++;
            
            count[str[first]]++;
            first++;
            
        }
        // again making the array zero
        for(int i=0;i<256;i++)
        count[i]=0;
        
        first=0;
        
        while(second<str.size()){
             
             while(diff  && second <str.size()){
                 if(count[str[second]]==0)
                 diff--;
                 
                 count[str[second]]++;
                 second++;
             }
             length=min(length,second-first);
             
             
             while(diff!=1){
                 
                 length=min(length,second-first);
                 count[str[first]]--;
                 
                 
                 if(count[str[first]]==0)
                 diff++;
                 
                 first++;
             }
             
             
        }
        return length;
        
    }
};