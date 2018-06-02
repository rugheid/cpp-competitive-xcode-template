//
//  ___FILENAME___
//  ___PACKAGENAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string.h>

// Shortcuts for "common" data types in contests
typedef long long ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef std::vector<ull> vull;
typedef std::pair<int, int> pii;
typedef std::vector<pii> vpii;
typedef std::set<int> si;
typedef std::map<std::string, int> msi;

// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000 // 2 billion

// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
//memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
//memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
//memset(arr, 0, sizeof arr); // useful to clear array of integers


#pragma mark - MAIN

using namespace std;

size_t T;

int main(int argc, const char * argv[]) {

    #ifdef USE_INPUT_FILE
    freopen("example_input.txt", "r", stdin);
    #endif

    std::ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);
    cin.tie(NULL);
    
    std::cin >> T;
    for (size_t caseNumber = 0; caseNumber < T; caseNumber++) {
        
        std::cout << "Case #" << caseNumber + 1 << ": ";
        
        <#Write your code here...#>
        
        std::cout << "\n";
    }
    
    return 0;
}
