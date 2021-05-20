#pragma once
class Md5
{
public:
	Md5(); 
	Md5(const Md5&); 
	Md5& operator=(const Md5&); 
	int s[64], k[64]; 
	int i; 
	char* calc(const char *); 
};