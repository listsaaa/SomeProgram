// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include "stdafx.h"

using namespace std;
int main()
{
    int n1,n2,stop;
	char option;
	cout << "Hi,this is a calc program" << endl;
	cout << "Need a option (e:+  - *  \ ):";
	cin >> &option;
	cout << "Need  number(only one):";
	cin >> n1;
	cout << "Need number #2 (only one):";
	cin >> n2;
	cout << n1 << option << n2 << endl;
	cin >> stop;
	return 0;
}

