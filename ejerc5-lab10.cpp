#include<iostream>
using namespace std;
int termino(int x){
	if(x==1 || x==2){
			return 1;
	}
	return termino(x-1)+termino(x-2);
}
int main(){
	int n;
	cout<<"digite numero termino de la serie"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
	cout<<termino(i)<<" ";	
	}
	
	
	return 0;
}
