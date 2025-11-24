
#include <windows.h>

#include <GL/glut.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define MAX_SNOWFLAKES 100
#define MAX_STARS 100
#define MAX_RAINDROPS 1000


float _move = 0.0f;
float _move2 = 0.0f;
float _move3 = 0.0f;
float _moveS = 0.0f;
float _moveL = 0.0f;
float angle = 0.0;


void timer(int value) {
    angle += 5; // Increment the angle
    if (angle >= 360) angle = 0; // Reset the angle
    glutPostRedisplay();
    glutTimerFunc(100, timer, 0); // Call the timer function again
}


//boat
void update1(int value) {

 _move += 2;
if(_move > 230)
{
_move = -220.0;
}
glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}


//cloud
void update2(int value) {

 _move2 += 2;
if(_move2 > 220)
{
_move2 = -190.0;
}
glutPostRedisplay();
glutTimerFunc(200, update2, 0);
}


//car
void update3(int value) {

 _move3 -= 3;
if(_move3 < -390)
{
_move3 = 300.0;
}
glutPostRedisplay();
glutTimerFunc(100, update3, 0);
}

void update4(int value) {

 _moveS += 0.1;
if(_moveS >30)
{

}
else{
glutTimerFunc(100, update4, 0);
}
glutPostRedisplay();
}


void update5(int value) {

 _moveL +=0.1;
if(_moveL >4)
{
_moveL = 0.0;
}
glutTimerFunc(100, update5, 0);

glutPostRedisplay();
}






void Rectangle(float x1, float y1, float x2, float y2, float r, float g, float b) {
    glBegin(GL_POLYGON);
    glColor3f(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();


}

void Rectangle(float x1, float y1, float x2, float y2,float x3, float r, float g, float b) {
    glBegin(GL_POLYGON);
    glColor3f(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x3, y2);
    glEnd();


}


void windMill(float x,float y){
       glPushMatrix();
    glTranslatef(x+0.0f, y+0.0f, 0.0f);

    // Draw windmill base
    glBegin(GL_QUADS);
        glColor3f(0.5, 0.35, 0.05); // Brown color for the base
        glVertex2f(-2, -20);
        glVertex2f(2, -20);
        glVertex2f(2, 0);
        glVertex2f(-2, 0);
    glEnd();

    // Draw windmill blades
    for (int i = 0; i < 4; ++i) {
        glPushMatrix();
        glRotatef(angle + i * 90, 0, 0, 1); // Rotate for each blade
        glBegin(GL_TRIANGLES); // Using triangles for blades
            glColor3f(1.0, 1.0, 1.0); // Yellow color for the blades
            glVertex2f(0.0f, 0.0f);   // Center of rotation
            glVertex2f(2.5f, 7.5f);  // Blade tip
            glVertex2f(0.0f, 10.0f);  // Blade edge
        glEnd();
        glPopMatrix();
    }

    glPopMatrix(); // Pop the translation matrix


}


void sky(){

glBegin(GL_POLYGON);
glColor3f(0.6f, 1.0f, 1.0f);
glVertex2f(-100.0f, 50.0f);
glVertex2f(-100.0f, 100.0f);
glVertex2f(100.0f, 100.0f);
glVertex2f(100.0f, 50.0f);

glEnd();

}



void triangleHbOne(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(-90.0f, 50.0f);
glVertex2f(-70.0f, 50.0f); // x, y
glVertex2f(-80.0f, 65.0f); // x, y

glEnd();
}


void triangleHbTwo(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(-70.0f, 50.0f);
glVertex2f(-50.0f, 50.0f); // x, y
glVertex2f(-60.0f, 65.0f); // x, y

glEnd();
}


void triangleHbThree(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(-44.0f, 50.0f);
glVertex2f(-28.0f, 50.0f); // x, y
glVertex2f(-37.0f, 65.0f); // x, y

glEnd();
}

void triangleHbFour(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(-30.0f, 50.0f);
glVertex2f(-10.0f, 50.0f); // x, y
glVertex2f(-20.0f, 67.0f); // x, y

glEnd();
}

void triangleHbFive(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(-10.0f, 50.0f);
glVertex2f(10.0f, 50.0f); // x, y
glVertex2f(0.0f, 65.0f); // x, y

glEnd();
}

void triangleHbSix(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(20.0f, 50.0f);
glVertex2f(40.0f, 50.0f); // x, y
glVertex2f(30.0f, 65.0f); // x, y

glEnd();
}

void triangleHbSeven(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(30.0f, 50.0f);
glVertex2f(50.0f, 50.0f); // x, y
glVertex2f(40.0f, 65.0f); // x, y

glEnd();
}

void triangleHbEight(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(50.0f, 50.0f);
glVertex2f(70.0f, 50.0f); // x, y
glVertex2f(60.0f, 65.0f); // x, y

glEnd();
}

void triangleHbNine(){
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.0f);
glVertex2f(70.0f, 50.0f);
glVertex2f(90.0f, 50.0f); // x, y
glVertex2f(80.0f, 65.0f); // x, y

glEnd();
}

void triangleHfOne(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(-100.0f, 50.0f);
glVertex2f(-80.0f, 50.0f); // x, y
glVertex2f(-90.0f, 70.0f); // x, y

glEnd();
}

void triangleHfTwo(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(-80.0f, 50.0f);
glVertex2f(-60.0f, 50.0f); // x, y
glVertex2f(-70.0f, 70.0f); // x, y

glEnd();
}

void triangleHfThree(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(-55.0f, 50.0f);
glVertex2f(-35.0f, 50.0f); // x, y
glVertex2f(-45.0f, 70.0f); // x, y

glEnd();
}

void triangleHfFour(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(-40.0f, 50.0f);
glVertex2f(-20.0f, 50.0f); // x, y
glVertex2f(-30.0f, 70.0f); // x, y

glEnd();
}

void triangleHfFive(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(-20.0f, 50.0f);
glVertex2f(0.0f, 50.0f); // x, y
glVertex2f(-10.0f, 70.0f); // x, y

glEnd();
}

void triangleHfSix(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(0.0f, 50.0f);
glVertex2f(20.0f, 50.0f); // x, y
glVertex2f(10.0f, 70.0f); // x, y

glEnd();
}


void triangleHfSeven(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(25.0f, 50.0f);
glVertex2f(45.0f, 50.0f); // x, y
glVertex2f(35.0f, 70.0f); // x, y

glEnd();
}

void triangleHfEight(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(43.0f, 50.0f);
glVertex2f(63.0f, 50.0f); // x, y
glVertex2f(53.0f, 70.0f); // x, y

glEnd();
}

void triangleHfNine(){
glBegin(GL_POLYGON);
glColor3f(0.2f, 0.8f, 0.3f);
glVertex2f(60.0f, 50.0f);
glVertex2f(80.0f, 50.0f); // x, y
glVertex2f(70.0f, 70.0f); // x, y

glEnd();
}

void triangleHfTen(){
glBegin(GL_POLYGON);
    glColor3f(0.2f, 0.8f, 0.3f);
    glVertex2f(80.0f, 50.0f);
    glVertex2f(100.0f, 50.0f); // x, y
    glVertex2f(90.0f, 70.0f); // x, y

glEnd();
}

void hill(){
    triangleHbOne();
    triangleHbTwo();
    triangleHbThree();
    //triangleHbFour();
    //triangleHbFive();
    triangleHbSix();
    triangleHbSeven();
    triangleHbEight();
    triangleHbNine();
    triangleHfOne();
    triangleHfTwo();
    triangleHfThree();
    triangleHfFour();
    //triangleHfFive();
    //triangleHfSix();
    triangleHfSeven();
    triangleHfEight();
    triangleHfNine();
    triangleHfTen();
}


void river(){
glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.8f, 0.9f);
    glVertex2f(-100.0f, 50.0f);
    glVertex2f(100.0f, 50.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(-100.0f, -100.0f);
glEnd();
}


void landOne(){
glBegin(GL_POLYGON);
    glColor3f(0.1f, 1.0f, 0.2f);
    glVertex2f(-100.0f, 50.0f);
    glVertex2f(-20.0f, 50.0f);
    glVertex2f(-20.0f, -10.0f);
    glVertex2f(-100.0f, -60.0f);
glEnd();
}


void landTwo(){
glBegin(GL_POLYGON);
    glColor3f(0.1f, 1.0f, 0.2f);
    glVertex2f(100.0f, 50.0f);
    glVertex2f(20.0f, 50.0f);
    glVertex2f(20.0f, -10.0f);
    glVertex2f(100.0f, -60.0f);
glEnd();
}

void sun(){
    glPushMatrix();
 glTranslatef( 0.0f, _moveS,0.0f);
glBegin(GL_POLYGON);

glColor3f(1.0, 0.0, 0.0);


    float radius = 15;
    float pi = 3.14159265359;
    for (int i = 0; i <= 180; i++) {
        float angle = i *pi / 90.0;
        glVertex2f((cos(angle) * radius-0), (sin(angle) * radius)+50);
    }

    glEnd();

    glPopMatrix();
}


void houseTwo(){

glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(70.0f, 30.0f);
    glVertex2f(85.0f, 30.0f);
    glVertex2f(90.0f, 25.0f);
    glVertex2f(75.0f, 25.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.2f);
    glVertex2f(70.0f, 30.0f);
    glVertex2f(75.0f, 25.0f);
    glVertex2f(65.0f, 25.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.9f, 1.0f, 0.8f);
    glVertex2f(75.0f, 25.0f);
    glVertex2f(65.0f, 25.0f);
    glVertex2f(65.0f, 10.0f);
    glVertex2f(75.0f, 10.0f);
glEnd();



glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.2f);
    glVertex2f(75.0f, 25.0f);
    glVertex2f(75.0f, 10.0f);
    glVertex2f(90.0f, 10.0f);
    glVertex2f(90.0f, 25.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(80.0f, 10.0f);
    glVertex2f(85.0f, 10.0f);
    glVertex2f(85.0f, 20.0f);
    glVertex2f(80.0f, 20.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(72.0f, 16.0f);
    glVertex2f(68.0f, 16.0f);
    glVertex2f(68.0f, 20.0f);
    glVertex2f(72.0f, 20.0f);
glEnd();

}

void houseOne(){

glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(45.0f, 30.0f);
    glVertex2f(50.0f, 25.0f);
    glVertex2f(35.0f, 25.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.2f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(35.0f, 25.0f);
    glVertex2f(25.0f, 25.0f);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.9f, 1.0f, 0.8f);
    glVertex2f(35.0f, 25.0f);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(25.0f, 10.0f);
    glVertex2f(35.0f, 10.0f);
glEnd();



glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.2f);
    glVertex2f(35.0f, 25.0f);
    glVertex2f(35.0f, 10.0f);
    glVertex2f(50.0f, 10.0f);
    glVertex2f(50.0f, 25.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(40.0f, 10.0f);
    glVertex2f(45.0f, 10.0f);
    glVertex2f(45.0f, 20.0f);
    glVertex2f(40.0f, 20.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(32.0f, 16.0f);
    glVertex2f(28.0f, 16.0f);
    glVertex2f(28.0f, 20.0f);
    glVertex2f(32.0f, 20.0f);
glEnd();

}


void boatOne(){

glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(25.0f, -45.0f);
    glVertex2f(55.0f, -45.0f);
    glVertex2f(50.0f, -42.0f);
    glVertex2f(30.0f, -42.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(1.0f, .1f, 0.8f);
    glVertex2f(15.0f, -45.0f);
    glVertex2f(65.0f, -45.0f);
    glVertex2f(60.0f, -50.0f);
    glVertex2f(20.0f, -50.0f);
glEnd();
}

void boatTwo(){
 glPushMatrix();
 glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(-25.0f, -75.0f);
    glVertex2f(5.0f, -75.0f);
    glVertex2f(0.0f, -72.0f);
    glVertex2f(-20.0f, -72.0f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.1f, 0.8f);
    glVertex2f(-35.0f, -75.0f);
    glVertex2f(15.0f, -75.0f);
    glVertex2f(10.0f, -80.0f);
    glVertex2f(-30.0f, -80.0f);
glEnd();

glPopMatrix();
}



void Tree(float x, float y) {
glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.25f, 0.0f);
    glVertex2f(x - 2.0f, y);
    glVertex2f(x + 2.0f, y);
    glVertex2f(x + 2.0f, y + 20.0f);
    glVertex2f(x - 2.0f, y + 20.0f);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(x - 10.0f, y + 20.0f);
    glVertex2f(x + 10.0f, y + 20.0f);
    glVertex2f(x, y + 40.0f);

    glVertex2f(x - 8.0f, y + 30.0f);
    glVertex2f(x + 8.0f, y + 30.0f);
    glVertex2f(x, y + 50.0f);

    glVertex2f(x - 6.0f, y + 40.0f);
    glVertex2f(x + 6.0f, y + 40.0f);
    glVertex2f(x, y + 60.0f);
glEnd();
}

void Circle(float x, float y, float radius) {
    const int num_segments = 100;
    const float angle_step = 2.0f * M_PI / num_segments;

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= num_segments; ++i) {
        float angle = i * angle_step;
        float dx = radius * cos(angle);
        float dy = radius * sin(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void Cloud(float x, float y) {
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);


    Circle(x, y, 2.0f); // Main circle
    Circle(x + 4.0f, y + 2.0f, 4.0f);
    Circle(x - 4.0f, y + 2.0f, 4.0f);
    Circle(x + 2.0f, y + 4.0f, 4.0f);
    Circle(x - 2.0f, y + 4.0f, 4.0f);
    glPopMatrix();
}

void Cloud3(float x, float y) {
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glColor3f(1.0f, 1.0f, 0.8f);


    Circle(x, y, 2.0f); // Main circle
    Circle(x + 4.0f, y + 2.0f, 4.0f);
    Circle(x - 4.0f, y + 2.0f, 4.0f);
    Circle(x + 2.0f, y + 4.0f, 4.0f);
    Circle(x - 2.0f, y + 4.0f, 4.0f);
    glPopMatrix();
}


void village(){
    sky();
    sun();
    Cloud(0.0f, 70.0f);
    Cloud(20.0f, 90.0f);
    Cloud(50.0f, 80.0f);
    Cloud(80.0f, 70.0f);
    Cloud(-10.0f, 90.0f);
    Cloud(-20.0f, 90.0f);
    Cloud(-50.0f, 80.0f);
    Cloud(-80.0f, 70.0f);
    hill();
    river();
    landOne();
    landTwo();
    windMill(35,47);
    windMill(58,47);
      windMill(81,47);
    houseOne();
    houseTwo();
    boatOne();
    boatTwo();
    Tree(-50.0f, -20.0f);
    Tree(-70.0f, -25.0f);
    Tree(-90.0f, -20.0f);


}

void display() {
glClearColor(255.0f, 255.0f, 255.0f, 1.0f);  // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glMatrixMode(GL_MODELVIEW);
village();

glFlush();  // Render now


}






void Circle(float x, float y, float radius, float r, float g, float b) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(r, g, b);
    glVertex2f(x, y);
    int num_segments = 36;
    float angle_step = 2.0f * 3.1415926f / num_segments;
    for (int i = 0; i <= num_segments; ++i) {
        float angle = i * angle_step;
        float dx = cos(angle) * radius;
        float dy = sin(angle) * radius;
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}


void sky2(){
    Rectangle(-100.0f,-10.0f,100.0f,100.0f,0.7f, 1.0f, 1.0f);
}



void Cloud2(float x, float y) {
      glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);

    Circle(x, y, 2.0f,1.0f, 1.0f, 1.0f);
    Circle(x + 4.0f, y + 2.0f, 4.0f,1.0f, 1.0f, 1.0f);
    Circle(x - 4.0f, y + 2.0f, 4.0f,1.0f, 1.0f, 1.0f);
    Circle(x + 2.0f, y + 4.0f, 4.0f,1.0f, 1.0f, 1.0f);
    Circle(x - 2.0f, y + 4.0f, 4.0f,1.0f, 1.0f, 1.0f);
       glPopMatrix();
}





void Floor(float x, float y, float width, float height, float r, float g, float b) {
    Rectangle(x - width / 2, y, x + width / 2, y + height, r, g, b);
}

void Building(float x, float y,int z,float s,float r, float g, float b) {
    float scale = s;
    float floorHeight = 5.0f * scale;
    float buildingWidth = 20.0f *scale;

    for (int i = 0; i < z; ++i) {
        Floor(x, y + i * floorHeight, buildingWidth, floorHeight,r, g, b );


    for (int i = 0; i < z; ++i) {
        Rectangle(x - 9.0f, y + i * floorHeight + 1.0f, x - 4.0f, y + i * floorHeight + 4.0f, 0.8f, 0.8f, 1.0f);
        Rectangle(x + 4.0f, y + i * floorHeight + 1.0f, x + 9.0f, y + i * floorHeight + 4.0f, 0.8f, 0.8f, 1.0f);
    }


    Rectangle(x - 2.5f, y, x + 2.5f, y + 5.0f, 0.4f, 0.5f, 0.1f);
}
}




void carRectangle(float x1, float y1, float x2, float y2,float x3,float x4, float r, float g, float b) {
    glBegin(GL_POLYGON);
    glColor3f(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x3, y2);
    glVertex2f(x4, y2);
    glEnd();


}

void Car(float x, float y, float r, float g, float b) {
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    float scale = 0.3f;
    float carWidth = 60.0f * scale;
    float carHeight = 20.0f * scale;
    float wheelRadius = 8.0f * scale;

    //  the car body
    Rectangle(x - carWidth / 2, y + carHeight / 2, x + carWidth / 2, y - carHeight / 2,r,g,b);

    //  the car roof
    carRectangle(x - 20.0f * scale, (y + carHeight / 2)+3, x + 20.0f * scale, (y - carHeight / 2)+3 + 10.0f * scale,x + carWidth / 2.2,x - carWidth / 2.3, 0.0f, 0.0f, 0.5f);

    //  the windows
    Rectangle(x - 18.0f * scale, y + carHeight / 2 + 2.0f * scale, x + 18.0f * scale, y + carHeight / 2 + 8.0f * scale, 0.8f, 0.8f, 1.0f);

    //  the wheels
    Circle(x - carWidth / 4, y - (carHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f); // Left wheel
    Circle(x + carWidth / 4, y - (carHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f); // Right wheel
    glPopMatrix();
}


void Car2(float x, float y, float r, float g, float b) {
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    float scale = 0.3f;
    float carWidth = 60.0f * scale;
    float carHeight = 20.0f * scale;
    float wheelRadius = 8.0f * scale;

    //  the car body
    Rectangle(x - carWidth / 2, y + carHeight / 2, x + carWidth / 2, y - carHeight / 2,r,g,b);

    //  the car roof
    carRectangle(x - 20.0f * scale, (y + carHeight / 2)+3, x + 20.0f * scale, (y - carHeight / 2)+3 + 10.0f * scale,x + carWidth / 2.2,x - carWidth / 2.3, 0.0f, 0.0f, 0.5f);

    //  the windows
    Rectangle(x - 18.0f * scale, y + carHeight / 2 + 2.0f * scale, x + 18.0f * scale, y + carHeight / 2 + 8.0f * scale, 0.8f, 0.8f, 1.0f);

    //  the wheels
    Circle(x - carWidth / 4, y - (carHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f); // Left wheel
    Circle(x + carWidth / 4, y - (carHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f); // Right wheel
    glPopMatrix();
}

void Bus(float x, float y, float z) {
       glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    float scale = z;

    float busWidth = 120.0f*scale;
    float busHeight = 40.0f*scale;
    float wheelRadius = 12.0f*scale;
    float roofHeight = 15.0f*scale;
    float windowWidth = 20.0f*scale;
    float windowHeight = 15.0f*scale;
    float windowSpacing = 10.0f*scale;


    //  the body
    Rectangle(x - busWidth / 2, y - busHeight / 2, x + busWidth / 2, y + busHeight / 2, 1.0f, 0.8f, 0.0f);



    //  the windows
    for (float i = -busWidth / 2 + 8.0f; i <= busWidth / 1.5 - windowWidth - 8.0f; i += windowWidth + windowSpacing) {
        Rectangle(x + i, y - busHeight / 2 + 4.0f, x + i + windowWidth, y - busHeight / 2 + 4.0f + windowHeight, 1.0f, 1.0f, 1.0f);
    }

    //  the wheels
    Circle(x - busWidth / 3, y - (busHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f);
    Circle(x + busWidth / 3, y - (busHeight-3) / 2 - wheelRadius, wheelRadius, 0.0f, 0.0f, 0.0f);

     glPopMatrix();
}

void road(){

    Rectangle(-100.0f, -10.0f,100.0f, -30.0f,0.6f, 0.6f, 0.6f );
    Rectangle(-100.0f, -19.0f,100.0f, -21.0f,0.0f, 0.0f, 0.0f );

    for(int i=-100; i<=120 ; i+=20){
        Rectangle(i+5,-25,i+15,-27,1.0f, 1.0f, 1.0f );
}

    for(int i=-100; i<=120 ; i+=20){
        Rectangle(i+5,-14,i+15,-16,1.0f, 1.0f, 1.0f );
}
}






void land(){
    Rectangle(-100.0f, -50.0f,100.0f, -30.0f,0.1f, 1.0f, 0.2f );
      glPushMatrix();
 glTranslatef( 0.0f, _moveL,0.0f);
   for(int i=-100; i<=120 ; i+=10){
    Rectangle(i,-50,i+15,-56,i+12,0.1f, 1.0f, 0.2f );
}
   glPopMatrix();
}


void river2(){
    Rectangle(-100.0f, -100.0f,100.0f, -30.0f,0.0f, 0.8f, 0.9f);

}



void Tree2(float x, float y) {

glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.25f, 0.0f);
    glVertex2f(x - 1.0f, y);
    glVertex2f(x + 1.0f, y);
    glVertex2f(x + 1.0f, y + 10.0f);
    glVertex2f(x - 1.0f, y + 10.0f);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(x - 5.0f, y + 10.0f);
    glVertex2f(x + 5.0f, y + 10.0f);
    glVertex2f(x, y + 20.0f);

    glVertex2f(x - 4.0f, y + 15.0f);
    glVertex2f(x + 4.0f, y + 15.0f);
    glVertex2f(x, y + 25.0f);

    glVertex2f(x - 3.0f, y + 20.0f);
    glVertex2f(x + 3.0f, y + 20.0f);
    glVertex2f(x, y + 30.0f);
glEnd();
}



void city(){
    sky2();
    Cloud2(0.0f, 70.0f);
    Cloud2(20.0f, 90.0f);
    Cloud2(50.0f, 80.0f);
    Cloud2(80.0f, 70.0f);
    Cloud2(-10.0f, 90.0f);
    Cloud2(-20.0f, 90.0f);
    Cloud2(-50.0f, 80.0f);
    Cloud2(-80.0f, 70.0f);
    Building(-10.0f, -10.0f,10,1.5,0.8f, 1.0f, 1.0f);
    Building(20.0f, -10.0f,6,1.5,0.1f, 0.0f, 1.0f);
    Building(-60.0f, -10.0f,7,1.5,0.0f, 1.0f, 1.0f);
    Building(-83.0f, -10.0f,7,1.8,1.0f, 0.9f, 1.0f);
    Building(-30.0f, -10.0f,1,1.8,0.3f, 0.9f, 3.0f);
    Building(60.0f, -10.0f,7,1.5,1.0f, 0.2f, 0.4f);
    Building(83.0f, -10.0f,7,1.8,1.0f, 0.5f, 1.0f);
    Building(30.0f, -10.0f,3,1.8,0.0f, 0.9f, 0.0f);
    road();
    river2();
    land();
    Car(90.0f, -10.0f, 0.0f, 0.0f, 1.0f);
    Car(-90.0f, -10.0f, 0.2f, 0.6f, 1.0f);
    Car(-70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(0.0f, -10.0f,0.7f, 0.1f, 1.0f);
       Car(70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(160.0f, -10.0f,0.7f, 0.1f, 1.0f);
    Car(200.0f, -10.0f,0.7f, 0.1f, 0.2f);
    Car(-120.0f, -10.0f,0.7f, 0.8f, 0.7f);
    Car(-140.0f, -10.0f,0.7f, 0.8f, 1.0f);
    Car2(-40.0f, -20.0f,0.7f, 0.8f, 1.0f);
    Car2(40.0f, -20.0f,0.7f, 0.1f, 1.0f);
    Car2(120.0f, -20.0f,0.7f, 0.1f, 0.2f);
    Bus(10.0f, -14.0f,0.3f);
    Bus(-120.0f, -14.0f,0.3f);
    Tree2(90.0f, -50.0f);
    Tree2(75.0f, -50.0f);
    Tree2(60.0f, -50.0f);
    Tree2(45.0f, -50.0f);
    Tree2(30.0f, -50.0f);
    Tree2(15.0f, -50.0f);
    Tree2(0.0f, -50.0f);
    Tree2(-20.0f, -50.0f);
    Tree2(-35.0f, -50.0f);
    Tree2(-50.0f, -50.0f);
    Tree2(-65.0f, -50.0f);
    Tree2(-80.0f, -50.0f);
    Tree2(-95.0f, -50.0f);


}


void display2() {

    glClearColor(255.0f, 255.0f, 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    city();
    glFlush();  // Render now

}

void sky3(){
    Rectangle(-100.0f,-10.0f,100.0f,100.0f,0.0f, 0.0f, 0.0f);
}

void Building2(float x, float y,int z,float s,float r, float g, float b) {
    float scale = s;
    float floorHeight = 5.0f * scale;
    float buildingWidth = 20.0f *scale;

    for (int i = 0; i < z; ++i) {
        Floor(x, y + i * floorHeight, buildingWidth, floorHeight,r, g, b );


    for (int i = 0; i < z; ++i) {
        Rectangle(x - 9.0f, y + i * floorHeight + 1.0f, x - 4.0f, y + i * floorHeight + 4.0f, 1.0f, 1.0f, 0.0f);
        Rectangle(x + 4.0f, y + i * floorHeight + 1.0f, x + 9.0f, y + i * floorHeight + 4.0f, 1.0f, 1.0f, 0.0f);
    }


    Rectangle(x - 2.5f, y, x + 2.5f, y + 5.0f, 0.4f, 0.5f, 0.1f);
}
}


void moon(float x, float y, float radius) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.9f);
    glVertex2f(x, y); // Center of the moon
    for (int i = 0; i <= 360; i++) {
        float angle = i * M_PI / 180;
        glVertex2f(x + radius * cos(angle), y + radius * sin(angle));
    }
    glEnd();

    // Draw the crescent effect
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for the background
    glVertex2f(x + radius / 2, y); // Offset for crescent
    for (int i = 0; i <= 360; i++) {
        float angle = i * M_PI / 180;
        glVertex2f(x + (radius * cos(angle) / 1) + radius / 2, y + radius * sin(angle));
    }
    glEnd();
}
void river3(){
    Rectangle(-100.0f, -100.0f,100.0f, -30.0f,0.0f, 0.7f, 0.9f);

}

void cityNight(){
    sky3();

    moon(-70.0f, 80.0f, 10.0f);
     Cloud3(0.0f, 70.0f);
    Cloud3(20.0f, 90.0f);
    Cloud3(50.0f, 80.0f);
    Cloud3(80.0f, 70.0f);
    Cloud3(-10.0f, 90.0f);
    Cloud3(-20.0f, 90.0f);
    Cloud3(-50.0f, 80.0f);
    Cloud3(-80.0f, 70.0f);
    Building2(-10.0f, -10.0f,10,1.5,0.8f, 1.0f, 1.0f);
    Building2(20.0f, -10.0f,6,1.5,0.1f, 0.0f, 1.0f);
    Building2(-60.0f, -10.0f,7,1.5,0.0f, 1.0f, 1.0f);
    Building2(-83.0f, -10.0f,7,1.8,1.0f, 0.9f, 1.0f);
    Building2(-30.0f, -10.0f,3,1.8,0.3f, 0.9f, 3.0f);
    Building2(60.0f, -10.0f,7,1.5,1.0f, 0.2f, 0.4f);
    Building2(83.0f, -10.0f,7,1.8,1.0f, 0.5f, 1.0f);
    Building2(30.0f, -10.0f,3,1.8,0.0f, 0.9f, 0.0f);
    road();
    river3();
    land();
    Car(90.0f, -10.0f, 0.0f, 0.0f, 1.0f);
    Car(-90.0f, -10.0f, 0.2f, 0.6f, 1.0f);
    Car(-70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(0.0f, -10.0f,0.7f, 0.1f, 1.0f);
       Car(70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(160.0f, -10.0f,0.7f, 0.1f, 1.0f);
    Car(200.0f, -10.0f,0.7f, 0.1f, 0.2f);
    Car(-120.0f, -10.0f,0.7f, 0.8f, 0.7f);
    Car(-140.0f, -10.0f,0.7f, 0.8f, 1.0f);
    Car2(-40.0f, -20.0f,0.7f, 0.8f, 1.0f);
    Car2(40.0f, -20.0f,0.7f, 0.1f, 1.0f);
    Car2(120.0f, -20.0f,0.7f, 0.1f, 0.2f);
    Bus(10.0f, -14.0f,0.3f);
    Bus(-120.0f, -14.0f,0.3f);
    Tree2(90.0f, -50.0f);
    Tree2(75.0f, -50.0f);
    Tree2(60.0f, -50.0f);
    Tree2(45.0f, -50.0f);
    Tree2(30.0f, -50.0f);
    Tree2(15.0f, -50.0f);
    Tree2(0.0f, -50.0f);
    Tree2(-20.0f, -50.0f);
    Tree2(-35.0f, -50.0f);
    Tree2(-50.0f, -50.0f);
    Tree2(-65.0f, -50.0f);
    Tree2(-80.0f, -50.0f);
    Tree2(-95.0f, -50.0f);

}
void display3() {

    glClearColor(255.0f, 255.0f, 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    cityNight();
    glFlush();  // Render now

}

float snowflakesX[MAX_SNOWFLAKES];
float snowflakesY[MAX_SNOWFLAKES];
float snowflakesSize[MAX_SNOWFLAKES];


void initSnowflakes() {
    srand(time(NULL));
    for (int i = 0; i < MAX_SNOWFLAKES; i++) {
        snowflakesX[i] = rand() % 200 - 100; // Random x position in range [-100, 100]
        snowflakesY[i] = rand() % 200 + 100; // Start above the view
        snowflakesSize[i] = (rand() % 5 + 1) / 10.0; // Random size
    }
}

void drawSnowflake(float x, float y, float size) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // White color for snowflakes
    glVertex2f(x, y); // Center of the snowflake
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(x + size * cos(angle), y + size * sin(angle));
    }
    glEnd();
}
void updateSnowflakes(int value) {
    // Update snowflakes position
    for (int i = 0; i < MAX_SNOWFLAKES; i++) {
        snowflakesY[i] -= 0.5; // Move down
        if (snowflakesY[i] < -100) { // Reset if it goes off the screen
            snowflakesY[i] = 100; // Reset to the top
            snowflakesX[i] = rand() % 200 - 100; // Random x position
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, updateSnowflakes, 0); // Update again
}

void citySnow(){
    sky3();

    moon(-70.0f, 80.0f, 10.0f);
    Building2(-10.0f, -10.0f,10,1.5,0.8f, 1.0f, 1.0f);
    Building2(20.0f, -10.0f,6,1.5,0.1f, 0.0f, 1.0f);
    Building2(-60.0f, -10.0f,7,1.5,0.0f, 1.0f, 1.0f);
    Building2(-83.0f, -10.0f,7,1.8,1.0f, 0.9f, 1.0f);
    Building2(-30.0f, -10.0f,3,1.8,0.3f, 0.9f, 3.0f);
    Building2(60.0f, -10.0f,7,1.5,1.0f, 0.2f, 0.4f);
    Building2(83.0f, -10.0f,7,1.8,1.0f, 0.5f, 1.0f);
    Building2(30.0f, -10.0f,3,1.8,0.0f, 0.9f, 0.0f);
    road();
    river3();
    land();
    Car(90.0f, -10.0f, 0.0f, 0.0f, 1.0f);
    Car(-90.0f, -10.0f, 0.2f, 0.6f, 1.0f);
    Car(-70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(0.0f, -10.0f,0.7f, 0.1f, 1.0f);
       Car(70.0f, -10.0f,0.7f, 1.0f, 1.0f);
    Car(160.0f, -10.0f,0.7f, 0.1f, 1.0f);
    Car(200.0f, -10.0f,0.7f, 0.1f, 0.2f);
    Car(-120.0f, -10.0f,0.7f, 0.8f, 0.7f);
    Car(-140.0f, -10.0f,0.7f, 0.8f, 1.0f);
    Car2(-40.0f, -20.0f,0.7f, 0.8f, 1.0f);
    Car2(40.0f, -20.0f,0.7f, 0.1f, 1.0f);
    Car2(120.0f, -20.0f,0.7f, 0.1f, 0.2f);
    Bus(10.0f, -14.0f,0.3f);
    Bus(-120.0f, -14.0f,0.3f);
    Tree2(90.0f, -50.0f);
    Tree2(75.0f, -50.0f);
    Tree2(60.0f, -50.0f);
    Tree2(45.0f, -50.0f);
    Tree2(30.0f, -50.0f);
    Tree2(15.0f, -50.0f);
    Tree2(0.0f, -50.0f);
    Tree2(-20.0f, -50.0f);
    Tree2(-35.0f, -50.0f);
    Tree2(-50.0f, -50.0f);
    Tree2(-65.0f, -50.0f);
    Tree2(-80.0f, -50.0f);
    Tree2(-95.0f, -50.0f);
for (int i = 0; i < MAX_SNOWFLAKES; i++) {
        drawSnowflake(snowflakesX[i], snowflakesY[i], snowflakesSize[i]);
    }

}
void display4() {

    glClearColor(255.0f, 255.0f, 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    citySnow();
    glFlush();  // Render now

}



void skyN(){

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-100.0f, 50.0f);
glVertex2f(-100.0f, 100.0f);
glVertex2f(100.0f, 100.0f);
glVertex2f(100.0f, 50.0f);

glEnd();

}


float starsX[MAX_STARS];
float starsY[MAX_STARS];

void initStars() {
    srand(time(NULL));
    for (int i = 0; i < MAX_STARS; i++) {
        starsX[i] = (rand() % 200) - 100;
        starsY[i] = (rand() % 200) - 100;
    }
}

void drawStar(float x, float y) {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); // White color for stars
    glVertex2f(x, y + 1.0f);   // Adjusted for larger coordinate system
    glVertex2f(x - 0.5f, y - 0.5f);
    glVertex2f(x + 0.5f, y - 0.5f);

    glVertex2f(x, y - 1.0f);
    glVertex2f(x - 0.5f, y + 0.5f);
    glVertex2f(x + 0.5f, y + 0.5f);
    glEnd();
}


void villageNight(){
    skyN();
    for (int i = 0; i < 40; i++) {
        drawStar(starsX[i], starsY[i]);
    }
    moon(-75.0f, 82.0f, 10.0f);
    hill();
    river();
    landOne();
    landTwo();
    windMill(35,47);
    windMill(58,47);
      windMill(81,47);
    houseOne();
    houseTwo();
    boatOne();
    boatTwo();
    Tree(-50.0f, -20.0f);
    Tree(-70.0f, -25.0f);
    Tree(-90.0f, -20.0f);


}



void display5() {
glClearColor(255.0f, 255.0f, 255.0f, 1.0f);  // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glMatrixMode(GL_MODELVIEW);
villageNight();

glFlush();  // Render now


}



float raindropsX[MAX_RAINDROPS];
float raindropsY[MAX_RAINDROPS];
float raindropsLength[MAX_RAINDROPS];

void initRaindrops() {
    srand(static_cast<unsigned int>(time(NULL))); // Seed for random number generation
    for (int i = 0; i < MAX_RAINDROPS; i++) {
        raindropsX[i] = (rand() % 200) - 100; // Random x position in range [-100, 100]
        raindropsY[i] = (rand() % 200) + 100; // Random starting y position above the view
        raindropsLength[i] = (rand() % 10 + 5) / 10.0; // Random length between 0.5 and 1.5
    }
}

void drawRaindrop(float x, float y, float length) {
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f); // White color for raindrops
    glVertex2f(x, y);
    glVertex2f(x, y - length);
    glEnd();
}


void updateRaindrops(int value) {
    // Update raindrops position
    for (int i = 0; i < MAX_RAINDROPS; i++) {
        raindropsY[i] -= 1.0; // Move down
        if (raindropsY[i] < -100) { // Reset if it goes off the screen
            raindropsY[i] = 100; // Reset to the top
            raindropsX[i] = (rand() % 200) - 100; // Random x position
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, updateRaindrops, 0); // Update again
}


void Cloud4(float x, float y) {
      glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);

    Circle(x, y, 2.0f,0.6f, 0.6f, 0.6f);
    Circle(x + 4.0f, y + 2.0f, 4.0f,0.6f, 0.6f, 0.6f);
    Circle(x - 4.0f, y + 2.0f, 4.0f,0.6f, 0.6f, 0.6f);
    Circle(x + 2.0f, y + 4.0f, 4.0f,0.6f, 0.6f, 0.6f);
    Circle(x - 2.0f, y + 4.0f, 4.0f,0.6f, 0.6f, 0.6f);
       glPopMatrix();
}
void Lightning(float x, float y) {
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow color for lightning
    glBegin(GL_LINES);

    // Draw a zig-zag lightning bolt
    glVertex2f(x, y); // Start point
    glVertex2f(x - 2.0f, y - 5.0f); // Down and left
    glVertex2f(x - 2.0f, y - 5.0f);
    glVertex2f(x + 2.0f, y - 10.0f); // Down and right
    glVertex2f(x + 2.0f, y - 10.0f);
    glVertex2f(x, y - 15.0f); // Down

    glEnd();
    glPopMatrix();
}
void villageRain(){
    skyN();
    Cloud4(0.0f, 70.0f);
    Lightning(1.0f, 70.0f);
    Cloud4(20.0f, 90.0f);
    Cloud4(50.0f, 80.0f);
    Lightning(51.0f, 80.0f);
    Cloud4(80.0f, 70.0f);
    Cloud4(-10.0f, 90.0f);
    Cloud4(-20.0f, 90.0f);
     Lightning(-18.0f, 90.0f);
    Cloud4(-50.0f, 80.0f);
    Cloud4(-80.0f, 70.0f);
     glutSwapBuffers();
    hill();
    river();
    landOne();
    landTwo();
    windMill(35,47);
    windMill(58,47);
      windMill(81,47);
    houseOne();
    houseTwo();
    boatOne();
    boatTwo();
    Tree(-50.0f, -20.0f);
    Tree(-70.0f, -25.0f);
    Tree(-90.0f, -20.0f);
for (int i = 0; i < MAX_RAINDROPS; i++) {
        drawRaindrop(raindropsX[i], raindropsY[i], raindropsLength[i]);
    }


}




void display6() {
glClearColor(255.0f, 255.0f, 255.0f, 1.0f);  // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glMatrixMode(GL_MODELVIEW);
villageRain();

glFlush();  // Render now


}


bool Village = true;
bool City = false;


void SpecialInput(unsigned char key, int x, int y)
    {
    switch(key)
    {
        case 'a':
            glutDisplayFunc(display2);
            Village = false;
            City = true;
            break;
        case 's':
            glutDisplayFunc(display);
            Village = true;
            City = false;
            break;
    }

    glutPostRedisplay();
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	 if(City == true){
                        glutDisplayFunc(display3);

                    }


if (button == GLUT_RIGHT_BUTTON)
 if(City == true){
                        glutDisplayFunc(display4);

                    }

if (button == GLUT_LEFT_BUTTON)
	 if(Village== true){
                        glutDisplayFunc(display5);

                    }


if (button == GLUT_RIGHT_BUTTON)
 if(Village == true){
                        glutDisplayFunc(display6);

                    }



}





void SpecialInput(int key, int x, int y)
    {
    switch(key)
    {

        case GLUT_KEY_LEFT:
            if(Village == true){

                glutDisplayFunc(display5);
                }
                break;
        case GLUT_KEY_RIGHT:
                glutDisplayFunc(display4);
                break;

    }

    glutPostRedisplay();
}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("Village And City"); // Create a window with the given title

glutInitWindowSize(720, 1080); // Set the window's initial width & height
glutKeyboardFunc(SpecialInput);
glutSpecialFunc(SpecialInput);
glutMouseFunc(handleMouse);
glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-100,100,-100,100);
initSnowflakes();
initStars();
 initRaindrops();
glutTimerFunc(0, timer, 0);//Add a timer
glutTimerFunc(20, update1, 0); //Add a timer
glutTimerFunc(20, update2, 0); //Add a timer
glutTimerFunc(20, update3, 0);
glutTimerFunc(20, update4, 0);
glutTimerFunc(20, update5, 0);
glutTimerFunc(0, updateSnowflakes, 0);
glutTimerFunc(0, updateRaindrops, 0);
glutMainLoop(); // Enter the event-processing loop

return 0;

}
