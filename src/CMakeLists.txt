
###### Dependencies

# fmt
set(FMT_INSTALL FALSE)
add_subdirectory(
    ${PROJECT_SOURCE_DIR}/external/fmt
    ${CMAKE_BINARY_DIR}/external/fmt
    EXCLUDE_FROM_ALL
    SYSTEM
)

###### CLI Executable

set(MAIN_CLI_TARGET "action_cli")
add_executable(${MAIN_CLI_TARGET}
    main.cpp
)
target_link_libraries(${MAIN_CLI_TARGET} PRIVATE 
    fmt::fmt
)
set_property(TARGET ${MAIN_CLI_TARGET} PROPERTY RUNTIME_OUTPUT_DIRECTORY 
    ${CMAKE_BINARY_DIR}
)
set_property(TARGET ${MAIN_CLI_TARGET} PROPERTY POSITION_INDEPENDENT_CODE TRUE)

