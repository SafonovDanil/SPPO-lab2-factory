#include "Cpp/CppFactory.h"
#include "Cpp/CppMethodUnit.h"

CppFactory::CppFactory()
{
}
std::shared_ptr<Unit> CppFactory::createClassUnit(const std::string& name,Flags type = 0)
{
     return std::make_shared<CppUnit>(name);
}

std::shared_ptr<Unit> CppFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<CppMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> CppFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<CppPrintOperatorUnit>(text);
}
