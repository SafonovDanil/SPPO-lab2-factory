#ifndef IFACTORY_H
#define IFACTORY_H
#include <memory>

#include "CppUnit.h"
#include "CppMethodUnit.h"
#include "CppPrintOperatorUnit.h"

class IFactory
{
public:
    IFactory() = default;
    using Flags = unsigned int;
    virtual std::shared_ptr<CppUnit> createClassUnit(const std::string& name) = 0;
    virtual std::shared_ptr<CppMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<CppPrintOperatorUnit> createPrintOperatorUnit(const std::string& text) = 0;

    virtual ~IFactory() = default;
};

#endif // IFACTORY_H
