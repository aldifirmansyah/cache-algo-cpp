#pragma once

#include "config.h"
#include "types.h"

namespace cache
{
    template <typename KeyType, typename ValueType>
    class MFUCache : public Cache
    {
    public:
        explicit MFUCache(const Config &t_config);

        void get(
            const KeyType &t_key,
            std::shared_ptr<ValueType> &out,
            CacheStatus &out_status) override;

        void set(const KeyType &t_key, const std::shared_ptr<ValueType> &t_value, int t_ttl = 0) override;

    private: // method
    private: // property
        std::unordered_map<KeyType, ValueType> m_map{};
    };
}