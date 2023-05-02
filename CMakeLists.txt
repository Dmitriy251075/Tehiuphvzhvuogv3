
add_subdirectory(inoutlib)

file(GLOB Srcs *.cpp *.c)
file(GLOB Headers *.hpp *.h)

add_executable (Tehiuphvzhvuogv3 ${Srcs} ${Headers})

include_directories(inoutlib)

target_link_libraries(Tehiuphvzhvuogv3 inoutlib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Tehiuphvzhvuogv3 PROPERTY CXX_STANDARD 20)
endif()
