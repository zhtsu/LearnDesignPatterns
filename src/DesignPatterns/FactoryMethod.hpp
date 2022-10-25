#pragma once

#include <iostream>

namespace FactoryMethod
{

class Product
{
public:
    virtual ~Product() = default;
    virtual std::string ToString() = 0;
};

class Factory
{
public:
    virtual ~Factory() = default;
    virtual  Product* CreateProduct() = 0;
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

class AFactory : public Factory
{
public:
    Product* CreateProduct() override
    {
        return new A();
    }
};

class BFactory : public Factory
{
public:
    Product* CreateProduct() override
    {
        return new B();
    }
};

void FactoryMethodTest();

} // namespace FactoryMethod

