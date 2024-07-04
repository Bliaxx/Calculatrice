file(GLOB_RECURSE HEADERS ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(Calculatrice ${HEADERS} ${SOURCES})