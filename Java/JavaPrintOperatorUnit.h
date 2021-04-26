#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "Unit.h"

class JavaPrintOperatorUnit : public Unit {
public:
 explicit JavaPrintOperatorUnit( const std::string& text ) :
m_text( text ) { }
 std::string compile( unsigned int level = 0 ) const {
 return generateShift( level ) + "System.out.print(" + m_text
+ "\" );\n";
 }
private:
 std::string m_text;
};


#endif // JAVAPRINTOPERATORUNIT_H
