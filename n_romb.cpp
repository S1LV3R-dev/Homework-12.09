#include <bits/stdc++.h>

using namespace std;

signed main(){
  int n;
  while (true){
    cout << "Write natural number : ";
    cin >> n;
    if (n != 0)
      break;
    cout << '\n';
  }
  string ans;
	for(int i = n;i >= 1;--i){
		for(int j = 1;j <= n;++j){
			ans += string(i - 1, ' ');
			ans += string((n - i) * 2 + 1, '*');
			ans += string(i - 1, ' ');
		}
		ans += i != 1 ? "\n" : "";
	}
	cout << ans;
	for (int i = 1;i <= 2 * pow(n, 2) - n;++i)
    ans.erase(--ans.end());
	reverse(ans.begin(), ans.end());
	cout << ans;
}
