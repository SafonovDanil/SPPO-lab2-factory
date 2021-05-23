#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "Unit.h"

class JavaPrintOperatorUnit : public Unit {
public:
 explicit JavaPrintOperatorUnit( const std::string& text );
 std::string compile( unsigned int level = 0 ) const;
protected:
 std::string m_text;
};




#endif // JAVAPRINTOPERATORUNIT_H
