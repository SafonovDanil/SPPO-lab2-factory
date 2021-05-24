#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "MethodUnit.h"
class JavaMethodUnit: public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags );
    std::string compile( unsigned int level) const;
};



#endif // JAVAMETHODUNIT_H
