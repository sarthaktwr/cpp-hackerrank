#include<list>
#include<iostream>
using namespace std;

int main(){
    int temp;
    int l[3] = {10, 20, 30};
    for (int i = 0; i < 4; i++){
        cin>>l[i];
        if (i < (3 - i)){
            temp = l[i];
            l[i] = l[3 - i];
            // cout<<3 - i<<" ";
            l[3 - i] = temp;
            
        }        
    }
    for (int j = 0; j < 4; j++){
        cout<<l[j]<<" ";
    }
    return 0;
}