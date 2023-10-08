#include <C:\Users\frost\Desktop\My Career\Fall 2022\FSU Fall 2022 Files\C-Turtle-master\C-Turtle-master\CTurtle.hpp>
namespace ct = cturtle;

int move = 1;
int move2 = 1;


int main() {
    ct::TurtleScreen scr;
  


    ct::Color red = { "red" };
    ct::Color green = { "green" };
    ct::Color blue = { "blue" };
    ct::Color random = { "random" };
    ct::Color yellow = { "yellow" };
    ct::Color purple = { "purple" };
    ct::Color orange = { "orange" };
    ct::Color white = { "white" };
    ct::Color cyan = { "cyan" };

    scr.bgcolor({ "black" });







    ct::Turtle Omega(scr);
    
    Omega.speed(ct::TS_FASTEST);

    for (int i = 0; i < 100; i++) {
        Omega.pencolor(blue);
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

    for (int i=100; i < 200; i++) {
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


    ct::Turtle Alpha(scr);
    Alpha.speed(ct::TS_FASTEST);


    for (int i = 0; i < 50; i++) {
        Alpha.pencolor(red);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

        
    }

    for (int i = 50; i < 100; i++) {
        Alpha.pencolor(yellow);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }

    for (int i = 100; i < 150; i++) {
        Alpha.pencolor(orange);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }

    for (int i = 150; i < 200; i++) {
        Alpha.pencolor(cyan);
        Alpha.pendown();
        Alpha.width(i / 100 + 1);
        Alpha.forward(i);
        Alpha.left(59);

    }
    Alpha.forward(200);

  


 

    Omega.hideturtle();
    Alpha.hideturtle();

    scr.exitonclick();
    return 0;
}