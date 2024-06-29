#include<bits/stdc++.h>
using namespace std;
int guess(int n){
	int ans;
	while(ans!=n){
		if(ans>61){
			cout<<"To high"<<endl;
			break;
		}
		else if(61>ans){
		cout<<"To low"<<endl;
		break;
		}
		else {
		cout<<"corect"<<endl;
		break;
		}
	}
	guess(61);
}
int main(){
	int ans;
	cout<<"Enter the your guessed number:";
	cin>>ans;
	guess(ans);
	

	return 0;
}
