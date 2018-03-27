project(cmake)
cmake_minimum_required(VERSION 3.0)

set(APUE_VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -DMACOS -D_DARWIN_C_SOURCE")
set(CMAKE_C_FLAGS_DEBUG "-ggdb -O0")

set(APUE_HEADER "${CMAKE_HOME_DIRECTORY}/include/apue.h")
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

include_directories(include)
add_subdirectory(lib)
add_executable(apue main.c ${APUE_HEADER})
target_link_libraries(apue apue_static)
#target_link_libraries(apue apue_shared)
set_target_properties(apue PROPERTIES INSTALL_RPATH "@loader_path/../lib")

install(TARGETS apue RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(FILES ${APUE_HEADER} DESTINATION include)
