#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H


#include "ifactory.h"
#include "JavaUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

class JavaFactory : public IFactory
{
public:
    JavaFactory() = default;

    std::shared_ptr<Unit> createClassUnit(const std::string& name) override
    {
        return std::make_shared<JavaUnit>(name);
    }

    std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override
    {
        return std::make_shared<JavaMethodUnit>(name, returnType, flags);
    }

    std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override
    {
        return std::make_shared<JavaPrintOperatorUnit>(text);
    }
};



#endif // JAVAFACTORY_H
