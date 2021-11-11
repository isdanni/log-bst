#ifndef LOG_BST_LIB
#    error Please add your LOG_BST_LIB definition.
#endif

#include <stdio.h>
#include<stdlib.h> 
#include <mutex>

template class LOG__BST log::pool::base_pool<std::mutex>;
