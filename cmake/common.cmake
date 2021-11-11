set_directory_properties(M_LOCK)
set_property(M_LOCK_FMT)
set_source_files_properties(M_LOCK_LISTING)

if(VERSION)
    set_tests_properties("${DIRECTORY_NAME}" .)
    