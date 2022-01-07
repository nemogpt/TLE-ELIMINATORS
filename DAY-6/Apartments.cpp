/* Naman Gupta */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 1000000007
#define PI 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define size(x) ((int)(x).size())
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout <<"]";}
template <class T> void _print(multiset <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout <<"]";}
template <class T, class V> void _print(map <T, V> v) {cout << "["; for (auto i : v) {_print(i); cout << " ";} cout <<"]";}
 /*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/*--------------------------------------------------------------------------------------------------------------------------*/
 
void solve()
{
int n,m,k;
cin>>n>>m>>k;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
int b[m];
for(int i=0;i<m;i++)cin>>b[i];

sort(a,a+n);
sort(b,b+m);

int cnt=0;

int ind=0;
int j=ind;
for(int i=0;i<n;i++){
    int l=a[i]-k;
    int r=a[i]+k;
     j=ind;
    while(j<m){
        if(b[j]!=-1 && b[j]>=l &&b[j]<=r){
            b[j]=-1;
            cnt++;
            break;
        }
        j++;
        if(b[j]<l)ind++;
    }
}
cout<<cnt<<endl;



}
int main()
{
solve();
return 0;
}