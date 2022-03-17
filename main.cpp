#include <iostream>
#include "system.h"
#include "generic.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

int main()
{

    UInt64 i;
    Dictionary<string, string> r;
    r["1"] = "5";

    auto l = List<int>();
    l.push_back(2);

    cout << "Hello World!" << endl;
    return 0;
}
