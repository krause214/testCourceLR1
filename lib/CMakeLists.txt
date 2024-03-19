add_library(lr1_lib lr1.cpp "../out/lr1.h")

configure_file(tests.txt ${CMAKE_CURRENT_BINARY_DIR}/tests.txt COPYONLY)