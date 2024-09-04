#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int> q;

    q.push(1);//log2(n)
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.top()<<endl;
    q.pop();

    cout<<q.top()<<endl;

return 0;
}


