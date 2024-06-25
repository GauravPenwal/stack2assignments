#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n= prices.size();
        vector<int> output(n);
        stack<int>st;
        for(int i = prices.size()-1;i>=0;i--){
            while(!st.empty()&&prices[i]<st.top()){
                st.pop();
            }
            if(st.empty()) output[i] = prices[i];
            else output[i] = prices[i] - st.top();
            st.push(prices[i]);
        }
        return output;
        
    }
};

int main(){

}