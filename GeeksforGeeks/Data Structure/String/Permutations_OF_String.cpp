#include<bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r){
    int i;
    if(l==r)
    cout<<s<<" ";
    else{
        for(i=l;i<=r;i++){
            swap(s[l],s[i]);
            sort(s.begin()+l+1,s.end());
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
        
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    sort(s.begin(), s.end());
	    permute(s,0,n-1);
	    cout<<endl;
	}
	return 0;
	    
	}
