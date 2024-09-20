#include <iostream>
using namespace std;
int main(){
    int n=5;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=1;
        for(int j =n ;j>i+1;j--){
            cout<<sum;
        }
        cout<<endl;
        
    }
    
}
    