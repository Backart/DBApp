# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SqlLiteBDApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SqlLiteBDApp_autogen.dir\\ParseCache.txt"
  "SqlLiteBDApp_autogen"
  )
endif()
