// AlibabaOnlineTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
/*����:
��һ�а���������Ȼ��N M��������ͼ����N���ذ����У����Ϊ1��N�������м���M����·�����б��1Ϊ�ض�������NΪ���������ء� �����M�У�ÿ���Ե����ո�ָ���������Ȼ��X��Y������X��Y֮����һ����·��
���:
�ؾ�����פ���赲��������ĵص㡣��С����������Ե����ո�ָ���
���뷶��:
5 5
1 2
1 3
2 4
3 4
4 5
�������:
1 4 5*/
using namespace std;

/** ������������������ʵ����ĿҪ��Ĺ��� **/
/** ��Ȼ����Ҳ���Բ��������ģ����������ȫ�����Լ����뷨�� ^-^  **/
vector < int > Joint(int n, vector < vector < int > > edges) {
	for (int i = 1; i < edges.max_size; i++)
	{
		if (edges[1][i] != 1)
		{
			break;
		}		
	}
}

int main() {
	vector < int > res;

	int _n;	//������ͼ����N���ذ����У����Ϊ1��N��,���б��1Ϊ�ض�������NΪ���������ء�
	cin >> _n;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	vector< vector < int > > _edges;
	for (int i = 0; i < _n; ++i) {
		_edges.push_back(vector<int>());
		for (int j = 0; j < _n; ++j) {
			_edges.back().push_back(0);
		}
	}
	int _m = 0;		//���м���M����·
	cin >> _m;
	for (int i = 0; i < _m; ++i) {
		//�����M�У�ÿ���Ե����ո�ָ���������Ȼ��X��Y������X��Y֮����һ����·��
		int a = 0;
		int b = 0;
		_edges[a][b] = 1;
		_edges[b][a] = 1;
	}

	res = Joint(_n, _edges);
	for (int res_i = 0; res_i < res.size(); res_i++) {
		cout << res[res_i] << ' ';
	}
	cout << endl;

	return 0;

}