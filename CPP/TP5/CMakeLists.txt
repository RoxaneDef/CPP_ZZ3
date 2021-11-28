# Project #-----------------------------------------------------------------------------------------
project(tp5)

cmake_minimum_required(VERSION 2.8.9)

find_package(Threads)

# C++ Warning Level #-------------------------------------------------------------------------------
if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wall -pedantic ${CMAKE_CXX_FLAGS}")
endif ()

# C++11 #-------------------------------------------------------------------------------------------
include(CheckCXXCompilerFlag)

check_cxx_compiler_flag("-std=gnu++14" COMPILER_SUPPORTS_CPP14)
check_cxx_compiler_flag("-std=gnu++1y" COMPILER_SUPPORTS_CPP1Y)
check_cxx_compiler_flag("-std=gnu++11" COMPILER_SUPPORTS_CPP11)
check_cxx_compiler_flag("-std=gnu++0x" COMPILER_SUPPORTS_CPP0X)

if (COMPILER_SUPPORTS_CPP14)
    set(CMAKE_CXX_FLAGS "-std=gnu++14 ${CMAKE_CXX_FLAGS}")
elseif (COMPILER_SUPPORTS_CPP1Y)
    set(CMAKE_CXX_FLAGS "-std=gnu++1y ${CMAKE_CXX_FLAGS}")
elseif (COMPILER_SUPPORTS_CPP11)
    set(CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
elseif (COMPILER_SUPPORTS_CPP0X)
    set(CMAKE_CXX_FLAGS "-std=gnu++0x ${CMAKE_CXX_FLAGS}")
else ()
    message(STATUS "Compiler ${CMAKE_CXX_COMPILER} has no C++11/14 support.")
endif ()

message(STATUS "Compiler flags: ${CMAKE_CXX_FLAGS}")

# Sources #-----------------------------------------------------------------------------------------
set(ZZ3_HEADERS
        src/classe.hpp
        src/echantillon.hpp
        src/valeur.hpp
        src/histogramme.hpp
        src/comparateur.hpp
        )

set(ZZ3_SOURCES
        src/classe.cpp
        src/echantillon.cpp
        src/valeur.cpp
        )

set(ZZ3_HEADERS_TEST
        )

set(ZZ3_SOURCES_TEST
        )

include_directories(src/)

# Executables #-------------------------------------------------------------------------------------
add_executable(histo_${CMAKE_PROJECT_NAME}
        src/main_histo.cpp
        ${ZZ3_HEADERS}
        ${ZZ3_SOURCES}
        )

add_executable(test_${CMAKE_PROJECT_NAME}
        test/catch.cpp
        test/${CMAKE_PROJECT_NAME}_test.cpp
        ${ZZ3_HEADERS}
        ${ZZ3_SOURCES}
        ${ZZ3_HEADERS_TEST}
        ${ZZ3_SOURCES_TEST}
        )

# Build #-------------------------------------------------------------------------------------------
set_target_properties(histo_${CMAKE_PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(histo_${CMAKE_PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})

set_target_properties(test_${CMAKE_PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(test_${CMAKE_PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
