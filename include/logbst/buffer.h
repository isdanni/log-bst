#ifndef _BUFFER_H_ 
#define _BUFFER_H_ 1

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

class Buffer {
    public: Buffer();
    void init_buffer();
    void get_buffer_size();
    void get_buffer_ref();
    void set_buffer_size();
    void get_available_buffer();
    bool is_this_buffer_blocked(bool not_blocked);
};
class BufferManager {
    public: BufferManager();

};
#endif