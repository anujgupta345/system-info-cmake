add_library(MEMORY)
target_sources(MEMORY PRIVATE src/memory.cpp)
target_include_directories(MEMORY PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
