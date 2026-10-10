void explainmultiset(){
    multiset<int> ms; // multiset of integers
    ms.insert(1); // adding elements to the multiset
    ms.insert(1); // adding elements to the multiset, duplicate elements are allowed in multiset
    ms.insert(1);
    ms.erase(1); // removing all the elements of 1 from the multiset

    int cnt = ms.count(1); // gives the count of 1 in the multiset

    ms.erase(ms.find(1)); // removing only one element of 1 from the multiset using iterator'
    ms.erase(ms.find(1), ms.find(1)+2); // removing two elements of 1 from the multiset using iterator
}