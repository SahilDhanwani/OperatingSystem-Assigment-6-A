#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of free blocks : ";
    cin>>n;
    int free[n];
    cout<<"Enter no of processes : ";
    int m;
    cin>>m;

    int process[m];
    bool allocated[m];

    cout<<"Enter free blocks (size) : ";
    for(int i=0;i<n;i++){
        cin>>free[i];
    }    

    cout<<"Enter process size : ";
    for(int i=0;i<m;i++){
        cin>>process[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(free[j]>=process[i]){
                cout<<"Process "<<i+1<<" is allocated to block "<<j+1<<endl;
                free[j]-=process[i];
                allocated[i]=true;
                break;
            }
        }
        if (allocated[i]==false)
        {
            cout<<"Process "<<i+1<<" is not allocated"<<endl;
        }
    }
    return 0;
}