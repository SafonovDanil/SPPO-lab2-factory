#ifndef CPPUNIT_H
#define CPPUNIT_H
#include "ClassUnit.h"
#include "Unit.h"

class CppUnit: public ClassUnit
{
public:
    CppUnit(const std::string& name);
    std::string compile(unsigned int level = 0) const override;
};

#endif // CPPUNIT_H
