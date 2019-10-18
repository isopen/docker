cmake_minimum_required(VERSION 3.15)
project(tgvoipcall)

set(CMAKE_CXX_STANDARD 14)

add_executable(tgvoipcall main.cpp MockReflector.cpp MockReflector.h)

find_package(OpenSSL)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/libs/include)

target_link_libraries(tgvoipcall ${PROJECT_SOURCE_DIR}/libs/libtgvoip.so Threads::Threads ${OPENSSL_LIBRARIES})