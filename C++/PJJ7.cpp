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
    
    int max=B[0];
    int tuj=0;
    int awal=0;

    for(int langkah=0;langkah<K;langkah++){
    	cout<<"Langkah ke-"<<langkah<<endl;
        while(true){
                if(tuj!=awal){
                    if(A[tuj][awal]<=R[langkah] && A[tuj][awal]>=L[langkah]){
                    	cout<<"Awal ke-"<<awal<<"   Tujuan ke-"<<tuj<<endl;
                        awal=tuj;
                        max+=B[tuj];
                        tuj=0;
                        break;
                    }
                    else{
                        tuj+=1;
                    }                    
                }
                else{
                    tuj+=1;
                }
            }
			cout<<"Awal ke-"<<awal<<"   Tujuan ke-"<<tuj<<endl;
        }
    cout<<max;
}
