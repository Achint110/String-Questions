class Solution
{
    public:
    
    
    void rotateclockwise (string &s){
        
        char c=s[s.size()-1];
        
        int index=s.size()-2;
        
        while(index>=0){
            
            s[index+1]=s[index];
            
            index--;
        }
        s[0]=c;
        
    }
    
    void rotateanticlockwise (string &s){
        
        char c=s[0];
        
        int index=1;
        
        while(index<s.size()){
            
            s[index-1]=s[index];
            
            index++;
        }
        s[s.size()-1]=c;
        
    }
    
      bool isRotated(string str1, string str2)
    {
        // Your code here
        string clockwise,anticlockwise;
          
          clockwise=str1;
          
          rotateclockwise(clockwise);
          rotateclockwise(clockwise);
          
          if(clockwise==str2)
          return 1;
          
          anticlockwise=str1;
          
          rotateanticlockwise(anticlockwise);
          rotateanticlockwise(anticlockwise);
          
          if(anticlockwise==str2)
          return 1;
          
          return 0;
          
        
    }
