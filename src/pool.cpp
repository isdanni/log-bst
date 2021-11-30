#ifndef LOG_BST_LIB
#    error LOG_BST_LIB not defined.
#endif

#include <log-bst/common/common.h>
#include <log-bst/pool/base_pool.h>
#include <log-bst/pool/pool.h>
#include <log-bst/runtime/api.h>
#include <log-bst/runtime/buffer.h>

#include <mutex>

template class LOG__BST log::pool::base_pool<std::mutex>;
