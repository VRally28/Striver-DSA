void explainlist(){
    list<int> ls; // list of integers
    ls.push_back(1); // adding elements to the list {1}
    ls.emplace_back(2); // {1,2}
    ls.push_front(3); // adding elements to the list at the front {3,1,2} also better than vector insertion at front is O(1) in list and O(n) in vector
    ls.emplace_front(); {4,5}; // adding elements to the list at the front {4,5,3,1,2}

    /*rest of the functions are same as vector. we can use all the functions of vector in list also. but the difference is
     that list is a doubly linked list and vector is a dynamic array. so the time complexity of insertion and deletion in 
     list is O(1) and in vector is O(n). so if we have to do a lot of insertion and deletion then we should use list instead
     of vector.*/
