/*题目描述
给定一段长度为 n 的钢条和一个价格表 pi(i=1,2...n)，制定切割方案，使收益最大  
例如：  
钢条长度为 n，p[1,2,3,4] = {1, 5, 8, 9}  
将钢条切成两个长度为2的，收益最大，为10

r(n) = max{pi + r(n-i)},  1 <= i <= n
*/

#include<iostream>
#include<vector>

using namespace std;

/*
自底向上迭代方法
*/
int cut(vector<int> p, int n)
{
	vector<int> r(n + 1);
	r[0] = 0;

	for(int i=1; i<=n; ++i)
	{
		int tmp = -1;

		for(int j=1; j<=i; ++j)	tmp = max(tmp, p[j] + r[i-j]);

		r[i] = tmp;
	}

	return r[n];
}

/*
递归备忘录方法
*/
int cut_2(vector<int> p, int n, vector<int>& r)
{
	if(n == 0)	return 0;

	int tmp = -1;
	for(int i=1; i<=n; ++i)	tmp = max(tmp, p[i] + cut_2(p, n-i, r));
	r[n] = tmp;

	return tmp;
}

int main()
{
	vector<int> p{0, 1, 5, 8, 9};
	int n = 4;
	cout << "1. max profit: " << cut(p, n) << endl;

	vector<int> r(n + 1);
	cout << "2. max profit: " << cut_2(p, n, r) << endl;
}