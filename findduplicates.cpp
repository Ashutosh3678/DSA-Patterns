// Q1. Pair Equals Target (Warm-up)

// Problem
// You are given a sorted array arr and an integer target.
// Determine whether any pair (i, j) exists such that:


// arr = [1, 2, 4, 6, 10]
// target = 8
// Output: true   // (2,6)

#include <iostream>
#include <vector>
using namespace std;

bool pairequal(vector<int>a,int target){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum>target){
            j--;
        }else if(sum<target){
            i++;    
        }else{
            return true;
        }
    }
    return false;
}

int main() {
    vector<int>arr={1,2,4,6,10};
    int target=8;
    bool result=pairequal(arr,target);
    if(result){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}