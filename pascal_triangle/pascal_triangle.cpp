#include<iostream>
using namespace std;
int main(){
	int i, j, n, x;
	cout<<"Enter size of triangle: ";
	cin>>n;
	cout<<"Enter character value for triangle: ";
	cin>>x;
	for(i=0;i<=n;i++){
		for(j=0;j<=n-i;j++){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			char ch = x;
			cout<<ch<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
