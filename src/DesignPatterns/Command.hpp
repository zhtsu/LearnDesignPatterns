#pragma once

#include <iostream>

namespace Command
{

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

class JumpCommand : public Command
{
public:
    void execute() override
    {
        std::cout << "Jump" << std::endl;
    }
};

class AttackCommand : public Command
{
public:
    void execute() override
    {
        std::cout << "Attack" << std::endl;
    }
};

void Test();

} // namespace FactoryMethod

