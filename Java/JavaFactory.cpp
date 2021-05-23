#include "Java/JavaFactory.h"

JavaFactory::JavaFactory()
{
}
std::shared_ptr<Unit> JavaFactory::createClassUnit(const std::string& name,Flags type)
{
    return std::make_shared<JavaUnit>(name,type);
}

std::shared_ptr<Unit> JavaFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> JavaFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
