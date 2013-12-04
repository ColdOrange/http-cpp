#pragma once

#include "http-cpp.hpp"

namespace http {

    enum operation {
        HTTP_GET,
        HTTP_HEAD,
        HTTP_POST,
        HTTP_PUT,
        HTTP_DELETE
    };

    HTTP_API bool operation_is_known(http::operation op);

    HTTP_API const char* operation_to_string(http::operation op);

} // namespace http
