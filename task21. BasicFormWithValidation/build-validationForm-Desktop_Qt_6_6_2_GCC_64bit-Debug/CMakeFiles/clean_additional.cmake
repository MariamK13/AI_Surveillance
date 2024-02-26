# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/validationForm_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/validationForm_autogen.dir/ParseCache.txt"
  "validationForm_autogen"
  )
endif()
