// Magic_coins.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string op;
	while (n != 0)
	{
		if (n % 2 == 0)
		{
			op.insert(op.begin(), '2');
			n = (n - 2) / 2;
		}
		else
		{
			op.insert(op.begin(), '1');
			n = (n - 1) / 2;
		}
	}

	cout << op;

    return 0;
}

