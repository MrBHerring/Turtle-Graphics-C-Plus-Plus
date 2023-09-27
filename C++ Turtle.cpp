//Include the CTurtle library for functionality 
#include <CTurtle.hpp>

//Initialize turtle from library
namespace ct = cturtle;

//Create a variable to maintain continuity of shape 
int move = 1;


//Initialize a function for the whole program
int main() {
    //Create a screen to contain the turtle graphic
    ct::TurtleScreen scr;
  

    //Specify colors to use for the graphic itself
    ct::Color red = { "red" };
    ct::Color green = { "green" };
    ct::Color blue = { "blue" };
    ct::Color random = { "random" };
    ct::Color yellow = { "yellow" };
    ct::Color purple = { "purple" };
    ct::Color orange = { "orange" };
    ct::Color white = { "white" };
    ct::Color cyan = { "cyan" };
    
    //Change the screen's background to black
    scr.bgcolor({ "black" });






    //Create one turtle for a circle shape
    ct::Turtle Omega(scr);
    //Ensure the this turtle draws the circle as fast as possible
    Omega.speed(ct::TS_FASTEST);

    //Create for loops to divide the circle using colors
    for (int i = 0; i < 100; i++) {
        //The first loop will identify the all the lines as blue
        Omega.pencolor(blue);
        //Drawing begins once the turtle's pen is down
        Omega.pendown();
        Omega.right(move);
        Omega.forward(180);
        Omega.right(30);
        Omega.forward(100);
        //Create triangles surrounding each side of the complex circle
        Omega.left(30);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        //Ensure the turtle does not make further changes
        Omega.penup();
        //Return the turtle back to the center of the graph
        Omega.home();
        //Ensure the program continues rotating while the turtle keeps drawing.
        move = move + 1;
  


    }
    for (int i=100; i < 200; i++) {
        //Another loop runs under a green color
        //Only the values of "i" and "move" change as the main program continues to run
        Omega.pencolor(green);
        Omega.pendown();
        Omega.right(move);
        Omega.forward(180);
        Omega.right(30);
        Omega.forward(100);
        Omega.left(30);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.penup();
        Omega.home();
        move = move + 1;

    }

    for (int i = 200; i < 300; i++) {
        //This loop comes next using purple
        Omega.pencolor(purple);
        Omega.pendown();
        Omega.right(move);
        Omega.forward(180);
        Omega.right(30);
        Omega.forward(100);
        Omega.left(30);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.penup();
        Omega.home();
        move = move + 1;

    }

    for (int i = 300; i < 360; i++) {
        //This loop runs last using a random color from the CTurtle library
        Omega.pencolor(random);
        Omega.pendown();
        Omega.right(move);
        Omega.forward(180);
        Omega.right(30);
        Omega.forward(100);
        Omega.left(30);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.left(120);
        Omega.forward(10);
        Omega.penup();
        Omega.home();
        move = move + 1;

    }

    //Create another turtle to draw a hexagon spiral in the middle of the complex circle
    ct::Turtle Alpha(scr);
    //Ensure the drawing is implemented as fast as possible
    Alpha.speed(ct::TS_FASTEST);

    //Create for loops to divide the hexagon shape into different colors
    for (int i = 0; i < 50; i++) {
        //The first part of the spiral is drawn using red
        Alpha.pencolor(red);
        //Drawing begins once the turtle's pen is down
        Alpha.pendown();
        //Depending value of "i" the width of the spiral will grow
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        //The value of "i" determines how far the turtle can move forward
        Alpha.left(59);
        //The turtle will turn left by 59 degrees and create a spiral like pattern
        
    }

    for (int i = 50; i < 100; i++) {
        //Another loop runs using the yellow color
        //This loop ensures the lines drawn will grow wider
        Alpha.pencolor(yellow);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }

    for (int i = 100; i < 150; i++) {
        //This loop runs using the orange color
        //The width of the lines are more noticable
        Alpha.pencolor(orange);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }

    for (int i = 150; i < 200; i++) {
        //This last loop runs using the cyan color
        //These lines are much easier to see now the line width is much larger

        Alpha.pencolor(cyan);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }
    //Complete this hexagon spiral by drawing the last line forward
    Alpha.forward(200);

  


 
    //Hide these two turtles so only the combined shapes are present
    Omega.hideturtle();
    Alpha.hideturtle();
    //Keep the screen on display until user clicks exit button
    scr.exitonclick();
    //Return exit code 0 to verify the program has run successfully 
    return 0;
}