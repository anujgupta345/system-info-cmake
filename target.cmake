add_executable(SYSTEMINFO src/main.cpp src/system_info.cpp)
target_link_libraries(SYSTEMINFO PRIVATE CPU ENDIAN MEMORY PLATFORM)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)  