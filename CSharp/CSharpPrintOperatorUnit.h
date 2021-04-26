#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include "Unit.h"

class CSharpPrintOperatorUnit : public Unit {
public:
 explicit CSharpPrintOperatorUnit( const std::string& text ) :
m_text( text ) { }
 std::string compile( unsigned int level = 0 ) const {
 return generateShift( level ) + "Colsole.WriteLine(" + m_text + ")\n;";
 }
private:
 std::string m_text;
};

#endif // CSHARPPRINTOPERATORUNIT_H
