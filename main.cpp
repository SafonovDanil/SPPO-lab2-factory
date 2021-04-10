#include <QCoreApplication>

#include "Unit.h"
#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"
#include "ifactory.h"
#include "SomeFactory.h"


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
    ClassUnit myClass("MyClass" );

    myClass.add(factory->createMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);

    myClass.add(factory->createMethodUnit("testFunc2", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);

    myClass.add(factory->createMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PUBLIC);

    auto method = factory->createMethodUnit("testFunc4", "void", MethodUnit::STATIC);

    method->add(factory->createPrintOperatorUnit(R"(Hello,world!\n)"));

    myClass.add(method, ClassUnit::PROTECTED );

    return myClass.compile();
}


int main()
{
    SomeFactory factory;
    std::cout << generateProgram(&factory) << std::endl;
    return 0;
}



