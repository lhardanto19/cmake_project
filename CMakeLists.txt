cmake_minimum_required(VERSION 3.2)

project(Helloworld
	DESCRIPTION "Say hi to c++"
	LANGUAGES CXX)

add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)