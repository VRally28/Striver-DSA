void explainpriorityqueue(){
    priority_queue<int> pq; /*max heap, it means maximum element stays at the top*/ 
    pq.push(1); // adding elements to the priority queue, {1}
    pq.emplace(2); // adding elements to the priority queue, {2, 1}
    pq.push(4); // adding elements to the priority queue, {4, 2, 1}

    cout << pq.top() << endl; // gives the top element of the priority queue, 4
    pq.pop(); // removing the top element of the priority queue, {2, 1}

    priority_queue<int, vector<int>, greater<int>> pq1; /*min heap, it means minimum element stays at the top*/
    /*same operations but min element is prioritized*/
}