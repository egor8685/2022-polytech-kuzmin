cmake_minimum_required()

project(sort)

add_executable(sort fill_array_random.cpp quick_sort.cpp selection_sort.cpp time.cpp)

find_package(OpenMP REQUIRED)

target_link_libraries(sort PRIVATE OpenMP::OpenMP_CXX)
