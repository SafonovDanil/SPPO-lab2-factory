#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H


#include "ifactory.h"
#include "JavaUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

class JavaFactory: public IFactory
{
public:
    JavaFactory();
    std::shared_ptr<Unit> createClassUnit(const std::string& name,Flags type) override;
    std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override;
};


#endif // JAVAFACTORY_H
