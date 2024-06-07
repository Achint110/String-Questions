class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Brute force 
        // Find all strings and then find the longest non repeating character substring
        // Here TC=O(n)^3



        // Optimized approach O(n) =tc
        vector<bool>count(256,0);
        // We have taken 256 size because string can contain any character

        int first=0,second=0,length=0;
        // First ->Start of window
        // Second -> End of window
        // length-> length of window
           
           while(second<s.size()){
// Second string ke end tak bhadega

          if(count[s[second]])    //Shows repeating character
             {
                count[s[first]]=0;
                first++;
             }  
            else{
             count[s[second]]=1;
              
              length=max(length,second-first+1);
            second++;
            }

           }
        return length;

  
    }
};