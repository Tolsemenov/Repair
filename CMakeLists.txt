add_executable(Repair
  main.cpp
  Flat.cpp
  Flat.h
  Room.cpp
  Room.h
  WallpaperRoll.cpp
  WallpaperRoll.h)

target_include_directories(Repair
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(Repair PROPERTIES
  FOLDER "${PROJECT_NAME}/Repair"
  OUTPUT_NAME ${PROJECT_NAME}-Repair
  PROJECT_LABEL "Repair")
