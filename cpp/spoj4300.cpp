#include <iostream>
using namespace std;

int main(){
	int n,c=0;
	cin>>n;
	for(int i=1;i*i<=n;i++)
		for(int j=i;i*j<=n;j++)
			c++;
	cout<<c<<endl;
	return 0;
}