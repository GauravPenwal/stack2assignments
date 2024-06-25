#include<iostream>
#include<stack>
#include<vector>
using namespace std;

 //Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
         vector<int>v;
        stack<int>s;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        s.push(0);
        for(int i=v.size()-1;i>=0;i--){
           int a=v[i];
              while(s.top()!=0&&v[i]>=s.top()){
                s.pop();
              }
              v[i]=s.top();
              s.push(a);
        }
return v;
    }
};

int main(){

}