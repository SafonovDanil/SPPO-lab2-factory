#include "CSharp/CSharpFactory.h"

SharpFactory::SharpFactory()
{
}
std::shared_ptr<Unit> SharpFactory::createClassUnit(const std::string& name,Flags type)
{
    return std::make_shared<CSharpUnit>(name,type);
}

std::shared_ptr<Unit> SharpFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<CSha>(name, returnType, flags);
}

std::shared_ptr<Unit> SharpFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<CSharpPrintOperatorUnit>(text);
}
