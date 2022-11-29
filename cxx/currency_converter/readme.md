# Currency Converter

## Description
A program that allows users to convert between different currencies.

This is a personal project done outside of school, to practice and learn C++.

## Build Instructions for Windows
1. Clone the repository.
2. Install CMake, Visual Studio, and any compilers the terminal asks for in step 3. One of the packages in Visual Studio has 'nmake', which is CMake's default choice of makefile generator for Windows.
3. From a terminal in the project's root directory, run these commands:
```
cmake -S . -B .\build\
cmake --build .\build\
```
If there are any issues, confirm that the PATH variable is set up correctly for anything the error messages ask for.

4. To actually run the program, run this command next:
```
.\build\Debug\Currency_Converter.exe
```

## Requirements
- Basic functionality (i.e. it's able to convert U.S. Dollars to Korean Won, British Pounds, and Euros)
- - Partially done; once the basic GUI is done, I'll have a better idea of what features should be added. Until then, this part is practically a stub.
- GUI (i.e. any kind of user can click on the application and use the interface, without having to use the command line or other things).
- ### Stretch Requirements
    - Have it update the exchange rate regularly by making regular requests.
    - Have a feature for making a manual request for the exchange rate to update (so the user can get the latest exchange rate.)