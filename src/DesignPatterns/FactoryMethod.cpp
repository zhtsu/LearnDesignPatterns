#include "FactoryMethod.hpp"

namespace FactoryMethod
{

void FactoryMethodTest()
{
    std::cout << "FactoryMethod Test:" << std::endl;

    AFactory* af = new AFactory();
    BFactory* bf = new BFactory();

    Product* a = af->CreateProduct();
    Product* b = bf->CreateProduct();

    std::cout << a->ToString() << std::endl;
    std::cout << b->ToString() << std::endl;

    delete af;
    delete bf;
    delete a;
    delete b;
}

} // namespace FactroyMethod
