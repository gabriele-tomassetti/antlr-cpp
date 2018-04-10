# Getting started with ANTLR in C++

ANTLR is a great tool to quickly create parsers and help you in working with a known language or create your DSL. While the tool itself is written in Java it can also be used to generate parsers in several other languages, for instance Python, C#, Javascript, C++, etc.

This example shows how to parse a data format file with ANTLR in C++.

The project can run on Windows, Linux and Mac. To build it you need CMake installed on your system. On Windows you need a version of Visual Studio that include support for C++.

For simplicity this project includes the necessary runtime libraries to run ANTLR.

```
# generate the ANTLR components (you have to setup ANTLR, before doing this step)
antlr4 -Dlanguage=Cpp -no-listener -visitor -o antlr4-runtime Scene.g4
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

**You can read an article on the example on [Getting started with ANTLR in C++](https://tomassetti.me/getting-started-antlr-cpp/)**
