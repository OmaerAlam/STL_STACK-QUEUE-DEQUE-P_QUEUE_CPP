#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;

    q.push(1);//O(n)
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;

return 0;
}
