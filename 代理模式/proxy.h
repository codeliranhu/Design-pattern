
#include <iostream>
#include "proxy_base.h"
#include "implementation.h"
 
using namespace std;
 
#ifndef _PROXY_H_
#define _PROXY_H_
 
class Proxy : public ProxyBase
{
private:
	ProxyBase* m_Implement;
public:
	Proxy();
	~Proxy();
 
	void func_a();
	void func_b();
	void func_c();
};
 
#endif
