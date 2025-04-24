#include <iostream>

namespace SimpleFactory
{

class Product
{
public:
    virtual ~Product() = default;
    virtual std::string ToString() = 0;
};

class A : public Product
{
public:
    std::string ToString() override
    {
        return "Product A";
    }
};

class B : public Product
{
public:
    std::string ToString() override
    {
        return "Product B";
    }
};

class Factory
{
public:
    static Product* CreateProduct(const std::string& type)
    {
        if (type == "A")
        {
            return new A();
        }
        else if (type == "B")
        {
            return new B();
        }

        return nullptr;
    }
};

void Test();

} // namespace SimpleFactory
