                                     // PAIR // 
// pairs ---> used when we have to store a tuple of any two/same data types 
// we can only store two values in a single pair
// syntax ---> pair <datatype, datatype> pair_name = {val1, val2};
// to acess the values of pair         pair_name.first                   pair_name.second 
// those two values are stored in a single variable which is pair_name;

// nesting of pairs

// pair<datatype, pair<datatype, datatype>> pair_name = {val1, {val2,val3}};
// pair_name.first              pair_name.second.first             pair_name.second.second

// #include <iostream>
// using namespace std;
// int main() {
//     pair<int, pair<int, char>> p = {1,{5,'r'}};
//     cout<<p.first<<endl;
// }

// storing pairs in arrays index (for storing more than 3 elements)
// pair<datatype,datatype> array_name[] = {{val1,val2}, {val3,val4}, {val5, val6}};
// first pair is stored at index 0 in array and is followed further 
// accesing ---> array_name[index].first          arr[index].second

// #include <iostream>
// using namespace std;
// int main() {
//     pair<int, int> arr[] = {{1,2},{3,4}};
//     cout<<arr[0].second<<endl;
//     cout<<arr[1].first<<endl;
// }

                                   // VECTORS // 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    // vector <int> raj(5,100);
    // vector <int> string(raj);       //creating an copy of an already exisiting vector
    // cout<<string[3];

    // for (int i=0; i<raj.size(); i++) {        //printing elements of an vector
    //     cout<<raj[i]<<endl;
    // }

    // raj.push_back(2);                 //inserting elements in an predefined vector
    // raj.emplace_back(4);
    // cout<<raj[1];

    // vector < pair <int, int>>vec;         //creating pairs in an vector
    // vec.push_back({1,2});
    // vec.emplace_back(3,4);
    // cout<<vec[0].first<<endl

    // vector <int> vec(5,100);
    // cout<<vec[4]<<endl;
    // int a = vec.size();                 // 5
    // cout<<a<<endl;
    // cout<<vec[5]<<endl;           //0
    // vec[5] = 50;                 
    // vec.push_back(50);
    // int b = vec.size();
    // cout<<b<<endl;                       //6
    // cout<<vec[5]<<endl;       //50

    // vector <int> vec(5);
    // cout<<"loop started..";
    // for (int i=0 ; i<5; i++) {
    //     cout<<"enter element:";
    //     cin>>vec[i];
    // }
    // cout<<"element is:";
    // cout<<vec[2];  //3
    // cout<<endl;

    // vector <int> vec(5);
    // for (int i=0 ;i<(vec.size()); i++) {           //inserting elements
    //     cout<<"enter element:";
    //     cin>>vec[i];
    // }
//     vector <int> :: iterator it = vec.begin();                 //printing elements using iterator
//     for (int j=0 ; j<(vec.size()); j++) {
//         cout<<(*it)<<endl;
//         it++;
//     }
    
    // vector <int> :: iterator it = vec.end();
    // cout<<(*it)<<endl;       //0         (garbage value)
    // it--;
    // cout<<(*it)<<endl;        //last element

    // cout<<vec.back()<<endl;             // prints the last element

    // for (vector <int> :: iterator it = vec.begin(); it!=vec.end(); it++) {
    //     cout<<(*it)<<endl;                                   //pro way to print elements of an vector
    // }

    // vector <int> vec = {1,2,3,4};
    // for (auto it = vec.begin(); it!=vec.end(); it++) {
    //     cout<<(*it)<<endl;
    // }

    // for (int it : vec) {
    //     cout<<it<<endl;
    // }

    // int arr[] = {1,2,3,4,5};
    // for (auto &it : arr) {
    //     it *=10;
    // }
    // for (auto it : arr) {
    //     cout<<it<<endl;
    // }

    //deletion in a vector 
    // vector <int> vec = {1,2,3,4};
    // vec.erase(vec.begin()+1, vec.begin());
    // for (auto it : vec) {
    //     cout<<it<<endl;
    // }

    // vector <int> vec(2,100);                //inserting
    // vec.insert(vec.begin(),2,500);
    // for (auto it : vec) {
    //     cout<<it<<" ";                // 500 500 100 100 
    // }

    // vector <int> vec = {1,2,3,4,5};
    // cout<<vec.size()<<endl;                 // 5
    // vec.pop_back();
    // for (auto it : vec) {
    //     cout<<it<<" ";
    // }                       //  1 2 3 4
    // vec.clear();
    // cout<<vec.size()<<endl;      // 0

    // vector <int> v1 = {10,20};
    // vector <int> v2 = {30,40};
    // for (auto it : v1) {
    //     cout<<it<<" ";
    // }
    // v1.swap(v2);
    // for (auto it : v1) {
    //     cout<<it<<" ";
    // }

    // vector <int> vec = {1,2,3};
    // vec.clear();
    // cout<<vec.empty()<<endl;

// }

 ////                   LISTS
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     list <int> list1 = {1,2,3};
//     list1.push_front(0);
//     list1.push_back(4);
//     cout<<list1.size()<<endl;
//     for (auto it : list1) {
//         cout<<it<<" ";
//     }
// }

/////////        DEQUE
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     deque <int> deq = {1,2,3};
//     deq.pop_back();
//     deq.pop_front();
//     cout<<deq[0]<<endl;   //2
// }

///////////               STACK
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     stack <int> st;
//     st.push(7);
//     st.push(4);
//     st.push(3);
//     cout<<st.top()<<endl;
//     st.pop();
// }

///////////         QUEUE
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     queue <int> que;
//     que.push(7);
//     que.push(4);
//     cout<<que.front()<<endl;
//     cout<<que.back()<<endl;
// }

////////////               PRIORITY QUEUE
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top()<<endl;
// }

///////////          SET
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    // set <int> st;
    // st.insert(7);
    // st.emplace(5);
    // st.emplace(7);
    // cout<<st.size()<<endl;                //2
    // auto it = st.find(5);            // stores memory address where the element is present
    // cout<<(*it)<<endl;
    // st.erase(it);
    // cout<<st.size()<<endl;           //1    

    // set <int> st;
    // st.insert(1);
    // st.insert(2);
    // st.insert(3);
    // st.insert(4);
    // st.insert(5);
    // cout<<st.size()<<endl;
    // auto it1 = st.find(3);
    // auto it1 = st.find(5);
    // st.erase(it1, it2);           // {1,2,5} 
    // auto it = st.find(6);    //garbage value   
// }

    // int arr[] = {1,2,3,4,5};
    // int len = sizeof(arr)/sizeof(arr[0]);
    // bool res = binary_search(arr,arr+len,10);
    // cout<<res;

    // vector <int> vec = {1,2,3,4,5};
    // bool res = binary_search(vec.begin(),vec.end(),3);
    // cout<<res;


//     int main() {
//     int arr[]  = {1,2,3,4,5};
//     int x = sizeof(arr)/sizeof(arr[0]);
//     auto ind = lower_bound(arr,arr+x,5);
//     cout<<*ind<<endl;
// }

//     int main() {
//     int arr[]  = {1,2,3,4,5};
//     int x = sizeof(arr)/sizeof(arr[0]);
//     auto ind = upper_bound(arr,arr+x,5);
//     cout<<*ind<<endl;
// }

////////////////////////////   MULTISET
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     multiset <int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     cout<<ms.size()<<endl;
// }

/////////////// UNORDERED SET
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     unordered_set <int> us;
//     us.insert(1);
//     us.insert(1);
//     // cout<<us.size()<<endl;       //1 
//     us.insert(2);
//     us.insert(3);
//     us.insert(4);
//     us.insert(7);
//     us.insert(5);
//     for (auto x : us) {
//         cout<<x<<" ";              //5 7 4 3 2 1  
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     map <int,int> mpp;
//     mpp.insert({1,2});
//     mpp.emplace(4,1);
//     mpp[1] +=5;
//     cout<<mpp[1]<<endl;
//     for (auto it : mpp) {
//         cout<<it.first<<" ";          // 1 4
//     }
//     auto it = mpp.upper_bound(2);
//     cout<<(*it).second<<endl;     // 1
// }

