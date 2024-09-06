**Dynamic Emoji Reaction Game**
**Overview**
The Dynamic Emoji Reaction Game is an interactive console-based game written in C using the Turbo C graphics library. In this game, users control emojis that display different expressions based on random events. The game provides a fun and visual way to interact with various emoji reactions and is a great example of graphics programming in C.

**Features**
Multiple Emoji Expressions: The game features various emoji expressions including normal, wink, sleep, surprise, sad, angry, happy, and crying.
Randomized Reactions: Emojis change expressions based on random values, ensuring a dynamic gameplay experience.
Interactive Controls: Players can view different emoji expressions and their corresponding controls.
**Getting Started**
**Prerequisites**
Turbo C or any compatible C compiler with graphics library support.
Basic knowledge of C programming and graphics programming.
Installation
Download Turbo C: Ensure you have Turbo C or a compatible C compiler installed on your system.
Set Up Graphics Library: Configure the graphics library path in Turbo C to ensure it can locate the BGI files.
Usage
Compile the Code: Open Turbo C and load the source code file.
Run the Program: Compile and run the program to start the game.
Controls
The game displays different emoji expressions based on user inputs. Here are the available controls:

0: Normal
1: Wink
2: Sleep
3: Surprise
4: Sad
5: Angry
6: Happy
7: Crying
Code Explanation
Graphics Initialization: The initgraph function initializes the graphics mode and sets up the environment.
Random Expression Generation: The rand() function is used to generate random values that determine the emoji expressions.
Drawing Functions: Various functions like circle(), line(), and rectangle() are used to draw the emoji and its features on the screen.
Color Filling: The setfillstyle() and floodfill() functions are used to fill colors and create the visual appearance of the emojis.
Contributing
If you have suggestions or improvements for the project, please fork the repository and submit a pull request. Contributions are welcome!

License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgments
Thanks to the Turbo C community for the support and resources that made this project possible.
Special thanks to the creators of the graphics library for providing tools to create interactive graphics applications in C.
Feel free to adjust or expand upon this as needed for your specific project!
