#ifndef IFACTORY_H
#define IFACTORY_H
#include <memory>
#include "MethodUnit.h"
#include "Unit.h"
class IFactory
{
public:
    using Flags = unsigned int;
    IFactory() = default;
    virtual std::shared_ptr<Unit> createClassUnit(const std::string& name, Flags flags) = 0;
    virtual std::shared_ptr<Unit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<Unit> createPrintOperatorUnit(const std::string& text) = 0;
    virtual ~IFactory() = default;
};

#endif // IFACTORY_H
