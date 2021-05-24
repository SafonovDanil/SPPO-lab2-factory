#include "CSharp/CSharpPrintOperatorUnit.h"

CSharpPrintOperatorUnit::CSharpPrintOperatorUnit(const std::string& text): m_text( text ) { }
std::string CSharpPrintOperatorUnit::compile( unsigned int level) const
{
 return generateShift( level ) + "Colsole.WriteLine(" + m_text + ")\n;";
 };












