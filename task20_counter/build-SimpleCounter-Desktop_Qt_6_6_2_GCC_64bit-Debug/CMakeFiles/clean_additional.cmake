# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SimpleCounter_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimpleCounter_autogen.dir/ParseCache.txt"
  "SimpleCounter_autogen"
  )
endif()
