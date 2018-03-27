aux_source_directory(${CMAKE_CURRENT_LIST_DIR} LIB_SRC_LIST)
add_library(apue STATIC ${LIB_SRC_LIST} ${APUE_HEADER})
#set_target_properties(apue PROPERTIES VERSION 1.1 SOVERSION 1)
