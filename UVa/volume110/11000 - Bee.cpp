#include<algorithm>
#include <iostream>
#include  <cstring>
#include  <cstdlib>
#include   <cstdio>
#include   <vector>
#include    <cmath>
#include    <queue>
#include      <map>
#include      <set>
#define REP(i,a,b) for(int i=a;i<=b;++i)
#define FOR(i,a,b) for(int i=a;i!=b;++i)
#define CLR(c,x)   memset(c,x,sizeof(c))
#pragma GCC  optimize("O2")
#define sf   scanf
#define pf   printf
#define INF  ~0U>>2
#define EPS  1e-8
#define maxn 50
using namespace std;

int main(){
	int n;
	while(~sf("%d",&n),~n){
		long long l=0,r=0;
		while(n--){
			r+=l,swap(l,++r);
		}
		pf("%lld %lld\n",l,l+r+1);
	}
	return 0;
}
