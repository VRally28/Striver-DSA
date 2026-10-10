void explainqueue(){
    queue<int> q;
    q.push(1); // adding elements to the queue
    q.emplace(2); // adding elements to the queue

    q.back() += 5; // adding 5 to the last element of the queue
    cout << q.back() << endl; // gives the last element of the queue
    q.pop(); // removing elements from the front of the queue
    cout << q.front() << endl; // gives the first element of the queue

    //
}