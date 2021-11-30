#ifndef LOG_BST_LIB
#    error LOG_BST_LIB not defined.
#endif

#include <stdio.h>
#include <stdlib.h> 
#include <mutex>

template class LOG__BST log::pool::base_pool<std::mutex>;
