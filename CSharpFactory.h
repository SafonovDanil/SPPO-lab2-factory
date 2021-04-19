#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H
#include "ifactory.h"

class CSharpFactory : public IFactory
{
public:
    CSharpFactory() = default;

    std::shared_ptr<Unit> createClassUnit(const std::string& name) override
    {
        return std::make_shared<CSharpUnit>(name);
    }

    std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override
    {
        return std::make_shared<CSharpMethodUnit>(name, returnType, flags);
    }

    std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override
    {
        return std::make_shared<CSharpPrintOperatorUnit>(text);
    }
};


#endif // CSHARPFACTORY_H
