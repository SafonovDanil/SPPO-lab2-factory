#include "CSharp/CSharpFactory.h"

CSharpFactory::CSharpFactory()
{
}
std::shared_ptr<Unit> CSharpFactory::createClassUnit(const std::string& name,Flags type)
{
    return std::make_shared<CSharpUnit>(name,type);
}

std::shared_ptr<Unit> CSharpFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<CSharpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> CSharpFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<CSharpPrintOperatorUnit>(text);
}
