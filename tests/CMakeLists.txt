# tests/CMakeLists.txt

# Fetch test framework
include(FetchContent)
FetchContent_Declare(
  doctest
  GIT_REPOSITORY https://github.com/doctest/doctest.git
  GIT_TAG v2.4.11
)
FetchContent_MakeAvailable(doctest)

# Add test executable
add_executable(tests
        main.cpp
        ../src/processing/Processor.cpp
        processing/ProcessorTest.cpp
        ../src/calculation/FibonacciCalculator.cpp
        calculation/FibonacciCalculatorTest.cpp
)

# Link test executable against the test framework
target_link_libraries(tests doctest::doctest)

# Include test framework
include(CTest)

# Add a test
add_test(
  NAME Testing
  COMMAND tests
)
