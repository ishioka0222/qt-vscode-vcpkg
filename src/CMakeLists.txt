add_executable(main
  main.cpp
  widget.cpp
)

find_package(Qt6Widgets CONFIG REQUIRED)
target_link_libraries(main PRIVATE Qt6::Widgets)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	find_program(WINDEPLOYQT NAMES windeployqt.debug.bat NO_CACHE)
else()
	find_program(WINDEPLOYQT NAMES windeployqt.exe NO_CACHE)
endif()

add_custom_command(
  TARGET main POST_BUILD
  COMMAND ${WINDEPLOYQT} $<TARGET_FILE:main>
)
