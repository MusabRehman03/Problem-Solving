#include <string.h>
#include <vector>
#include <iostream>
using namespace std;    


int main() {
        string s = "  hello world  ";
        vector<string>vec;
        string temp="";
        string ans="";
        
        for(int i=0;i<s.length();i++){
        
            if(s[i] == ' '){
                if(temp!=""){
                vec.push_back(temp);
                temp = "" ;
                }
            }else {
                temp+=s[i];
        }
        
        }
        if(temp!=""){
            vec.push_back(temp);
       
        
    }
     for(int i=vec.size()-1;i>=0;i--){
            ans+=vec[i];
            if(i!=0&&vec[i]!=""&&vec[i]!=" "){
                ans+=" ";
            }
        }
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<endl;
        }

        cout<<ans;
    // return ans;
    }
