// Opposite_number.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int m;
	cin >> m;

	string sm = to_string(m);
	string sn;

	while (sm.length())
	{
		if (!sn.empty() || sm.back() != '0')
			sn.push_back(sm.back());
		sm.pop_back();
	}
	
	int n = atoi(sn.c_str()) + m;
	cout << n;

    return 0;
}

