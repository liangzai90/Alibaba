// AliOnlineTest2.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
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

int _tmain(int argc, _TCHAR* argv[])
{
	system("pause");
	return 0;
}*/

#include <map>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/*
��ൺ���кܶ�С��, ����é˹������ԭ���ķ����Ի𳵿����иĳ����µĳ��⣬ÿ������ֻ�ܴ��һ��С�𳵣�
ÿ��С�𳵽�������ֻ���ǵ��С�ÿ��С�𳵳�������һ���쳵���ƶ��ֹ�ŵ�����ǰ��
Ȼ������ϵ�С�𳵴��¶������ȳ��⡣���ܰ����ܹ�ʵ�ֻ𳵳�վ������
a
/  \
b    c
/ \  /  \
d   e f   g
\  / \
h j   i
\
k
\
l
a:����˹��Thomas��
b:���»���Edward��
c:������Henry��
d:�ߵǣ�Gordon��
e:ղķʿ��James��
f:������Percy��
g:�бȣ�Toby��
h:��ˣ�Duke��
j:���ɵ�&������˹��Donald&Douglas��
j:������Oliver��
k:��ɪ��Arthur��
l:������Emily��

���:
���С�𳵵ĳ�վ˳��
���뷶��:
1
�������:
Emily Donald&Douglas
*/

struct BT
{
	int key;
	BT *l, *r;
};

BT* create_n(int key)
{
}

bool train_schedule(BT* rt, int index)
{
	if (!rt)
		return false;

	map<int, string> m_train;
	m_train[0] = "Thomas";
	m_train[1] = "Edward";
	m_train[2] = "Henry";
	m_train[3] = "Gordon";

	m_train[4] = "James";
	m_train[5] = "Percy";
	m_train[6] = "Toby";
	m_train[7] = "Duke";

	m_train[8] = "Donald&Douglas";
	m_train[9] = "Oliver";
	m_train[10] = "Arthur";
	m_train[11] = "Emily";
	//TODO:write the real train schedule code here 

	return true;
}
int main()
{
	int i = 0;
	BT *rt = create_n('a');
	rt->l = create_n('b');
	rt->r = create_n('c');
	rt->l->l = create_n('d');
	rt->l->r = create_n('e');
	rt->r->l = create_n('f');
	rt->r->r = create_n('g');
	rt->r->l->r = create_n('h');
	rt->r->r->r = create_n('i');
	rt->r->r->l = create_n('j');
	rt->r->r->l->r = create_n('k');
	rt->r->r->l->r->r = create_n('l');
	std::cin >> i;

	train_schedule(rt, i);
	return 0;
}