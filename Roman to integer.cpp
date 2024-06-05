/class Solution {
public:

int num(char a){

    if(a=='I')
    return 1;

    else if (a=='V')
    return 5;

    else if(a=='X')
    return 10;

    else if(a=='L')
    return 50;

    else if(a=='C')
    return 100;

    else if(a=='D')
    return 500;

    else  return 1000;

}
    int romanToInt(string s) {
        int sum=0,index=0;
        while(index<s.size()-1){
            
          if(num(s[index])<num(s[index+1]))
        //   This is done so that if any bigger number occurs after any smaller number that means the smaller number needs to get subtracted like IV
            sum-=num(s[index]);

            else
            sum=sum+num(s[index]);
            index++;

        }
       sum+=num(s[index]);

       return sum;

    }
};

// You can do it with sliding window