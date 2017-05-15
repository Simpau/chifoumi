cmake_minimum_required( VERSION 3.0 )
project( Projet_GL )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED gtkmm-2.4 cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( HelloWorld.out src/HelloWorld.cpp)
target_link_libraries( HelloWorld.out ${PKG_LIBRARIES} )

add_executable( HelloWorld_test.out src/HelloWorld_test.cpp src/main_test.cpp)
target_link_libraries( HelloWorld_test.out ${PKG_LIBRARIES} )

# build doxygen documentation
find_package(Doxygen)
if(DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${CMAKE_BINARY_DIR}/Doxyfile)
    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
    install(DIRECTORY ${CMAKE_BINARY_DIR}/doc/html 
        DESTINATION share/doc/${CMAKE_PROJECT_NAME})
endif()

