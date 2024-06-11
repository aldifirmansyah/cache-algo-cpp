#include "config.h"

namespace cache
{
    bool operator==(const Config &t_lhs, const Config &t_rhs)
    {
        return t_lhs.capacity == t_rhs.capacity && t_lhs.ttl == t_rhs.ttl;
    }

    void operator>>(const YAML::Node &t_node, Config &out)
    {
        if (t_node["capacity"].IsDefined())
        {
            out.capacity = t_node["capacity"].as<int>();
        }
        if (t_node["ttl"].IsDefined())
        {
            out.capacity = t_node["ttl"].as<int>();
        }
    }
};