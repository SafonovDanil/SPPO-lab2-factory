#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include "Unit.h"

class CSharpPrintOperatorUnit : public Unit {
public:
 explicit CSharpPrintOperatorUnit( const std::string& text );
 std::string compile( unsigned int level = 0 ) const;
protected:
 std::string m_text;
};




#endif // CSHARPPRINTOPERATORUNIT_H
