#include<bits/stdc++.h>

using namespace std;


#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define forj(j, n) for(int j = 0;j < n; ++j) 
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i)
#define LL 					long long
#define ULL 				unsigned long long
#define pii 				pair<int,int>
#define fi 					first
#define se 					second
#define vi 					vector<int>
#define psb 				push_back
#define ppb 				pop_back
#define sz(x)				(int)(x).size()
#define gc					getchar_unlocked
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vector

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n = s1.length();
	int m = s2.length();
	int *arr = (int *)malloc((n+1) * (m+1) * sizeof(int));
	//cout<<n;
	fori(i,n+1)
    {
        forj(j,m+1)
        {
			if(i==0 || j==0)
				*(arr + i*(m+1) + j) = 0;
			else if(s1[i-1]==s2[j-1])
				*(arr + i*(m+1) + j) = *(arr + (i-1)*(m+1) + (j-1)) + 1;
			else
				*(arr + i*(m+1) + j) = max(*(arr + (i-1)*(m+1) + j),*(arr + i*(m+1) + (j-1)));
    }    
}
	cout<<*(arr + n*(m+1) + m);
	return 0;
}