cmake_minimum_required(VERSION 3.0)
if (POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

PROJECT(TestOpenCV)

IF(CMAKE_CL_64)
  set(OpenCV_DIR "${PROJECT_SOURCE_DIR}/Externals/OpenCV/x64/vc16/lib" CACHE FILEPATH "Set to find OpenCV")
ELSE(CMAKE_CL_64)
  set(OpenCV_DIR "${PROJECT_SOURCE_DIR}/Externals/OpenCV/x86/vc16/lib" CACHE FILEPATH "Set to find OpenCV")
ENDIF(CMAKE_CL_64)

message(WARNING "OpenCV_DIR: ${OpenCV_DIR}")

find_package(OpenCV CONFIG REQUIRED NO_DEFAULT_PATH)

add_executable( TestOpenCV test.cpp)
target_link_libraries( TestOpenCV ${OpenCV_LIBS} )