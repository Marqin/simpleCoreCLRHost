function(check_for_cxx_filesystem_support)
    try_compile(has_filesytem_support ${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR}/cmake/cxx_filesystem.cpp)
    if(has_filesytem_support)
        message(STATUS "Checking support for Filesystem in C++17: works")
    else()
        message(FATAL_ERROR "Checking for C++17 Filesystem Library support in compiler: not supported")
    endif()
endfunction()