cmake_minimum_required(VERSION 3.6)
project(HW6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Dictionary.h KeyValue.h)
add_executable(HW6 main.cpp ${SOURCE_FILES})

set(TEST_FILES Testing/testMain.cpp Testing/dictionaryTester.cpp Testing/dictionaryTester.h Testing/keyValueTester.cpp Testing/keyValueTester.h)

add_executable(Test  ${TEST_FILES} )

