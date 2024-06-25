#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        st.push(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i])st.pop();
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i])st.pop();
            if(st.size()==0)ans[i]=-1;
            else ans[i] = st.top();
            st.push(nums[i]);
        }
    return ans;}
};


int main(){

}