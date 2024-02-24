# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/kt_machine_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/kt_machine_autogen.dir/ParseCache.txt"
  "kt_machine_autogen"
  )
endif()
