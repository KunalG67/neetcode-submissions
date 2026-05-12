class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!= t.size()){

        return false;

     }  

     unordered_map<char , int> frq;

     for(char x : s){

        frq[x]++;

     }

     for(char y:t){

        frq[y]--;

     }

     for(auto x: frq){

        if(x.second!=0){

            return false;

        }

     }

     return true;


    }     
};
