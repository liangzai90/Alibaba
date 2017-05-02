// AliOnlineTest1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;

/*��ʵ����Ĺ�Ʊ���׹���̫���ӣ�����������һЩ�򻯡��������Ǽ�����N����Ʊ��M�������ڡ�
������Ϊ�ڵ��������������й�Ʊ�ļ۸��Ǻ㶨�ġ���Ʊ������Ҫ���ɽ��׶��P����ӡ��˰��
��Ʊ������������������������0.01��Ҳ�ǿ��Եġ�
��������г���û��ͣ�ƣ�û�����У�û����ͣ��ͣ��û��������գ�û�зֺ죬���ҹ�Ʊ�۸�Ҳ��������㡣
 
�ٸ����ӣ��������������һԪǮ���˸���Ʊ��
�����Ʊ��һ�ڼ۸�1Ԫ/�ɣ�������֮��������1�ɹ�Ʊ��0Ԫ�ֽ�
�����Ʊ�ڵڶ����ǵ�2Ԫ/�ɣ���ô����ʱ����1�ɾͻ����2Ԫ��˰ǰ�����۳�10%��ӡ��˰��������û�й�Ʊȴ��1.8Ԫ�ֽ�
 
�������һ��ʼ��1Ԫ�ֽ���M��������֮��������ܳ��ж����ֽ�

����:
��һ��������������N��M�Լ�һ��������P�������M�У�ÿ��N��������������ĳ�ڣ��У���ĳ��Ʊ���У��ļ۸�
���:
M�ں�����е��ֽ�һ����ȷ��С�����һλ�ĸ�������
���뷶��:
1 2 0.1
1
2
�������:
1.8*/
/*
int _tmain(int argc, _TCHAR* argv[])
{
	int N;
	int M;
	double P;
	double temp;
	vector<double> price;
	double ans = 0;
	while (cin>>N)
	{
		cin >> M;
		cin >> P;
		price.resize(N);
		ans = 0;
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> temp;
				price[j] = temp;
			}			
		}
		for (auto i : price)
		{
			ans += i;
		}
		ans = ans - (ans*P);
		cout << ans << endl;
	}

	system("pause");
	return 0;
}*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

/*������������������ʵ����ĿҪ��Ĺ���*/
/*��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^ */
/******************************��ʼд����******************************/
double StockGod(int n, int m, double p, const vector<vector<double>>& prices)
{
	//�ҳ�ÿһ�еĲ�������
	vector<double> min;
	//�ҳ�ÿһ�еĲ�������
	vector<double> max;
	double ans = 0;
	bool findMax = false;
	bool findMin = true;
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < m - 1; j++)
		{
			if (prices[j][i] < prices[j][i - 1] && prices[j][i] < prices[j][i + 1] && findMin)
			{
				min.push_back(prices[j][i]);
				findMax = true;
				findMin = false;
			}
			if (prices[j][i] > prices[j][i - 1] && prices[j][i] > prices[j][i + 1] && findMax)
			{
				max.push_back(prices[j][i]);
				findMin = true;
				findMax = false;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		ans += (max[i] - min[i]);
	}
	ans = ans - (ans * p);
	return ans;
}
/******************************����д����******************************/
int main()
{
	int n = 0;
	int m = 0;
	double p = 0;
	cin >> n >> m >> p;

	vector<vector<double>> prices;
	for (int i = 0; i < m; ++i) {
		prices.push_back(vector<double>());
		for (int j = 0; j < n; ++j) {
			double x = 0;
			cin >> x;
			prices.back().push_back(x);
		}
	}

	double final = StockGod(n, m, p, prices);
	printf("%.1f\n", final);

	return 0;
}*/
//�ҳ�ÿһ�е���Сֵ����
vector<double> min(n);
//�ҳ�ÿһ�е����ֵ����
vector<double> max(n);
double ans = 0;
for (int i = 0; i < n; i++)
{
	max[i] = prices[0][i];
	min[i] = prices[0][i];
	for (int j = 0; j < m; j++)
	{
		if (prices[j][i] > max[i])
		{
			max[i] = prices[j][i];
		}
		if (prices[j][i] < min[i])
		{
			min[i] = prices[j][i];
		}
	}
}
for (int i = 0; i < n; i++)
{
	ans += (max[i] - min[i]);
}
ans = ans - (ans * p);
return ans;