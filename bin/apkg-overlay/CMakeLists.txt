file(GLOB_RECURSE APKG_OVERLAY_DIR CMAKE_CONFIGURE_DEPENDS src/*.cpp)

add_executable(
    apkg-overlay
    ${APKG_OVERLAY_DIR}
)

target_include_directories(
    apkg-overlay
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    apkg-overlay
    PRIVATE
    libapkg
)
