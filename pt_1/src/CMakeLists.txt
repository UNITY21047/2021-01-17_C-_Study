link_directories(
    ${GTKMM_LIBRARY_DIRS} )

include_directories(
    ${GTKMM_INCLUDE_DIRS} )

add_executable(hello-world
    helloworld.cpp
    helloworld.h
    main.cpp)

target_link_libraries(hello-world
    ${GTKMM_LIBRARIES} )