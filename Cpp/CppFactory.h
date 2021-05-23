#ifndef CPPFACTORY_H
#define CPPFACTORY_H

#include "ifactory.h"
#include "Unit.h"
#include "ClassUnit.h"
#include "CppUnit.h"
#include "CppMethodUnit.h"
#include "CppPrintOperatorUnit.h"

class CppFactory: public IFactory
{
public:
    CppFactory();
    std::shared_ptr<Unit> createClassUnit(const std::string& name,Flags type) override;
    std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // CPPFACTORY_H
