#include <QCoreApplication>

#include "Unit.h"
#include "ifactory.h"
#include "ClassUnit.h"
#include "MethodUnit.h"

#include "Cpp/CppUnit.h"
#include "Cpp/CppMethodUnit.h"
#include "Cpp/CppPrintOperatorUnit.h"
#include "Cpp/CppFactory.h"


#include "CSharp/CSharpUnit.h"
#include "CSharp/CSharpMethodUnit.h"
#include "CSharp/CSharpPrintOperatorUnit.h"
#include "CSharp/CSharpFactory.h"

#include "Java/JavaUnit.h"
#include "Java/JavaMethodUnit.h"
#include "Java/JavaPrintOperatorUnit.h"
#include "Java/JavaFactory.h"

//std::string generateProgram() {
// ClassUnit myClass( "MyClass" );
// myClass.add(
// std::make_shared< MethodUnit >( "testFunc1", "void", 0 ),
// ClassUnit::PUBLIC
// );
// myClass.add(
// std::make_shared< MethodUnit >( "testFunc2", "void",
//MethodUnit::STATIC ),
// ClassUnit::PRIVATE
// );
// myClass.add(
// std::make_shared< MethodUnit >( "testFunc3", "void",
//MethodUnit::VIRTUAL | MethodUnit::CONST ),
// ClassUnit::PUBLIC
// );
// auto method = std::make_shared< MethodUnit >( "testFunc4",
//"void", MethodUnit::STATIC );
// method->add( std::make_shared< PrintOperatorUnit >( R"(Hello,
//world!\n)" ) );
// myClass.add( method, ClassUnit::PROTECTED );
// return myClass.compile();
//}

std::string generateProgram(IFactory* factory) {

    std::shared_ptr<Unit> myClass = factory->createClassUnit("MyClass", ClassUnit::PRIVATE);
    myClass->add(factory->createMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);
       myClass->add(factory->createMethodUnit("testFunc2", "void",MethodUnit::STATIC), ClassUnit::PRIVATE);
       myClass->add(factory->createMethodUnit("testFunc3", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PUBLIC);
       myClass->add(factory->createMethodUnit("testFunc6", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::INTERNAL);
       myClass->add(factory->createMethodUnit("testFunc5", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PROTECTED_INTERNAL);
       auto method=(factory->createMethodUnit("testFunc4","void", MethodUnit::STATIC));
       myClass->add(factory->createMethodUnit("testFunc7", "void",MethodUnit::ABSTRACT), ClassUnit::PRIVATE);
       method->add(factory->createPrintOperatorUnit(R"(Hello,world!\n)"), 0);
       myClass->add(method, ClassUnit::PROTECTED);
       return myClass->compile();
}



int main()
{
    //CppFactory cppfactory;
    //CSharpFactory csharpfactory;
    JavaFactory javafactory;
    //std::cout << generateProgram(&cppfactory) << std::endl;
    //std::cout << generateProgram(&csharpfactory) << std::endl;
    std::cout << generateProgram(&javafactory) << std::endl;
    return 0;
}



