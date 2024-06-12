#pragma once

namespace cache
{
    struct Config
    {
        int capacity{0};
        int ttl{0};
    };

    bool operator==(const Config &t_lhs, const Config &t_rhs);
}