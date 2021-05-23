#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include "MethodUnit.h"

class CppMethodUnit: public MethodUnit
{
public:
    CppMethodUnit(const std::string& name, const std::string& returnType, Flags flags );
    std::string compile( unsigned int level) const;
};

#endif // CPPMETHODUNIT_H
