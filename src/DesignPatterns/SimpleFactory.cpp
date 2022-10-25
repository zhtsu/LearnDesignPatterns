#include "SimpleFactory.hpp"

namespace SimpleFactory
{

void SimpleFactoryTest()
{
    Factory factory;
    
    Product* a = factory.CreateProduct("A");
    Product* b = factory.CreateProduct("B");

    std::cout << a->ToString() << std::endl;
    std::cout << b->ToString() << std::endl;

    delete a;
    delete b;
}

} // namespace SimpleFactory
