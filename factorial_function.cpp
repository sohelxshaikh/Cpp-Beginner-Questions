#include<iostream>
using namespace std;
int fact(int n){
	int num=1;
	for(int i=2 ;i<=n ;i++){
		num=num*i;    
		
		
	}
	return num;
}
int main(){
	int n;
	cout<<"Enter any Number";
	cin>>n;
	int ans = fact(n);
	cout<<ans;
	return 0;
}
