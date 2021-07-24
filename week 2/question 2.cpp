#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	
	int key; cin >> key;

	int l = 0, r = n-1;
	int flag1 = 0, mid, flag2 = 0;
	while(l<=r) {
		 mid = l + (r-l)/2;
			if(a[mid] >= key) r = mid - 1;
			else l = mid + 1;
	}


	int l_occur = r+1;

	l = 0, r = n-1;
	while(l<=r) {
		 mid = l + (r-l)/2;
			if(a[mid] <= key) l = mid + 1;
			else r = mid - 1;
	}

	int r_occur = l-1;

	if(a[r_occur] == key && a[l_occur] == key) cout << key << " - " << (r_occur - l_occur + 1) << endl;
	else cout << "key not found" << endl;


}
int main() {

	int t; cin >> t;
	while(t--) {
		solve();
	}

return 0;
}
