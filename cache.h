#pragma once

namespace cache
{
  template <typename KeyType, typename ValueType>
  class Cache
  {
  public:
    virtual ~Cache() {};

    virtual void get(
        const KeyType &t_key,
        std::shared_ptr<ValueType> &out,
        CacheStatus &out_status) = nullptr;

    virtual void set(const KeyType &t_key, const std::shared_ptr<ValueType> &t_value, int t_ttl = 0) = nullptr;
  };
}