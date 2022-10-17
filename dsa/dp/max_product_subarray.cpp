	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long mx = arr[0],mn = arr[0],res = arr[0];
	    for(int i=1; i<n; i++)
	    {
	        long long tmx = mx;
	        long long tmn = mn;
	        
	        mx = max(max(tmx * arr[i], tmn*arr[i]),(long long)arr[i]);
	        mn = min(min(tmn * arr[i], tmx*arr[i]),(long long)arr[i]);
	        res = max(res, mx);
	    }
	    return res;
	}
