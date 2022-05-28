cmake_minimum_required(VERSION 3.0)
if (POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

PROJECT(TestOpenCV)

set(OpenCV_DIR "${PROJECT_SOURCE_DIR}/Externals/OpenCV/x86/vc16/lib" CACHE FILEPATH "Set to find OpenCV")

message(WARNING "OpenCV_DIR: ${OpenCV_DIR}")

find_package(OpenCV CONFIG REQUIRED NO_DEFAULT_PATH)

endif(RVC_EXTERNAL_WITH_OPENCV)
# end

 add_executable( TestOpenCV test.cpp)
 target_link_libraries( TestOpenCV ${OpenCV_LIBS} )