Download NDK and CMake for NDK. You can do this using android studio or upload via console.

Assemble openssl and load into the appropriate folder NDK.<br>
http://doc.qt.io/qt-5/opensslsupport.html

The hierarchy of the project has not changed much https://github.com/tdlib/td/issues/77#issuecomment-373172529<br>
You must use the current project java https://github.com/tdlib/td/tree/master/example/java. It shows an example of building the required library.<br>
You can also take from it all the necessary links for CMakeList.txt (Read about Boost in cmake)

Example of an assembly command<br>
<code>
/home/user/prog/android-sdk/cmake/3.6.4111459/bin/cmake -DANDROID_ABI=armeabi-v7a -DCMAKE_BUILD_TYPE=Release -G Ninja -DCMAKE_TOOLCHAIN_FILE=/home/user/prog/android-sdk/ndk-bundle/build/cmake/android.toolchain.cmake -DANDROID_NATIVE_API_LEVEL=23 -DANDROID_TOOLCHAIN=clang -DOPENSSL_ROOT_DIR=/home/user/prog/android-sdk/ndk-bundle/platforms/android-23/arch-arm/usr/lib/armeabi-v7a/ -DOPENSSL_INCLUDE_DIR=/home/user/prog/android-sdk/ndk-bundle/platforms/android-23/arch-arm/usr/lib/include/ -DCMAKE_LIBRARY_OUTPUT_DIRECTORY=/home/user/prog/td/jnibuild/ -DTD_ENABLE_JNI=ON -DANDROID_STL=c++_static ..
</code>

Perhaps you will come across a lot of other plot events during the assembly process. Which will need to be addressed.
