cmake_minimum_required(VERSION 3.8)
project(sfm_ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(rclcpp REQUIRED)

find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

find_package(message_filters REQUIRED)
find_package(cv_bridge REQUIRED)

find_package(pcl_conversions REQUIRED)
find_package(pcl_msgs REQUIRED)


find_package(PCL REQUIRED COMPONENTS
  common io kdtree search surface filters
  registration sample_consensus segmentation 
)

# Torch
#list(APPEND CMAKE_PREFIX_PATH "/app/libtorch")
find_package(Torch REQUIRED HINTS $ENV{Torch_DIR})
target_link_libraries(sfm_ros2 "${TORCH_LIBRARIES}")
target_include_directories(sfm_ros2 PUBLIC ${TORCH_INCLUDE_DIRS})
set_property(TARGET sfm_ros2 PROPERTY CXX_STANDARD 17)

ament_export_dependencies(rosidl_default_runtime)

find_package(rosidl_default_runtime REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MapGraph.msg"
  "msg/Link.msg"
  DEPENDENCIES std_msgs sensor_msgs geometry_msgs
)

# =========================
# Executable
# =========================
add_executable(sfm src/sfm.cpp)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

target_include_directories(sfm PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${PCL_INCLUDE_DIRS}
)

target_compile_features(sfm PUBLIC c_std_99 cxx_std_17)


ament_target_dependencies(sfm
  rclcpp
  std_msgs
  sensor_msgs
  geometry_msgs
  nav_msgs
  cv_bridge
  message_filters
  pcl_conversions
  pcl_msgs
)

# External libs
target_link_libraries(sfm
  ${PCL_LIBRARIES}
  ${TORCH_LIBRARIES}
  "${cpp_typesupport_target}"
)

target_include_directories(sfm PRIVATE
  ${TORCH_INCLUDE_DIRS}
)

# PCL definitions (important on some systems)
add_definitions(${PCL_DEFINITIONS})

# =========================
# Install
# =========================
install(TARGETS sfm
  DESTINATION lib/${PROJECT_NAME}
)

# Install headers
install(DIRECTORY include/
  DESTINATION include
)

# =========================
# Testing
# =========================
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# =========================
# Export
# =========================
ament_package()