#include<iostream>

using namespace std;
 void sapxep(int n,long long a[]){
    int pos;
    for(int i=1;i<n;i++){
		int x=a[i];
		pos=i-1;
    while(pos>=0&&a[pos]>x){
		a[pos+1]=a[pos];pos--;
	}
    a[pos+1]=x; 
    }
 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sapxep(n,a);
        int min=a[1]-a[0];
        for(int i=0;i<n;i++){
            if((a[i+1]-a[i])<=min) min=a[i+1]-a[i];
        }
        cout<<min;
        cout<<endl;
    }
 }