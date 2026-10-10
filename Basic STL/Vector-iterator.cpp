vector<int>::iterator it = v.begin(); // v.begin() gives address of the first element or the zeroth element of vector array
it++
cout << *(it) << endl; //it is pointing towards address so *it will give value
it = it+2;
cout << *(it) << endl;
vector<int>::iterator it = v.end(); // v.end() points towards the address of next of last element if i do it-- here and print it then it will print last element of vector array
vector<int>::iterator it = v.rbegin(); // v.rbegin() points towards the address of first element of this reversed vector array.
vector<int>::iterator it = v.rend(); // v.rend() points towards the address of next of last element of the reversed vector array. if i do it-- here and print it then it will print first element of vector array.
cout << v.back() << endl; // v.back() gives the last element of vector array

for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){ // this is how we can iterate through the vector array using iterators
    cout << *(it) << " ";
}
for(auto it = v.begin(); it!=v.end(); it++){ // auto keyword automatically detects the data type of the variable. So we don't have to write vector<int>::iterator it = v.begin(); instead we can write auto it = v.begin();
    cout << *(it) << " ";
}
for(auto it:v){ // this is the range based for loop. it automatically iterates through the vector array and gives the value of each element in the vector array.
    cout << it << " ";
}

//DELETION IN VECTOR
v.erase(v.begin()+1); // this will erase the second element of the vector array. v.begin() gives the address of the first element and +1 will give the address of the second element.
v.erase(v.begin()+1, v.begin()+3); // this will erase the second and third element of the vector array. v.begin() gives the address of the first element and +1 will give the address of the second element and +3 will give the address of the fourth element. so it will erase the elements from second to third element.

//INSERTION IN VECTOR
v.insert(v.begin()+1, 5); // this will insert the value 5 at the second position of the vector array.
v.insert(v.begin()+1, 2, 5); // this will insert the value 5 at the second position of the vector array and it will insert 2 times. so the vector array will be {1, 5, 5, 2, 3, 4}
v.insert(v.begin()+1, {5, 6, 7}); // this will insert the values 5, 6, 7 at the second position of the vector array. so the vector array will be {1, 5, 6, 7, 2, 3, 4}

//INSERTION OF ANOTHER VECTOR ARRAY IN A VECTOR ARRAY
vector<int> copy(2, 50); // this will create a vector array of size 2 and all elements will be 50. so the vector array will be {50, 50}
v.insert(v.begin()+1, copy.begin(), copy.end()); // this will insert the values of the copy vector array at the second position of the vector array. so the vector array will be {1, 50, 50, 2, 3, 4}

//SWAPPING OF TWO VECTOR ARRAYS
v1.swap(v2); // this will swap the values of v1 and v2. 

//ERASURE OF VECTOR ARRAY
v.clear(); // erases entire vector array.

//CHECKING IF VECTOR ARRAY IS EMPTY OR NOT
cout << v.empty() << endl; // this will return 1 if the vector array is empty and 0 if the vector array is not empty.

//SIZE OF VECTOR ARRAY
cout << v.size() << endl; // this will return the size of the vector array.

//REMOVING LAST ELEMENT OF VECTOR ARRAY
v.pop_back(); // this will remove the last element of the vector array.

