//--------------**************---------------------
/* 
 #        "    ""#    ""#                      #        
 #   m  mmm      #      #     mmm    mmm    mmm#   mmm  
 # m"     #      #      #    #"  "  #" "#  #" "#  #"  # 
 #"#      #      #      #    #      #   #  #   #  #"""" 
 #  "m  mm#mm    "mm    "mm  "#mm"  "#m#"  "#m##  "#mm"  */


#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef pair<int,int> pii;
typedef long long ll;
typedef double ld;
typedef vector<int> vi;
#define fi first
#define se second
#define fe first
#define SZ 666666
#define si(n) scanf("%d",&n);
#define sl(n) scanf("%ld",&n);
#define pi(n) printf("%d\n",n);
#define pl(n) printf("%ld\n",n);
#define pf(n) printf("%f\n",n);
#define FILL(a,b) memset(a,0,sizeof(b));
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,a,b) for(int i=1;i<=b;i++)
const int INF=1e9+5;
const int MOD=1000000007;

//--------------**************---------------------
int flag[200001];

int main()
{
	int n; cin>>n;
	string s;
	cin>>s;
	if(s[0]=='<'){flag[0]=1; }
	for(int i=1;i<n;i++)
	{
        if(s[i]=='<' && flag[i-1]==1)flag[i]=1;
	}
	//for(int i=0;i<n;i++)cout<<flag[i]<<" "; cout<<endl;
	if(s[n-1]=='>'){flag[n-1]=1; }
	for(int i=n-2;i>=0;i--)
	{
        if(s[i]=='>' && flag[i+1]==1)flag[i]=1;
	}
	int count=0;
	for(int i=0;i<n;i++){if(flag[i])count++; }
		cout<<count;
}
