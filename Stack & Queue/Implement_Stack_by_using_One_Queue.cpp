#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;
public:

    void push(int x){
        int s = q.size();
        q.push(x);

        for(int i = 0; i<s; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if(q.empty()){
            return;
        }

        q.pop();
    }

    int top(){
        if(q.empty()){
            return -1;
        }

        return q.front();
    }

};

int main()
{
    Stack st;

    st.push(10);
    st.push(15);
    st.push(20);
    st.push(245);

    st.pop();


    cout<<st.top()<<endl;


	return 0;
}

