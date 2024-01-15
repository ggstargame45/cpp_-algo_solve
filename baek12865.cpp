#include <iostream>

/**
 * 백준 12865 noraml backpack 
 * n stuffs, each has weight w and value v
 * backpack has weight limit k
 * find the maximum value of stuffs in backpack
 * 
 * input 
 * first line : n(1<=n<=100), k(1<=k<=100000)
 * next n lines : w(1<=w<=100000), v(0<=v<=1000)
 * every input is integer
 * 
 * output
 * maximum value of stuffs in backpack
*/

/**
 * basic idea
 * 1. brute force
 * 2. dynamic programming
 * 
 * 1. brute force
 * 1) make all cases of stuffs in backpack
 * 2) find the maximum value
 * 
 * 2. dynamic programming
 * 1) make 2d array dp[n+1][k+1]
 * 2) dp[i][j] = maximum value of stuffs in backpack with weight j
 * 3) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i])
 * 
 * time complexity : O(nk)
 * space complexity : O(nk)
*/

using namespace std;

int main() {
    int n, k; // input
    int w[101], v[101]; // weight, value

    

    return 0;
}


