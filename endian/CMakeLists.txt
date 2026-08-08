add_library(ENDIAN)
target_sources(ENDIAN PRIVATE src/endian.cpp)
target_include_directories(ENDIAN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
