#include <iostream>

/**
 * 백준 12865 noraml backpack https://www.acmicpc.net/problem/12865
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
 * 
 * 3. dynamic programming with 1d array
 * 1) make 1d array dp[k+1]
 * 2) dp[j] = maximum value of stuffs in backpack with weight j
 * 3) dp[j] = max(dp[j], dp[j-w[i]] + v[i])
 * 
 * time complexity : O(nk)
 * space complexity : O(k)
 * 
 * is there any other way?
 *  - greedy algorithm
 * - branch and bound
 * - backtracking
 * 
 * greedy algorithm
 * - sort by value/weight
 * - put stuffs in backpack until it is full
 * 
 * branch and bound
 * - sort by value/weight
 * - put stuffs in backpack until it is full
 * - if it is not full, put stuffs partially
 * 
 * backtracking
 * - sort by value/weight
 * - put stuffs in backpack until it is full
 * - if it is not full, put stuffs partially
 * - if it is full, check the maximum value
 * - if it is not maximum, remove stuffs and put other stuffs
 * 
*/

using namespace std;

int main() {
    int n, k; // input
    int w[101], v[101]; // weight, value

    

    return 0;
}


