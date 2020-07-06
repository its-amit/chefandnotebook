#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
         int p,c;
		bool found=false;
		for(int i=0;i<n;i++){
			cin>>p>>c;
		if(p>=x-y && c<=k)
		{
			found=true;
			break;
		}
	}
          cout<<(found?"LuckyChef":"UnluckyChef")<<'';
	}
}