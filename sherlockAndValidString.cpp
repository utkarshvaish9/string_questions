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

int main()
{
	string s;
	cin>>s;
	int arr[26];
	fill_n(arr,26,0);
	for(char c: s)
		arr[c - (int)'a']++;
    bool flag= true;
    bool flag1 = false;
    vector<int> v(arr,arr + (sizeof(arr)/sizeof(arr[0])));
    sort(all(v));
    v.erase(remove(v.begin(), v.end(), 0), v.end());  //remove all zeroes
    if(v[v.size()-2]==v[v.size() - 1]) 
        flag = false; // cases like 1 1 2 2
    if(v[0]==1 && v[1]!=1)
        flag1 = true; // cases like 1 10 10 10
    reverse(all(v));
    
    
	
	set<int> S(all(v));
	vector<int> v2(all(S));
   
	if(v2.size()==1)
			cout<<"YES"; // 1 means all elements same 2 2 2 2
    else if(v2.size()==2 && v2[1]-v2[0]==1 && flag)
        cout<<"YES"; // 2 2 2 3
    else if(v2.size()==2 && v2[0]==1 && flag1)
        cout<<"YES"; // if by removal of 1 element decreases count to zero
	else
		cout<<"NO";

	return 0;


