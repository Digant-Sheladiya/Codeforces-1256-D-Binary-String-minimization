#include<bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while(t--)
#define pi (3.141592653589)
#define ll long long int
#define of(i, x, n) for (ll i = x; i >= n; i--)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define fr(i, m) for (auto i : m)
#define vl vector<long long>
#define vs vector<string>
#define sl set<ll>
#define ss set<string>
#define sc set<char>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define pb push_back
#define pp pop_back
#define float double
#define all(v) (v).begin(), (v).end()
#define bll(v) (v).begin(), (v).end(),greater<int>()
#define fi first
#define se second
#define maxi *max_element
#define mini *min_element
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define M 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define rtn return
ll gcd(ll a, ll b)
{if (b == 0){rtn a;}rtn gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll binpow(ll x,ll y)
{
    x%=M;
    ll ans=1;
    while(y>0)
    {
        if(y&1)ans=ans*x%M;
        x=x*x%M;
        y>>=1;
    }
    return ans%M;
}
bool perfectsq(double x)
{
    if (x>=0)
    {ll sr = sqrt(x); rtn (sr*sr==x);}
    rtn false;
}
bool isprime(ll number)
{
    if (number <= 1)
        rtn false;
    if (number == 2)
        rtn true;
    if (number % 2 == 0)
        rtn false;
    ll boundary = (ll)floor(sqrt(number));
    for (ll i = 3; i <= boundary; i += 2)
        if (number % i == 0)
            rtn false;
    rtn true;
}
vl prime;
void primeFactors(ll n)
{
    ll c=2;
    while(n>1){if(n%c==0){prime.pb(c); n/=c;} else c++;}
}
// !(n&(n-1)) --> n==2^x n&(n-1) --> n!=2^x
void solve()
{
    map<pair<ll,char>,ll> m;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(is_sorted(all(s))){
        cout<<s<<endl; rtn;
    }
    ll ct=0;
    f(i,0,n){
        if(s[i]=='0')
        {
            m[{ct,s[i]}]=i;
            ct++;
        }   
     }
     ll ct1=0;
     while(k>0)
     {
        if(m[{ct1,'0'}]==ct1){
            ct1++;
            continue;
        }
        // cout<<m[{ct1,'0'}]<<' '<<min(m[{ct1,'0'}]-ct1,k-m[{ct1,'0'}]+ct1)<<' ';
        if(k>m[{ct1,'0'}]-ct1)
        swap(s[m[{ct1,'0'}]],s[ct1]);
        else{
            swap(s[m[{ct1,'0'}]],s[m[{ct1,'0'}]-k]);
        }
        
            k-=(m[{ct1,'0'}]-ct1);
            // cout<<k<<endl;
            ct1++;
            if(m[{ct1,'0'}]==0 && ct1!=0) 
        {
            break;
        }
     }
     cout<<s<<endl;







}
int main()
{
    fast;
    test
    solve();
    rtn 0;
}

