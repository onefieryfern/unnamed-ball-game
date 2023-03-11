cmake_minimum_required(VERSION 3.24)
project(unnamed_ball_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(unnamed_ball_game main.cpp)

target_include_directories(unnamed_ball_game PRIVATE "C:/winbgim")
target_link_directories(unnamed_ball_game PRIVATE "C:/winbgim")
target_link_libraries(unnamed_ball_game bgi gdi32 comdlg32 uuid oleaut32 ole32)
