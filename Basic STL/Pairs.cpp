void explainpair(){
    /* Pair is a container that holds two values of different data types. It is defined in the <utility> header file. The pair class is a part of the Standard Template 
    Library (STL) in C++. It is used to store a tuple. The pair class has two public data members, first and second, which hold the first and second values of the pair, 
    respectively.*/
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // Output: 1 3

    pair<int, pair<int,int>> p1 = {1, {3,4}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl; // Output: 1 4 3

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};// containing multtiple pairs
    cout << arr[1].second << endl; // Output: 5
}
