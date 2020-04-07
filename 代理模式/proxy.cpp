
#include "proxy.h"
 
Proxy::Proxy()
{
    m_Implement = new Implementation();
}
 
Proxy::~Proxy()
{
    delete m_Implement;
}
 
void Proxy::func_a()
{
	m_Implement->func_a();
}
 
void Proxy::func_b()
{
	m_Implement->func_b();
}
 
void Proxy::func_c()
{
	m_Implement->func_c();
}
