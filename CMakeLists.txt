cmake_minimum_required( VERSION 2.8 )

option( BENCHMARK_ENABLE_GTEST_TESTS "" OFF )
if( WIN32 )
    option( gtest_force_shared_crt "" TRUE )
endif( WIN32 )

add_subdirectory( 3rdparty/googletest )
if( NOT APPLE )
    add_subdirectory( 3rdparty/benchmark )
endif( NOT APPLE )

include( cmake/Configure.cmake )
include( cmake/PrecompiledHeader.cmake )

add_subdirectory( modules )
add_subdirectory( tests )
if( NOT APPLE )
    add_subdirectory( benchmark )
    add_subdirectory( samples )
endif( NOT APPLE )

# if (MSVC)
#     add_precompiled_header(pch modules/pch/pch.h SOURCE_CXX modules/pch/pch.cpp FORCEINCLUDE)
# endif(MSVC)
