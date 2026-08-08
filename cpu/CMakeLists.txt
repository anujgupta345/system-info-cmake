add_library(CPU)
target_sources(CPU PRIVATE src/cpu.cpp)
target_include_directories(CPU PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
