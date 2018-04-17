project(third_party)

add_library(boost_di STATIC boost/di.hpp)
set_target_properties(boost_di PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(boost_di PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})