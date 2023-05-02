
file(GLOB Srcs *.cpp *.c)
file(GLOB Headers *.hpp *.h)

add_library (inoutlib ${Srcs} ${Headers})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET inoutlib PROPERTY CXX_STANDARD 20)
endif()
