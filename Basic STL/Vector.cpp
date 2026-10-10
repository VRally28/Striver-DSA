void explainvector(){
    vector<int> v; // vector of integers
    v.push_back(1); // adding elements to the vector
    v.push_back(2);
    v.emplace_back(3); // adding elements to the vector better than push_back faster than push_back

    vector<pair<int,int>> vec; // vector of pairs
    vec.push_back({1,2}); // adding pairs to the vector we have to give curly braces to show it that it is a pair.
    vec.emplace_back(3,4); // automatically assumes that it is a pair so we don't have to give curly braces.

    vector<int> v1(5, 100); // vector of size 5 and all elements are 100
    vector<int> v2(5); // vector of size 5 and all elements are 0
    vector<int> v3(5, 20);
    vector<int> v4(v3);// creates a copy of v3 with same values 5 instances of 20
    cout << v[0] << endl;
}