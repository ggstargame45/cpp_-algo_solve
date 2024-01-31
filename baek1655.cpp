/**
 *  백준 1655 Say the median https://www.acmicpc.net/problem/1655
 * A says n numbers
 * every time A says an integer Ki B says the median among the integer A said
 * if A said even times B says the small one from the two median integer
 * 
 * input
 * first line : n(1<=n<=100000)
 * next n lines : Ki(-10000<=Ki<=10000)
 * 
 * output
 * n lines of integers what B has to say
 * 
 * test case :
 * input
 * 7
 * 1
 * 5
 * 2
 * 10
 * -99
 * 7
 * 5
 * 
 * output
 * 1
 * 1
 * 2
 * 2
 * 2
 * 2
 * 5
*/
/**
 * basic idea
 * 1. insertion sort
 * 
*/
/**
 * my thought : insertion sort
 * 
 * 1. insertion sort
 * 1) make 2d array dp[n][2]
 * 2) dp[i][0] = Ki
 * 3) dp[i][1] = median
 * 4) sort dp by dp[i][0]
 * 5) find median
 * 6) print median
 * 
 * time complexity : O(n^2)
 * space complexity : O(n)
 * 
 * 2. insertion sort with binary search
 * 1) make 2d array dp[n][2]
 * 2) dp[i][0] = Ki
 * 3) dp[i][1] = median
 * 4) sort dp by dp[i][0]
 * 5) find median with binary search
 * 6) print median
 * 
 * time complexity : O(nlogn)
 * space complexity : O(n)
 * 
 * 
*/


#include <iostream>

using namespace std;

int main() {
    int n, nextNumber; // input

    cin >> n;
    for(int i = 0; i<n;i++){
        cin>>nextNumber;

    }
    

    return 0;
}