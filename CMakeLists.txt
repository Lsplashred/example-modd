cmake_minimum_required(VERSION 3.25)
project(JumpHigher LANGUAGES CXX)
find_package(Geode REQUIRED)
add_geode_mod(
    GEODE_MOD_ID geometrypro1209.jump_higher
    SOURCES src/main.cpp
)
