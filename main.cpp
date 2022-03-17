#include <iostream>
#include "system.h"
#include "generic.h"
#include "console.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

int main()
{
    UInt64 i;
    Dictionary<string, string> r;
    r["1"] = "5";
    Console::WriteLine(r["1"]);

    auto l = List<int>();
    l.push_back(2);
    Console::WriteLine(std::to_string(l.front()));

    cout << "Hello World!" << endl;
    return 0;
}
