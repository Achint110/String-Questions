 class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int >ans(1,1);
        
         while(N>1){
              int carry=0,result,size=ans.size();
              for(int i=0;i<size;i++){
                  result=ans[i]*N+carry;
                  carry=result/10;
                  ans[i]=result%10;
              }
              
            //   This is mainly used to increase tthe size of ans vector by adding the carry
              while(carry){
                  ans.push_back(carry%10);
                  carry/=10;
              }
              N--;
             
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};