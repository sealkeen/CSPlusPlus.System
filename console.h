#ifndef CONSOLE_H
#define CONSOLE_H
#include <QString>
#include <iostream>

namespace System {
    class Console
    {
    public:
        Console();

        static void WriteLine(const  char *);
        static void WriteLine(std::string);
        static void WriteLine(QString);
    };
}

#endif // CONSOLE_H
