#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H
#include "ifactory.h"

#include "ClassUnit.h"
#include "MethodUnit.h"
#include "CSharpUnit.h"
#include "CSharpMethodUnit.h"
#include "CSharpPrintOperatorUnit.h"

class CSharpFactory: public IFactory
{
public:
    CSharpFactory();
    std::shared_ptr<Unit> createClassUnit(const std::string& name,Flags type) override;
    std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override;
};


#endif // CSHARPFACTORY_H
