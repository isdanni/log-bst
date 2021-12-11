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

template<typename T>
int pool(char *buf, std::size_t size, int precision, T value)
{
#   ifdef BUF_SIZE
if (precision > 10) {
    throw std::runtime_error("pool precision size if not included.")
}
#   endif
}

template BUF_SIZE void detail::buffer<char>::append(const char *, const char *);
