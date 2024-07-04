target_include_directories(CalculatorEXE ${PROJECT_SOURCE_DIR}/include/calculator/ast)
target_include_directories(CalculatorEXE ${PROJECT_SOURCE_DIR}/include/calculator/core)
target_include_directories(CalculatorEXE ${PROJECT_SOURCE_DIR}/include/calculator/operations)
target_include_directories(CalculatorEXE ${PROJECT_SOURCE_DIR}/include/calculator/parser)

file(GLOB_RECURSE HEADERS ${PROJECT_SOURCE_DIR}/include/*.hpp)

target_sources(CalculatorEXE ${HEADERS})