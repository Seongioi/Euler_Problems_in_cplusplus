cmake_minimum_required(VERSION 3.7)
project(Euler_Problems_in_cplusplus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

add_executable(ID_001_Multiples_of_3_and_5 ID_001_Multiples_of_3_and_5.cpp ID_012_Highly_divisible_triangular_number.cpp)
add_executable(ID_002_Even_Fibonacci_numbers ID_002_Even_Fibonacci_numbers.cpp)
add_executable(ID_003_Largest_prime_factor ID_003_Largest_prime_factor.cpp)
add_executable(ID_004_Largest_palindrome_product ID_004_Largest_palindrome_product.cpp)
add_executable(ID_005_Smallest_multiple "ID_005_Smallest_multiple.cpp")
add_executable(ID_006_Sum_square_difference ID_006_Sum_square_difference.cpp)
add_executable(ID_007_10001st_prime ID_007_10001st_prime.cpp)
add_executable(ID_010_Summation_of_primes ID_010_Summation_of_primes.cpp)
add_executable(ID_012_Highly_divisible_triangular_number ID_012_Highly_divisible_triangular_number.cpp)
add_executable(ID_013_Large_Sum ID_013_Large_Sum.cpp)