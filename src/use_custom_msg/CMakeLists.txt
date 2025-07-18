cmake_minimum_required(VERSION 3.8)
project(use_custom_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(custom_msg REQUIRED)
find_package(rclcpp REQUIRED)



add_executable(custom_listner src/sub.cpp)
ament_target_dependencies(custom_listner rclcpp std_msgs custom_msg)

add_executable(custom_talker src/pub.cpp)
ament_target_dependencies(custom_talker rclcpp std_msgs custom_msg)

install(TARGETS
  custom_listner
  custom_talker
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

