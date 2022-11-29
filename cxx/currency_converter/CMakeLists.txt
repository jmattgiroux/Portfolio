cmake_minimum_required(VERSION 3.24)

project(Currency_Converter
            VERSION 0.1)

add_subdirectory(ConvertCurrency)


add_executable(Currency_Converter command_line_interface.cpp)

target_link_libraries(Currency_Converter PUBLIC ConvertCurrency)

target_include_directories(Currency_Converter PUBLIC
                            "${PROJECT_SOURCE_DIR}/ConvertCurrency"
                            )