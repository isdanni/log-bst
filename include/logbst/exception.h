#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_ 1

#include <exception>

class file_type_conflict : public std::exception {
    
};

class input_format_error : public std::exception{
    
};

class thread_pool_full : public std::exception{
    
};

class exit_cmd : public std::exception{
    
};

#endif 