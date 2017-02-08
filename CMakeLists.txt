cmake_minimum_required (VERSION 2.6)
project (Tutorial)

set (CMAKE_CXX_STANDARD 11)

add_executable(blackjack
    src/main.cpp
    src/deck.cpp
    src/card.cpp
)
