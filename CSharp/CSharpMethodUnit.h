#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include "MethodUnit.h"

class CSharpMethodUnit: public MethodUnit
{
public:
    CSharpMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    std::string compile( unsigned int level) const;
};


#endif // CSHARPMETHODUNIT_H
