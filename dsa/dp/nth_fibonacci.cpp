    long long int nthFibonacci(long long int n){
        long long int arr[n];
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 2;
        
        for(long long int m = 4; m<=n; m++)
        {
            arr[m] = (arr[m-1] + arr[m-2])%1000000007;
        }
        // code here
        
        return arr[n];
    }
