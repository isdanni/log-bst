#ifndef _API_H_
#define _API_H_ 1

#include <buffer.h>

class API {
    public: API();
    ~API();
    void create_buffer_pool();
    bool is_buffer_success();
};

#endif