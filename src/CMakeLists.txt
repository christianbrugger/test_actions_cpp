
###### Dependencies

# fmt
set(FMT_INSTALL FALSE)
add_subdirectory(
    ${PROJECT_SOURCE_DIR}/external/fmt
    ${CMAKE_BINARY_DIR}/external/fmt
    EXCLUDE_FROM_ALL
    SYSTEM
)

# Qt 6
set(CMAKE_AUTOMOC FALSE)  # takes too much time, not parallelized
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
message(NOTICE "Qt version: ${Qt6_VERSION}")


###### CLI Executable

set(MAIN_CLI_TARGET "action_cli")
add_executable(${MAIN_CLI_TARGET}
    main.cpp
)
target_link_libraries(${MAIN_CLI_TARGET} PRIVATE 
    fmt::fmt

    Qt6::Core
    Qt6::Widgets
    Qt6::GuiPrivate
)
set_property(TARGET ${MAIN_CLI_TARGET} PROPERTY RUNTIME_OUTPUT_DIRECTORY 
    ${CMAKE_BINARY_DIR}
)
set_property(TARGET ${MAIN_CLI_TARGET} PROPERTY POSITION_INDEPENDENT_CODE TRUE)

