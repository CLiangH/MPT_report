#pragma once
#include<iostream>
#include<string>

using namespace std;

struct MPT
{
	int prefix;
	string shared_nibbles;
	MPT* next_node[16];
	int value=0;
	bool leaf = 0;
};