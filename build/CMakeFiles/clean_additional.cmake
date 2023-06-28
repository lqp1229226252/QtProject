# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\UserInfo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\UserInfo_autogen.dir\\ParseCache.txt"
  "UserInfo_autogen"
  "test\\CMakeFiles\\UserInfo_test_autogen.dir\\AutogenUsed.txt"
  "test\\CMakeFiles\\UserInfo_test_autogen.dir\\ParseCache.txt"
  "test\\UserInfo_test_autogen"
  )
endif()
