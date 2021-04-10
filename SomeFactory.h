#ifndef SOMEFACTORY_H
#define SOMEFACTORY_H

#include "ifactory.h"

class SomeFactory : public IFactory
{
public:
    SomeFactory() = default;

    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) override
    {
        return std::make_shared<ClassUnit>(name);
    }

    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override
    {
        return std::make_shared<MethodUnit>(name, returnType, flags);
    }

    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override
    {
        return std::make_shared<PrintOperatorUnit>(text);
    }
};


#endif // SOMEFACTORY_H
