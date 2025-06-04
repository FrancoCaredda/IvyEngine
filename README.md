# IvyEngine
## About
IvyEngine is a 2D game engine written in C++ using OpenGL.  
## Functionality
* Event System:
    - [X] Multicast Delegates
    - [X] Events (EventProvider, EventSubscriber, Event)
    - [ ] Window Events
    - [X] Input Events
    - [X] Key Code Enum
    - [ ] Mouse/Joystick/Gamepad Enums
    - [ ] Offloaded Events
* Memory management:
    - [ ] Arena Allocators
* Rendering:
    - [ ] Renderer class
    - [ ] Textures
    - [ ] Sprites
    - [ ] SpriteComponent
    - [ ] Framebuffers
    - [ ] Batching
    - [ ] Compute shaders
* Serialization:
    - [ ] JSON serialization
    - [ ] Binary serialization
* Animations:
    - [ ] Sprite sequencer
    - [ ] SpriteSquencesComponent
    - [ ] Sequencer Notify Events
    - [ ] State Machines
* Physics:
    - [ ] Collision Detection
    - [ ] Forces
    - [ ] Raycasting
    - [ ] Impulse Solving
* UI:
* Audio:
* Gameplay Framework:
## Requirements
|Tool|Version|
|--|--|
|CMake|3.8+|
|Visual Studio|2022|
|C++|17|

|Library|Version|
|--|--|
|OpenGL|4.6|
## How to build?
1. Clone the repository using:
```bash
git clone --recursive https://github.com/FrancoCaredda/IvyEngine.git
```
2. Run build-debug to build in Debug
3. Run build-release to build in Release
4. Open the folder in Visual Studio and build it