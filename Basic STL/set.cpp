void explainset(){
    /*set stores everything in sorted order and each element is unique*/
    set<int> st; // set of integers
    st.insert(1); // adding elements to the set
    st.emplace(2); // adding elements to the set
    st.insert(2); // adding elements to the set, but it will not be added because 2 is already present in the set

    /* very imp - push does not work in set*/

    auto it = st.find(1); /* it will return the address of 1 if 1 is present in the set otherwise it will return the address of 
                             next element of 1 */\
    auto it = st.find(3);/* t will return the address of 3 if 3 is present in the set otherwise it will return the address of 
                             next element off last element of set, or we can say it reverts st.end() */
    st.erase(2); // removing elements from the set

    auto it = st.find(2);
    st.erase(it); // removing elements from the set using iterator

    auto it = st.lower_bound(2);
    st.insert(3);
    auto it = st.upper_bound(3);
}   