#include<bits/stdc++.h>

using namespace std;

#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define forj(j, n) for(int j = 0;i < n; ++j) 
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
 
#define stringToCharArray(s,tab) { \
								strncpy(tab,s.c_str(),sizeof(tab)); \
								tab[sizeof(tab) - 1] = 0; \
							}

int main()
{
	string s;
	cin>>s;
	vector<char> ans;
	fori(i,s.length());
	if(ans.size()==0 || ans.back()!=s[i])
		ans.psb(s[i]);
	else
		ans.ppb();
	if(ans.size()==0)
		cout<<"Empty String";
	else
		for(char c: ans)
			cout<<c;
	return;


}