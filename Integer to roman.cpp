class Solution {
public:
    string intToRoman(int num) {
        string ans="";
          int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
          string symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
           
           for(int i=0;num!=0;i++){
             
             while(num>=val[i]){
            //   Eg - value 2050 hai to jabtak value 2000 ke neeche nahi hjayegi tabtak 100o minus hota rahega
              num-=val[i];

            //   is step me jo bhi number minus hoga uska corresponding roman  value  string (ans)  ma add ho jayega
              ans=ans+symbol[i];

             }

           }

return ans;
    }
};