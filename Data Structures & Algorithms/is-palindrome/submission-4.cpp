class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c: s){
            c = tolower(c);
        }
       string k;
       for(char x: s){
        if((x>='a'&&x<='z') || (x>='0' &&x<='9')){
            k.push_back(x);
        }
       }
       int it=0;
       int j=k.size()-1;
       while(it<j){
        if(k[it]!=k[j]) return false;
        j--;
       it++;
       }
        return true;
    }
};
