// Copyright 2021 iRobot Corporation. All Rights Reserved.
// @author Rodrigo Jose Causarano Nunez (rcausaran@irobot.com)

#include <memory>

#include "irobot_create_toolbox/wheels_publisher.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<irobot_create_toolbox::WheelsPublisher>());
  rclcpp::shutdown();
  return 0;
}
