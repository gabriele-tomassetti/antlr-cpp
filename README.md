# Getting started with ANTLR in C++

ANTLR is a great tool to quickly create parsers and help you in working with a known language or create your DSL. While the tool itself is written in Java it can also be used to generate parsers in several other languages, for instance Python, C#, Javascript, C++, etc.

This example shows how to parse a data format file with ANTLR in C++.

The project can run on Windows, Linux and Mac. To build it you need CMake installed on your system. On Windows you need a version of Visual Studio that include support for C++.

To solve many common issues with C++ building on different platforms this project is now based on the [CMake script from the official ANTLR4 Cpp Runtime](https://github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake). This should deal with many typical issues in building a C++ projects on different setups and platforms. However, be warned that this will download the ANTLR C++ runtime from the official git repository and will build it. Therefore build time for the first build will be long.

```
# create a build directory to keep the main one clean
mkdir build
cd build
# to run CMake
cmake ../
# to build on Linux and Mac
make
# run the executable
./antlr4-tutorial
# to build and run on Windows
# open the "Antlr-cpp-tutorial.sln" file with Visual Studio generate by CMake inside the build directory
# build and run the project antlr-tutorial (do not select the auto-generated ALL_BUILD)
```

The CMake build script will also generate the ANTLR parser automatically. However, you may want to generate the parser manually during development with this command:

```
# generate the ANTLR components (you have to setup ANTLR in your system, before performing this step)
antlr4 -Dlanguage=Cpp -no-listener -visitor -o libs Scene.g4
```

## Dependenciens and Optional Libraries

While building the project you may receive some warnings about missing optional libraries. These warnings could be similar to the following:

```
-- Could NOT find PkgConfig (missing: PKG_CONFIG_EXECUTABLE)
CMake Warning at CMakeLists.txt:76 (FIND_PACKAGE):
  By not providing "FindOpenCV.cmake" in CMAKE_MODULE_PATH this project has
  asked CMake to find a package configuration file provided by "OpenCV", but
  CMake did not find one.

  Could not find a package configuration file provided by "OpenCV" with any
  of the following names:

    OpenCVConfig.cmake
    opencv-config.cmake

  Add the installation prefix of "OpenCV" to CMAKE_PREFIX_PATH or set
  "OpenCV_DIR" to a directory containing one of the above files.  If "OpenCV"
  provides a separate development package or SDK, be sure it has been
  installed.


-- Could NOT find JPEG (missing: JPEG_LIBRARY JPEG_INCLUDE_DIR)
-- Could NOT find TIFF (missing: TIFF_LIBRARY TIFF_INCLUDE_DIR)
-- Could NOT find ZLIB (missing: ZLIB_LIBRARY ZLIB_INCLUDE_DIR)
-- Could NOT find PNG (missing: PNG_LIBRARY PNG_PNG_INCLUDE_DIR)
-- Could NOT find ZLIB (missing: ZLIB_LIBRARY ZLIB_INCLUDE_DIR)
-- Could NOT find BLAS (missing: BLAS_LIBRARIES)
-- Could NOT find LAPACK (missing: LAPACK_LIBRARIES)
    Reason given by package: LAPACK could not be found because dependency BLAS could not be found.

-- Could NOT find BLAS (missing: BLAS_LIBRARIES)
```

These library powers optional features that are available with CImg, the library we have included in the example. These libraries are irrelevant to our example, since we do not use these features. However, we prefer leaving the search for optional libraries there in case somebody needs to use additional CImg functionality.

Instead there are required dependencies that varies depending on the platform (e.g. Xrandr if you are on a platform that uses X11). You will recognize these dependencies because the project will fail to compile in case they are missing.

**You can read an article on the example on [Getting started with ANTLR in C++](https://tomassetti.me/getting-started-antlr-cpp/)**
