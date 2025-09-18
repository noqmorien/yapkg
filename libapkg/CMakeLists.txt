file(GLOB_RECURSE LIBAPKG_DIR CMAKE_CONFIGURE_DEPENDS src/*.cpp)

add_library(
    libapkg
    STATIC
    ${LIBAPKG_DIR}
)

target_include_directories(
    libapkg
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    libapkg
    PUBLIC
)
