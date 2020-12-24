#include<bits/stdc++.h>

using namespace std;

#define ll long long

const double EPS = 1e-6;

double bp(int a, int b){
	double res = 1;
	while (b){
		if (b & 1)
			res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

double fact(int n){
  if (n == 0)
    return -1;
  double res = 1;
  for (int i = 1;i <= n;++i)
    res *= i;
  return res;
}

signed main(){
	int n,x;
	cout<<"Write x and n: ";
	cin >> x >> n;
	double ans=0;
	int coef = 0;
	do{
		double l = bp(x, 2 * coef + 1);
		double m = fact(2 * coef + 1);
		double cur = l / m;
		if(coef & 1) cur = -cur;
		ans += cur;
		coef++;
	}while(coef <= n && (ans >= EPS || ans <= -EPS) ) ;
	cout << "Sum = " << ans << '\n';
	cout << "Addends = " << coef << '\n';
}
