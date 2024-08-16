# Arduino_autodiff

这是一个针对Arduino平台的实验性[autodiff](https://github.com/autodiff/autodiff)移植版本，用于计算自动差分。

## 依赖

原版的autodiff依赖于Eigen3，该项目即将原版autodiff的依赖改为使用ArduinoEigen库。为了正常运行该库，请你安装以下的依赖库：

* [ArxTypeTraits](https://github.com/hideakitai/ArxTypeTraits)
* [ArduinoEigen](https://github.com/hideakitai/ArduinoEigen)

你可以从github上clone后将它们放在“你的用户文件夹/Documents/Arduino/libraries/”文件夹中，也可以直接通过Arduino IDE下载Eigen库，它会自动帮你配置依赖。

## 免责声明

如上所述，这是一个“实验性”的autodiff移植版本，因此作者也无法保证其可靠性。对于使用Arduino_autodiff过程中遇到的问题，请动动发财的小手查阅一下autodiff项目和ArduinoEigen项目的issue，如果仍然无法解决，请在本项目的issue中留言。

## [English Document](README.md)
