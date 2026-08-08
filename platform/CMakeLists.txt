add_library(PLATFORM STATIC)
target_sources(PLATFORM PRIVATE src/platform.cpp)
if(UNIX)
    target_sources(PLATFORM PRIVATE unix/src/unix.cpp)
elseif(WIN32)
    target_sources(PLATFORM PRIVATE windows/src/windows.cpp)
endif()
target_include_directories(PLATFORM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#rememberCMAKE_SYSTEM_.. commands and complie information
target_compile_definitions(PLATFORM PRIVATE
    TARGET_OS_NAME="${CMAKE_SYSTEM_NAME}"
    TARGET_OS_VERSION="${CMAKE_SYSTEM_VERSION}"
    TARGET_PROCESSOR="${CMAKE_SYSTEM_PROCESSOR}"
    TARGET_POINTER_SIZE=${CMAKE_SIZEOF_VOID_P}
    TARGET_BYTE_ORDER="${CMAKE_CXX_BYTE_ORDER}")