#include <iostream>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    int B[N];
    int A[N][N];
    int L[K];
    int R[K];
    for(int i=0;i<N;i++){
        cin>>B[i];}

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>A[i][j];
        }
    }
    
    for(int i=0;i<N;i++){
        cin>>L[i];}

    for(int i=0;i<N;i++){
        cin>>R[i];}
    
    int max=B[1];

    for(int d=0;d<K;d++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i!=j){
                    if(A[i][j]<=R[d] && A[i][j]>=L[d]){
                        max+=B[j];
                    }
                }
            }

        }
    }
    cout<<max;
}