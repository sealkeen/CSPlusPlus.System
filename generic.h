#ifndef GENERIC_H
#define GENERIC_H

#include <map>

namespace System::Collections::Generic
{
    template <typename N, typename R>
    using Dictionary = std::map<N, R>;

    template <typename N>
    using List = std::vector<N>;
};

#endif // GENERIC_H
