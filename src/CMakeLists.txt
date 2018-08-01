# This is an example of a header only library

set(header_files
    ${CMAKE_CURRENT_SOURCE_DIR}/SomeHeaderOnlyLibrary.h)

add_library(SomeHeaderOnlyLibrary INTERFACE)

target_sources(SomeHeaderOnlyLibrary INTERFACE ${header_files})

target_include_directories(SomeHeaderOnlyLibrary INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
