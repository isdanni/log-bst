#include "logbst/fmt/fmt.h"
#include "logbst/fmt/fmt_bin.h"
#include "logbst/common/common.h"

#ifdef SPDLOG_FMT_EXTERNAL
#else
#    include "logbst/fmt/fmt.h"
#endif

/**
 * third party API
 * **/
#include <atomic>
#include <cstdlib>
#include <memory>
#include <string>
#include <thread>

/**
 * threaded benchmarking
 * **/