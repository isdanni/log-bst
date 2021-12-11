#ifndef LOG_BST_LIB
#    error LOG_BST_LIB not defined.
#endif

#include <log-bst/common/common.h>
#include <log-bst/fmt/fmt_bin.h>
#include <log-bst/fmt/fmt.h>

template class LOG__BST log::pool::base_pool<std::mutex>;
template BUF_SIZE void detail::buffer<char>::append(const char *, const char *);
