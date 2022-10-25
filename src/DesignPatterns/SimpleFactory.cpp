#include "SimpleFactory.hpp"

namespace SimpleFactory
{

void SimpleFactoryTest()
{
    std::cout << "SimpleFactory Test:" << std::endl;

    Product* a = Factory::CreateProduct("A");
    Product* b = Factory::CreateProduct("B");

    std::cout << a->ToString() << std::endl;
    std::cout << b->ToString() << std::endl;

    delete a;
    delete b;
}

} // namespace SimpleFactory
