#ifndef IFACTORY_H
#define IFACTORY_H
#include <memory>

#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

class IFactory
{
public:
    IFactory() = default;
    using Flags = unsigned int;
    virtual std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) = 0;
    virtual std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) = 0;

    virtual ~IFactory() = default;
};

#endif // IFACTORY_H
