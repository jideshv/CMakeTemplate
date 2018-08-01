set(testsources
    MockWriteClass.h
    basic_tests.cpp
    main.cpp
)

add_executable(ExampleTest ${testsources})

target_link_libraries(ExampleTest SomeHeaderOnlyLibrary gtest_main gmock_main)

include(GoogleTest)

gtest_add_tests(TARGET ExampleTest)
