#include<iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};
    int s=50;
    int low=0;
    int high=4;
    while(low<=high){
    int mid=(low+high)/2;
        if(s>a[mid]){
            low=mid+1;
        }
        else if(s==a[mid]){
            cout<<mid;
            break;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}