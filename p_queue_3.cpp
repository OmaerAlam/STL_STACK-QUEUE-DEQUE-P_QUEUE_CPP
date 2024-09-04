#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int,vector<int>,greater<int>> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

return 0;
}




