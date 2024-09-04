#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;

    st.push(1);//O(n)
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.size()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

return 0;
}


