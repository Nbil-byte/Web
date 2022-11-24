#include <iostream>
#include <stack>
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
    
    stack <int> langkah;
    for(int k=0;k<K;k++){
    	for(int i=0;i<N;i++){
    		if(i!=tuj){
    			if((i<=R[k])&&(i>=L[k])){
    				langkah.push(B[i]);
    				break;
				}
			}
			langkah.pop();
			k--;
			if(k==-1){
				break;
			}
		}
	}
	
	for(int i=0;i<K;i++){
		max+=langkah[i;
	}
	
	cout<<max;
		

