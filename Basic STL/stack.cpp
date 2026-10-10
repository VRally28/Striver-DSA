void explainstack(){
    stack<int> st; 
    st.push(1); // adding elements to the stack
    st.emplace(2); // adding elements to the stack
    st.pop(); // removing elements from top of the stack

    st.top(); // gives the top element of the stack
    st.size(); // gives the size of the stack
    st.empty(); // returns true if stack is empty and false if stack is not empty

    stack<int> st1, st2; // creating two stacks
    st1.swap(st2); // swapping the elements of two stacks
}