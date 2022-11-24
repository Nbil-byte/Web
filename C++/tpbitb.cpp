#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int jumlah;
    string arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int K;
    cin>>K;
    int var;
    for(int i=0;i<N;i++){
        var=arr[i].size();
        if(var>=(K-1)){
            jumlah+=int(arr[i][K-1])-48;
            }
        cout<<jumlah<<endl;
    }
    cout<<jumlah;
}