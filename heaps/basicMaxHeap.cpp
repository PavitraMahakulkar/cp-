#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; // by default maxHeap
    // pq.push(10);
    // pq.push(-2);
    // pq.push(-6);
    // pq.push(8);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> pq; // minHeap
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}  