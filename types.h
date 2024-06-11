#pragma once

namespace cache
{
    enum class CacheStatus : int
    {
        OK = 0,
        CACHE_MISS = 1,

        ERROR = 200, // general error
    };
}