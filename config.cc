#include "config.h"

namespace cache
{
    bool operator==(const Config &t_lhs, const Config &t_rhs)
    {
        return t_lhs.capacity == t_rhs.capacity && t_lhs.ttl == t_rhs.ttl;
    }
};