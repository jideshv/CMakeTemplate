# CMakeTemplate

This is a simple CMake example that includes Google Test and Google Mock. 

I use this for all of my particle.io projects where I want to test my C++ libraries using GTest before running them on a Particle Photon or Particle Electron. Saves a lot of time debugging if everything is unit tested. 

Even if you have never used CMake getting started is easy. 

1. Install CMake 3.12 or later (https://cmake.org/)
2. Clone this project
3. Create a `build` folder
4. From the `build` foler run `cmake -G "<your_platform>" ..`

I use XCode for most of my development so my CMake command is `cmake -G "Xcode" ..` after which I open the `.xcodeproj` and continue developing in Xcode.

