cmake_minimum_required(VERSION 3.13)

project(
	cpp_test_app
	VERSION 1.0.0
	LANGUAGES CXX
)

find_package(Boost 1.67.0 REQUIRED)
find_package(SDL2 REQUIRED)

add_executable(
	cpp_test_app
	main.cpp
)

target_link_libraries(
	cpp_test_app
	Boost::boost
	SDL2::SDL2
)

install(TARGETS cpp_test_app)

