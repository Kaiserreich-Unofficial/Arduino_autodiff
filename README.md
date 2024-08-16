# Arduino_autodiff

This is an experimental port of [autodiff](https://github.com/autodiff/autodiff) for Arduino Boards, which is used for easy forward and backward differencing.

## Dependencies

The autodiff library dependency contains the Eigen3. Here I've made some changes to the dependencies of autodiff so that it depends on Eigen's port of Arduino to be able to run. So the dependency of the AruduinoEigen library is also a dependency of Arduino_autodiff, which you need to download in order to use Arduino_autodiff properly:

* [ArxTypeTraits](https://github.com/hideakitai/ArxTypeTraits)
* [ArduinoEigen](https://github.com/hideakitai/ArduinoEigen)

You can download these libraries yourself and place them in Your_User_Folder/Documents/Arduino/libraries/ directory, or you can download Eigen through the Arduino IDE, which will automatically configure the dependencies for you.

## Disclaimer

As mentioned above, Arduino_autodiff is just an "experimental" port of autodiff, and the project is dependent on the original ArduinoEigen and autodiff projects. So if you have any problem, please check the issues of autodiff and ArduinoEigen first, and if you still can't solve your problem, please leave a comment in the issue.

## [中文文档](README_CN.md)
