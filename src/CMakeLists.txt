add_library(bulk_core
    consoleLogger.cpp
    fileLogger.cpp
    parser.cpp
    processor.cpp
)

target_include_directories(bulk_core
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

add_executable(bulk main.cpp)

target_link_libraries(bulk
    bulk_core
)