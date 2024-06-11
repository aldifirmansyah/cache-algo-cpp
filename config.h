#pragma once

#include <yaml-cpp/yaml.h>

namespace cache
{
    struct Config
    {
        int capacity{0};
        int ttl{0};
    };

    bool operator==(const Config &t_lhs, const Config &t_rhs);

    void operator>>(const YAML::Node &t_node, Config &out);
}