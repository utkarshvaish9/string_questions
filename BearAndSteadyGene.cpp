#include<bits/stdc++.h>
using namespace std;

const int nax = 1e6 + 5;
char sl[nax];
const char W[5] = "ACTG";
int n, counter[4];

bool ok() {
    for(int i = 0; i < 4; ++i)
        if(counter[i] > n / 4)
            return false;
    return true;
}

int match(int i) {
    for(int j = 0; j < 4; ++j)
        if(sl[i] == W[j])
            return j;
    return 0;
}

int main() {
    scanf("%d", &n);
    scanf("%s", sl);
    for(int i = 0; i < n; ++i)
        ++counter[match(i)];

    if(ok()) { 
        puts("0");
        return 0;
    }

    int ans = n;
    
    int j = 0;
    for(int i = 0; i < n; ++i) {
        while(j < n && !ok())
            --counter[match(j++)];
        if(ok()) ans = min(ans, j - i);
        ++counter[match(i)];
    }
    printf("%d\n", ans);
    return 0;
}