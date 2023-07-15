
This is the update for the Learning course which should have been completed as prerequisite 

[Electric Dreams Environment](https://dev.epicgames.com/community/learning/courses/x3L/unreal-engine-electric-dreams-environment-unpacked/BERJ/unreal-engine-electric-dreams-environment-unpacked-overview)

To download in GitCMD
$ cd C:\Users\Owner\source\repos\
```
git clone https://github.com/jimshalo10/LGPU-ElectricDreamsEnv2-5.4.git LGPU-ElectricDreamsEnv2-5.4
```
$ cd  C:\Users\Owner\source\repos\LGPU-ElectricDreamsEnv2-5.4

To make this run you must transfer the CONTENT folder, about 48GB, into this directory from the original project download. 

example 
"XCopy/s D:\Users\Owner\Documents\Unreal Projects\ElectricDreamsEnv2\Content\*.* 
C:\Users\Owner\source\repos\LGPU-ElectricDreamsEnv2-5.4\Content\*.*

You will have built the project in VS2022 by right click on ElectricDreamsEnv2.sln and selecting Visual Studio 2022.

Right Click on the "Solution ElectricDreamsEnv2" and select "Build Solution".

When succesfully built, File Menu Debug -> Start without Debugging"

When the UE 5.4 Shaders have built the UE Project Selector will browse to open select the 
VS 2019 is deprecated in UE 5.4, You may see an error message.
