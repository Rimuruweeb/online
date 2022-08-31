#include <iostream>

#include "config.h"

#include <net/HttpRequest.hpp>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size)
{
    http::Response response;
    for (size_t i = 0; i < size; ++i)
        response.readData(reinterpret_cast<const char*>(data), i);
    return 0;
}

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
