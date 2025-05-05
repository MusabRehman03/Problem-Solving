class MinStack {
private:
    int pu;

    vector<int> vec ;
public:
    MinStack() {
        pu=-1;

    }
    
    void push(int val) {
        vec.push_back(val);
        pu++;
    }
    
    void pop() {
        vec.erase(vec.begin()+pu);
        pu--;
    }
    
    int top() {
        return vec[pu];
    }
    
    int getMin() {
        stack<int> st;
        st.push(vec[0]);
        for(int i=1;i<vec.size();i++){
            if(vec[i]<st.top()){
                st.push(vec[i]);
            }
        }
        return st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */