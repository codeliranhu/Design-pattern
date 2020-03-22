
#include <iostream>
using namespace std;

enum PRODUCTTYPE
{
    A,
    B,
    C
};


class ProductionBase            //abstract class of production
{
public:
    virtual ~ProductionBase(){};
    virtual void show() = 0;
};

class ProductionA : public ProductionBase       //Production A
{
public:
    void show() { cout << "Creat Producation A" << endl; };
};

class ProductionB : public ProductionBase       //Production B
{
public:
    void show() { cout << "Creat Producation B" << endl; };
};

class ProductionC : public ProductionBase       //Production C
{
public:
    void show() { cout << "Creat Producation C" << endl; };
};



class FactoryBase       //abstract class of factory
{
    virtual ProductionBase* CreatProduction() = 0;
};

class AFacotry : public FactoryBase             //actually  class of Factory to create production A
{
    public:
        ProductionBase *CreatProduction()
        {
            return new ProductionA();
        }
};

class BFacotry : public FactoryBase         //actually  class of Factory to create production B
{
public:
    ProductionBase *CreatProduction()
    {
        return new ProductionB();
    }
};

class CFacotry : public FactoryBase     //actually  class of Factory to create production C
{
public:
    ProductionBase *CreatProduction()
    {
        return new ProductionC();
    }
};

int main()
{

    AFacotry factory_A;
    ProductionBase *PA = factory_A.CreatProduction();
    PA->show();

    BFacotry factory_B;
    ProductionBase *PB = factory_B.CreatProduction();
    PB->show();

    CFacotry factory_C;
    ProductionBase *PC = factory_C.CreatProduction();
    PC->show();

    delete PA;
    delete PB;
    delete PC;

    system("pause");
    return 0;
}