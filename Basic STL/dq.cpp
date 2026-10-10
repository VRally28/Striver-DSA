void explaindeque(){
    deque<int> dq;
    dq.push_back(1); // adding elements to the deque
    dq.emplace_back(2); // adding elements to the deque
    dq.push_front(3); // adding elements to the deque at the front  

    dq.pop_back(); // removing elements from the deque
    dq.pop_front(); // removing elements from the deque at the front

    dq.back(); // gives the last element of the deque
    dq.front(); // gives the first element of the deque

    dq.size(); // gives the size of the deque

    /*rest of the functions are same as vector. we can use most of the functions of vector in deque also. but the difference
     is that deque is a double ended queue and vector is a dynamic array.*/
}