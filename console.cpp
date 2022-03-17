#include "console.h"

using namespace System;

Console::Console()
{

}

void Console::WriteLine(const  char * line)
{
    std::cout << line << "\n";
}

void Console::WriteLine(std::string line)
{
    std::cout << line << "\n";
}

void Console::WriteLine(QString line)
{
    std::cout << line.toStdString() << "\n";
}
