
#include <iostream>
#include "proxy_base.h"
 
using namespace std;
 
#ifndef _IMPLEMENTATION_H_
#define _IMPLEMENTATION_H_
 
class Implementation : public ProxyBase
{
public:
	Implementation();
	void func_a();
	void func_b();
	void func_c();
};
 
#endif
