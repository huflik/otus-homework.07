add_executable(bulk
    main.cpp
    consoleLogger.cpp
    fileLogger.cpp
    parser.cpp
    processor.cpp
)

target_include_directories(bulk
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)   