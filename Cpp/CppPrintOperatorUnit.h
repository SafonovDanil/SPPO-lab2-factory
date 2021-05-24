#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include "Unit.h"

class CppPrintOperatorUnit : public Unit {
public:
 explicit CppPrintOperatorUnit( const std::string& text );
 std::string compile( unsigned int level = 0 ) const;
protected:
 std::string m_text;
};

#endif // CPPPRINTOPERATORUNIT_H
