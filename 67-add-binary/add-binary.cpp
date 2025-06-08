class Solution {
public:
    string addBinary(string a, string b) {
       
        if(b.size()>a.size())
        swap(a,b);

        while(b.size()<a.size())
        b = "0" + b;
        int carry = 0;
        string ans = "";
        for(int i=b.size()-1;i>=0;i--){
            if(a[i]=='1' && b[i]=='1'){
                ans = (carry==0? "0":"1") + ans;
                carry = 1;
            }
            if(a[i]=='0' && b[i]=='0'){
                ans = (carry==0? "0":"1") + ans;
                carry = 0;
            }
            else if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1'){
                ans = (carry==0? "1":"0") + ans;
              
            }
        }
        if(carry == 1) ans = "1" + ans;
        return ans;
    }
};