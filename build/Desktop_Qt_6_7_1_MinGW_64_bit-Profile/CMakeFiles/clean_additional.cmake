# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\GradeCalculator-QT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GradeCalculator-QT_autogen.dir\\ParseCache.txt"
  "GradeCalculator-QT_autogen"
  )
endif()
