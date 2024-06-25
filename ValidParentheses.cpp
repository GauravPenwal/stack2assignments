#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)return false;
        stack<char>st;
        int n =s.length();
        for(int i=0;i<n;i++){
           if(s[i]=='(' || s[i]=='[' || s[i]=='{')st.push(s[i]);
           else {
            if(st.empty() || (st.top()=='(' && s[i]!=')')) return false;
            else if(st.empty() || (st.top()=='[' && s[i]!=']')) return false;
            else if(st.empty() || (st.top()=='{' && s[i]!='}')) return false;
            else st.pop();
           }
        }
    if(st.size()==0) return true;
    else return false;}
};
int main(){

}