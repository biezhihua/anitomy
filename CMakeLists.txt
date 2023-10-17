cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        anitomy/anitomy.cpp
        anitomy/anitomy.h
        anitomy/element.cpp
        anitomy/element.h
        anitomy/keyword.cpp
        anitomy/keyword.h
        anitomy/options.h
        anitomy/parser.cpp
        anitomy/parser.h
        anitomy/parser_helper.cpp
        anitomy/parser_number.cpp
        anitomy/string.cpp
        anitomy/string.h
        anitomy/token.cpp
        anitomy/token.h
        anitomy/tokenizer.cpp
        anitomy/tokenizer.h
)
