#ifndef GENERIC_H
#define GENERIC_H

#include <map>
#include <vector>

namespace System {
    namespace Collections {
        namespace Generic {
            template <typename N, typename R>
            using Dictionary = std::map<N, R>;

            template <typename N>
            using List = std::vector<N>;
        };
    };
};

#endif // GENERIC_H
