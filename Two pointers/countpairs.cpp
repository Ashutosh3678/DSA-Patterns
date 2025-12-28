#include <iostream>
#include <vector>
using namespace std;

bool pairequal(vector<int>a,int target){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum<target){
            c=j-i;
            i++;
        }
        else if(sum>target){
            j--;
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