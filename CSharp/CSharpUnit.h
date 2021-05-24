#ifndef CSHARPUNIT_H
#define CSHARPUNIT_H

#include "ClassUnit.h"

class CSharpUnit: public ClassUnit
{
public:
    CSharpUnit(const std::string& name, Flags flags);
    std::string compile(unsigned int level = 0) const override;
private:
    Flags Type;
};


#endif // CSHARPUNIT_H
