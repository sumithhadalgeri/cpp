def f(n,dp):
    if n<=1:
        return 1
    if dp[n]!=-1:
        return dp[n]
    dp[n]=n*f(n-1,dp)
    return dp[n]
n=3
dp=[-1]*(n+1)
print(f(n,dp))