vcpkg --triplet x64-windows install openssl zlib
cmake .. -DCMAKE_TOOLCHAIN_FILE=C:\src\vcpkg\scripts\buildsystems\vcpkg.cmake -A x64
cmake --build . --config Release
