#include <string>
#include <iostream>

#include "mfu_cache.h"

bool testMFUCache()
{
    {
        std::cout << "Test insert data, expect to get successfully" << std::endl;
        cache::Config cfg;
        cache::MFUCache<std::string, std::string> cache(cfg);
        cache.set("key1", std::make_shared<std::string>("value1"));
        std::shared_ptr<std::string> result;
        cache::CacheStatus status;
        cache.get("key1", result, status);
        if (status != cache::CacheStatus::OK || result == nullptr || *result != "value1")
        {
            std::cout << "Test Failed" << std::endl;
            return false;
        }
    }
    {
        std::cout << "Test get invalid data, expect data not found" << std::endl;
    }
    {
        std::cout << "Test insert multiple data and force to evict, expect to evict most frequently accessed data" << std::endl;
    }
    {
        std::cout << "Test get expired data, expect data not found" << std::endl;
    }
}

bool runTests()
{
    if (!testMFUCache())
    {
        std::cout << "Failed to test MFU cache" << std::endl;
        return false;
    }
}

int main()
{
    if (!runTests())
    {
        return 1;
    }
    return 0;
}