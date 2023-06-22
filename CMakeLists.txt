
file(GLOB Srcs *.cpp *.c)
file(GLOB Headers *.hpp *.h)

add_executable (Tehiuphvzhvuogv3 ${Srcs} ${Headers})

target_link_libraries(Tehiuphvzhvuogv3 ${LIBS})
target_link_directories(Tehiuphvzhvuogv3 PRIVATE ${LIB_DIRS})
target_include_directories(Tehiuphvzhvuogv3 PRIVATE ${INCLUDES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
	set_property(TARGET Tehiuphvzhvuogv3 PROPERTY CXX_STANDARD 20)
endif()
