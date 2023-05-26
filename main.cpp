#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <cmath>
#include <iostream>
#include<cmath>

using namespace std;


void myinit()
{
  glClearColor(0, 0, 0.1, 1); //bg color
  //glColor3f(1.0, 0.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-400.0, 400.0, -400.0, 400.0,-400.0,400.0); //position of elements
  glMatrixMode(GL_MODELVIEW);
  glShadeModel(GL_FLAT);
  glEnable(GL_DEPTH_TEST);
}

float putaransatu, putarandua = 0;
typedef struct
{
  float x,y;
}
point2D_t;

void drawDot(int x,int y)
{
  glBegin(GL_POINTS);
  glVertex2i(x,y);
  glEnd();
}


bool starVisible = true;

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    if (starVisible)
    {
        glColor3f(1.0, 1.0, 1.0); // Set color to white
    }
    else
    {
        glColor3f(0.0, 0.0, 0.0); // Set color to black
    }

    //white stars
    glPointSize(4.0); // Set the size of the point
    glBegin(GL_POINTS);

    glVertex2f(-394, 382); // Set the position of the point
    glVertex2f(-392, 372);
    glVertex2f(-388, 352);
    glVertex2f(-372, 377);
    glVertex2f(-368, 368);
    glVertex2f(-348, 377);
    glVertex2f(-328, 374);
    glVertex2f(-302, 365);
    glVertex2f(-277, 368);
    glVertex2f(-258, 372);
    glVertex2f(-248, 375);
    glVertex2f(-228, 366);
    glVertex2f(-204, 365);
    glVertex2f(-188, 362);
    glVertex2f(-168, 372);
    glVertex2f(-148, 350);
    glVertex2f(-108, 372);
    glVertex2f(-88, 354);
    glVertex2f(-50, 368);
    glVertex2f(-44, 358);
    glVertex2f(-4, 344);
    glVertex2f(18, 356);
    glVertex2f(68, 357);
    glVertex2f(100, 352);
    glVertex2f(180, 348);
    glVertex2f(140, 342);
    glVertex2f(200, 358);
    glVertex2f(210, 358);
    glVertex2f(237, 368);
    glVertex2f(260, 358);
    glVertex2f(298, 368);
    glVertex2f(328, 346);
    glVertex2f(298, 342);
    glVertex2f(350, 338);
    glVertex2f(368, 326);
    glVertex2f(388, 324); //400 max value for x axis according to win size, 382 max for y axis

    glVertex2f(-394, 314); // Set the position of the point
    glVertex2f(-392, 326);
    glVertex2f(-388, 328);
    glVertex2f(-372, 303);
    glVertex2f(-368, 318);
    glVertex2f(-348, 294);
    glVertex2f(-328, 304);
    glVertex2f(-302, 306);
    glVertex2f(-277, 308);
    glVertex2f(-258, 304);
    glVertex2f(-248, 298);
    glVertex2f(-228, 294);
    glVertex2f(-204, 284);
    glVertex2f(-188, 306);
    glVertex2f(-168, 274);
    glVertex2f(-148, 296);
    glVertex2f(-108, 306);
    glVertex2f(-88, 288);
    glVertex2f(-50, 278);
    glVertex2f(-44, 298);
    glVertex2f(-4, 274);
    glVertex2f(18, 268);
    glVertex2f(68, 297);
    glVertex2f(100, 254);
    glVertex2f(180, 244);
    glVertex2f(140, 258);
    glVertex2f(200, 268);
    glVertex2f(210, 238);
    glVertex2f(237, 288);
    glVertex2f(260, 267);
    glVertex2f(298, 254);
    glVertex2f(328, 252);
    glVertex2f(298, 244);
    glVertex2f(350, 234);
    glVertex2f(368, 258);
    glVertex2f(388, 272);

    glVertex2f(-394, 214); // Set the position of the point
    glVertex2f(-392, 226);
    glVertex2f(-388, 228);
    glVertex2f(-372, 203);
    glVertex2f(-368, 218);
    glVertex2f(-348, 294);
    glVertex2f(-328, 204);
    glVertex2f(-302, 206);
    glVertex2f(-277, 208);
    glVertex2f(-258, 204);
    glVertex2f(-248, 238);
    glVertex2f(-228, 244);
    glVertex2f(-204, 214);
    glVertex2f(-188, 206);
    glVertex2f(-168, 234);
    glVertex2f(-148, 256);
    glVertex2f(-108, 256);
    glVertex2f(-88, 248);
    glVertex2f(-50, 228);
    glVertex2f(-44, 238);
    glVertex2f(-4, 224);
    glVertex2f(18, 248);
    glVertex2f(68, 237);
    glVertex2f(100, 234);
    glVertex2f(180, 214);
    glVertex2f(140, 218);
    glVertex2f(200, 228);
    glVertex2f(210, 218);
    glVertex2f(237, 208);
    glVertex2f(260, 217);
    glVertex2f(298, 204);
    glVertex2f(328, 202);
    glVertex2f(298, 214);
    glVertex2f(350, 204);
    glVertex2f(368, 198);
    glVertex2f(388, 194);

     glVertex2f(-394, 114); // Set the position of the point
    glVertex2f(-392, 126);
    glVertex2f(-388, 138);
    glVertex2f(-372, 103);
    glVertex2f(-368, 148);
    glVertex2f(-348, 154);
    glVertex2f(-328, 164);
    glVertex2f(-302, 148);
    glVertex2f(-277, 118);
    glVertex2f(-258, 128);
    glVertex2f(-248, 138);
    glVertex2f(-228, 154);
    glVertex2f(-204, 158);
    glVertex2f(-188, 166);
    glVertex2f(-168, 164);
    glVertex2f(-148, 176);
    glVertex2f(-108, 156);
    glVertex2f(-88, 148);
    glVertex2f(-50, 168);
    glVertex2f(-44, 138);
    glVertex2f(-4, 177);
    glVertex2f(18, 188);
    glVertex2f(68, 158);
    glVertex2f(100, 194);
    glVertex2f(180, 186);
    glVertex2f(140, 168);
    glVertex2f(200, 138);
    glVertex2f(210, 148);
    glVertex2f(237, 158);
    glVertex2f(260, 168);
    glVertex2f(298, 178);
    glVertex2f(328, 102);
    glVertex2f(298, 148);
    glVertex2f(350, 167);
    glVertex2f(368, 158);
    glVertex2f(388, 178);

    glVertex2f(-394, 100); // Set the position of the point
    glVertex2f(-392, 102);
    glVertex2f(-388, 108);
    glVertex2f(-372, 110);
    glVertex2f(-368, 100);
    glVertex2f(-348, 118);
    glVertex2f(-328, 106);
    glVertex2f(-302, 102);
    glVertex2f(-277, 100);
    glVertex2f(-258, 106);
    glVertex2f(-248, 102);
    glVertex2f(-228, 112);
    glVertex2f(-204, 107);
    glVertex2f(-188, 111);
    glVertex2f(-168, 127);
    glVertex2f(-148, 122);
    glVertex2f(-108, 108);
    glVertex2f(-88, 100);
    glVertex2f(-50, 100);
    glVertex2f(-44, 104);
    glVertex2f(-4, 100);
    glVertex2f(18, 100);
    glVertex2f(68, 100);
    glVertex2f(100, 102);
    glVertex2f(180, 104);
    glVertex2f(140, 102);
    glVertex2f(200, 101);
    glVertex2f(210, 98);
    glVertex2f(237, 110);
    glVertex2f(260, 118);
    glVertex2f(298, 123);
    glVertex2f(328, 114);
    glVertex2f(298, 116);
    glVertex2f(350, 96);
    glVertex2f(368, 126);
    glVertex2f(388, 127); //400 max value for x axis according to win size

    glVertex2f(-394, 90); // Set the position of the point
    glVertex2f(-392, 88);
    glVertex2f(-388, 95);
    glVertex2f(-372, 70);
    glVertex2f(-368, 78);
    glVertex2f(-348, 94);
    glVertex2f(-328, 97);
    glVertex2f(-302, 80);
    glVertex2f(-277, 88);
    glVertex2f(-258, 72);
    glVertex2f(-248, 74);
    glVertex2f(-228,84);
    glVertex2f(-204, 88);
    glVertex2f(-188, 86);
    glVertex2f(-168, 70);
    glVertex2f(-148, 76);
    glVertex2f(-108, 84);
    glVertex2f(-88, 92);
    glVertex2f(-50, 84);
    glVertex2f(-44, 99);
    glVertex2f(-4, 77);
    glVertex2f(18, 82);
    glVertex2f(68, 88);
    glVertex2f(100, 65);
    glVertex2f(180, 68);
    glVertex2f(140, 72);
    glVertex2f(200, 77);
    glVertex2f(210, 74);
    glVertex2f(237, 78);
    glVertex2f(260, 82);
    glVertex2f(298, 88);
    glVertex2f(328, 74);
    glVertex2f(298, 64);
    glVertex2f(350, 68);
    glVertex2f(368, 62);
    glVertex2f(388, 74); //400 max value for x axis according to win size

    glVertex2f(-394, 60); // Set the position of the point
    glVertex2f(-392, 58);
    glVertex2f(-388, 55);
    glVertex2f(-372, 57);
    glVertex2f(-368, 64);
    glVertex2f(-348, 54);
    glVertex2f(-328, 62);
    glVertex2f(-302, 54);
    glVertex2f(-277, 52);
    glVertex2f(-258, 48);
    glVertex2f(-248, 57);
    glVertex2f(-228,49);
    glVertex2f(-204, 52);
    glVertex2f(-188, 46);
    glVertex2f(-168, 70);
    glVertex2f(-148, 42);
    glVertex2f(-108, 57);
    glVertex2f(-88, 54);
    glVertex2f(-50, 44);
    glVertex2f(-44, 48);
    glVertex2f(-4, 42);
    glVertex2f(18, 40);
    glVertex2f(68, 38);
    glVertex2f(100, 50);
    glVertex2f(180, 58);
    glVertex2f(140, 62);
    glVertex2f(200, 54);
    glVertex2f(210, 52);
    glVertex2f(237, 47);
    glVertex2f(260, 42);
    glVertex2f(298, 44);
    glVertex2f(328, 42);
    glVertex2f(298, 40);
    glVertex2f(350, 38);
    glVertex2f(368, 41);
    glVertex2f(388, 48); //400 max value for x axis according to win size

     glVertex2f(-394, 42); // Set the position of the point
    glVertex2f(-392, 44);
    glVertex2f(-388, 38);
    glVertex2f(-372, 45);
    glVertex2f(-368, 35);
    glVertex2f(-348, 32);
    glVertex2f(-328, 40);
    glVertex2f(-302, 25);
    glVertex2f(-277, 28);
    glVertex2f(-258, 30);
    glVertex2f(-248, 24);
    glVertex2f(-228, 28);
    glVertex2f(-204, 34);
    glVertex2f(-188, 38);
    glVertex2f(-168, 28);
    glVertex2f(-148, 37);
    glVertex2f(-108, 22);
    glVertex2f(-88, 17);
    glVertex2f(-50, 18);
    glVertex2f(-44, 26);
    glVertex2f(-4, 28);
    glVertex2f(18, 38);
    glVertex2f(68, 32);
    glVertex2f(100, 28);
    glVertex2f(180, 25);
    glVertex2f(140, 28);
    glVertex2f(200, 18);
    glVertex2f(210, 16);
    glVertex2f(237, 14);
    glVertex2f(260, 22);
    glVertex2f(298, 28);
    glVertex2f(328, 24);
    glVertex2f(298, 16);
    glVertex2f(350, 14);
    glVertex2f(368, 22);
    glVertex2f(388, 14); //400 max value for x axis according to win size

    glVertex2f(-394, 18); // Set the position of the point
    glVertex2f(-392, 14);
    glVertex2f(-388, 16);
    glVertex2f(-372, 8);
    glVertex2f(-368, 4);
    glVertex2f(-348, 10);
    glVertex2f(-328, 2);
    glVertex2f(-302, 7);
    glVertex2f(-277, 8);
    glVertex2f(-258, 4);
    glVertex2f(-248, 2);
    glVertex2f(-228, 8);
    glVertex2f(-204, 8);
    glVertex2f(-188, 4);
    glVertex2f(-168, 1);
    glVertex2f(-148, 2);
    glVertex2f(-108, 6);
    glVertex2f(-88, 11);
    glVertex2f(-50, 1);
    glVertex2f(-44, -2);
    glVertex2f(-4, -4);
    glVertex2f(18, 1);
    glVertex2f(68, -6);
    glVertex2f(100, -14);
    glVertex2f(180, -16);
    glVertex2f(140, 2);
    glVertex2f(200, 0);
    glVertex2f(210, 24);
    glVertex2f(237, -14);
    glVertex2f(260, -20);
    glVertex2f(298, -30);
    glVertex2f(328, -24);
    glVertex2f(298, -22);
    glVertex2f(350, -24);
    glVertex2f(368, -14);
    glVertex2f(388, -4); //400 max value for x axis according to win size

    glVertex2f(-394, -24); // Set the position of the point
    glVertex2f(-392, -34);
    glVertex2f(-388, -26);
    glVertex2f(-372, -34);
    glVertex2f(-368, -16);
    glVertex2f(-348, -32);
    glVertex2f(-328, -32);
    glVertex2f(-302, -44);
    glVertex2f(-277, -42);
    glVertex2f(-258, -44);
    glVertex2f(-248, -46);
    glVertex2f(-228, -34);
    glVertex2f(-204, -36);
    glVertex2f(-188, -45);
    glVertex2f(-168, -49);
    glVertex2f(-148, -40);
    glVertex2f(-108, -20);
    glVertex2f(-88, -49);
    glVertex2f(-50, -50);
    glVertex2f(-44, -54);
    glVertex2f(-4, -56);
    glVertex2f(18, -44);
    glVertex2f(68, -56);
    glVertex2f(100, -55);
    glVertex2f(180, -42);
    glVertex2f(140, -59);
    glVertex2f(200, -60);
    glVertex2f(210, -64);
    glVertex2f(237, -54);
    glVertex2f(260, -44);
    glVertex2f(298, -25);
    glVertex2f(328, -34);
    glVertex2f(298, -16);
    glVertex2f(350, -34);
    glVertex2f(368, -44);
    glVertex2f(388, -64); //400 max value for x axis according to win size

    glVertex2f(-394, -58); // Set the position of the point
    glVertex2f(-392, -68);
    glVertex2f(-388, -55);
    glVertex2f(-372, -74);
    glVertex2f(-368, -84);
    glVertex2f(-348, -94);
    glVertex2f(-328, -65);
    glVertex2f(-302, -74);
    glVertex2f(-277, -76);
    glVertex2f(-258, -56);
    glVertex2f(-248, -66);
    glVertex2f(-228, -86);
    glVertex2f(-204, -76);
    glVertex2f(-188, -94);
    glVertex2f(-168, -92);
    glVertex2f(-148, -86);
    glVertex2f(-108, -54);
    glVertex2f(-88, -76);
    glVertex2f(-50, -86);
    glVertex2f(-44, -64);
    glVertex2f(-4, -74);
    glVertex2f(18, -86);
    glVertex2f(68, -84);
    glVertex2f(100, -66);
    glVertex2f(180, -92);
    glVertex2f(140, -82);
    glVertex2f(200, -66);
    glVertex2f(210, -74);
    glVertex2f(237, -84);
    glVertex2f(260, -94);
    glVertex2f(298, -84);
    glVertex2f(328, -74);
    glVertex2f(298, -64);
    glVertex2f(350, -84);
    glVertex2f(368, -74);
    glVertex2f(388, -86); //400 max value for x axis according to win size

    glVertex2f(-394, -104); // Set the position of the point
    glVertex2f(-392, -92);
    glVertex2f(-388, -114);
    glVertex2f(-372, -124);
    glVertex2f(-368, -116);
    glVertex2f(-348, -126);
    glVertex2f(-328, -129);
    glVertex2f(-302, -120);
    glVertex2f(-277, -114);
    glVertex2f(-258, -126);
    glVertex2f(-248, -134);
    glVertex2f(-228, -144);
    glVertex2f(-204, -134);
    glVertex2f(-188, -126);
    glVertex2f(-168, -116);
    glVertex2f(-148, -104);
    glVertex2f(-108, -114);
    glVertex2f(-88, -126);
    glVertex2f(-50, -134);
    glVertex2f(-44, -144);
    glVertex2f(-4, -111);
    glVertex2f(18, -122);
    glVertex2f(68, -155);
    glVertex2f(100, -144);
    glVertex2f(180, -166);
    glVertex2f(140, -177);
    glVertex2f(200, -154);
    glVertex2f(210, -144);
    glVertex2f(237, -174);
    glVertex2f(260, -184);
    glVertex2f(298, -166);
    glVertex2f(328, -186);
    glVertex2f(298, -154);
    glVertex2f(350, -164);
    glVertex2f(368, -176);
    glVertex2f(388, -164); //400 max value for x axis according to win size

    glVertex2f(-394, -194); // Set the position of the point
    glVertex2f(-392, -106);
    glVertex2f(-388, -196);
    glVertex2f(-372, -109);
    glVertex2f(-368, -120);
    glVertex2f(-348, -186);
    glVertex2f(-328, -186);
    glVertex2f(-302, -204);
    glVertex2f(-277, -204);
    glVertex2f(-258, -214);
    glVertex2f(-248, -222);
    glVertex2f(-228, -216);
    glVertex2f(-204, -234);
    glVertex2f(-188, -236);
    glVertex2f(-168, -236);
    glVertex2f(-148, -240);
    glVertex2f(-108, -244);
    glVertex2f(-88, -266);
    glVertex2f(-50, -254);
    glVertex2f(-44, -244);
    glVertex2f(-4, -274);
    glVertex2f(18, -264);
    glVertex2f(68, -284);
    glVertex2f(100, -294);
    glVertex2f(180, -276);
    glVertex2f(140, -264);
    glVertex2f(200, -255);
    glVertex2f(210, -245);
    glVertex2f(237, -266);
    glVertex2f(260, -254);
    glVertex2f(298, -254);
    glVertex2f(328, -264);
    glVertex2f(298, -254);
    glVertex2f(350, -274);
    glVertex2f(368, -246);
    glVertex2f(388, -266); //400 max value for x axis according to win size

    glVertex2f(-394, -274); // Set the position of the point
    glVertex2f(-392, -262);
    glVertex2f(-388, -264);
    glVertex2f(-372, -284);
    glVertex2f(-368, -294);
    glVertex2f(-348, -300);
    glVertex2f(-328, -304);
    glVertex2f(-302, -296);
    glVertex2f(-277, -306);
    glVertex2f(-258, -314);
    glVertex2f(-248, -306);
    glVertex2f(-228, -324);
    glVertex2f(-204, -334);
    glVertex2f(-188, -344);
    glVertex2f(-168, -354);
    glVertex2f(-148, -362);
    glVertex2f(-108, -352);
    glVertex2f(-88, -366);
    glVertex2f(-50, -354);
    glVertex2f(-44, -344);
    glVertex2f(-4, -374);
    glVertex2f(18, -364);
    glVertex2f(68, -384);
    glVertex2f(100, -394);
    glVertex2f(180, -376);
    glVertex2f(140, -364);
    glVertex2f(200, -355);
    glVertex2f(210, -345);
    glVertex2f(237, -366);
    glVertex2f(260, -354);
    glVertex2f(298, -374);
    glVertex2f(328, -364);
    glVertex2f(298, -354);
    glVertex2f(350, -374);
    glVertex2f(368, -346);
    glVertex2f(388, -366); //400 max value for x axis according to win size
    glEnd();

    putaransatu += 0.3; //speed of earth rotation and transformation
    putarandua += 2; //speed of moon rotation and transformation

    glPushMatrix();

    //sun shade outer
    glColor3f(.7,.3,0); //sun color
    glRotated(putaransatu,0,0,1);
    glutWireSphere(74, 278, 87); //first parameter for sunsize
    //glutWireSphere(65.0, 30000, 3);

    //sun
    glColor3ub(248, 1418, 0); //sun color
    glRotated(putaransatu,0,0,1);
    glutWireSphere(68, 278, 87); //first parameter for sunsize
    //glutWireSphere(65.0, 30000, 3);

    //earth
    glTranslatef(-56, -57, 0); //earth trans...

    glTranslatef(-45, -45, 0);

    glTranslatef(-82, -82, 0);

    glColor3f(0.2,0.4,0.8);//earth color
    glutWireSphere(28.0, 34000, 2);

    //moon
    glColor3f(0,0,0);//moon orbit color
    glBegin(GL_LINE_STRIP);

    for (float x=0; x<=6.28; x+=0.001)
    {
        glVertex2f(cos(x)*60,sin(x)*60);
    }
    glEnd();

    glColor3f(1,1,1); //moon color
    glRotated(putarandua, 12, .5, 12); //moon speed
    glTranslatef(42, -44, 0); //moon translate
    glutWireSphere(8, 6000, 4);
    //reflection of moon


    glPopMatrix();

    glPushMatrix();


    //main orbit
    glColor3f(.2,.3,.4);//main orbit color
    glBegin(GL_LINE_STRIP);
    for (float x=0; x<=6.28; x+=0.001)
    {
        glVertex2f(cos(x)*250,sin(x)*250); //circle size of main orbit
    }
    glEnd();

    glPopMatrix();
    glFlush();
    glutPostRedisplay();
}

void updat(int value)
{
    starVisible = !starVisible; // Toggle the visibility state of the stars
    glutPostRedisplay();  // Mark the window for redrawing
    glutTimerFunc(128, updat, 0);  // blink every 128 ms
}

//Called when a key is pressed
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 27: //Escape key
			exit(0);
	}
}

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING); //Enable lighting
	//you can have upto 8 lighting
	glEnable(GL_LIGHT0); //Enable light #0
	glEnable(GL_LIGHT1); //Enable light #1
	glEnable(GL_NORMALIZE); //Automatically normalize normals
	//glShadeModel(GL_SMOOTH); //Enable smooth shading
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = -70.0f;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -8.0f);

	//Add ambient light
	//sh that shines everywhere in our scene by the same amount
	//every face gets the same amount
	GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f}; //Color (0.2, 0.2, 0.2) and intensity //can be greater than 1 so not like color
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

	//Add positioned light
	GLfloat lightColor0[] = {0.5f, 0.5f, 0.5f, 1.0f}; //Color (0.5, 0.5, 0.5)
	GLfloat lightPos0[] = {4.0f, 0.0f, 8.0f, 1.0f}; //Positioned at (4, 0, 8)
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);

	//Add directed light
	GLfloat lightColor1[] = {0.5f, 0.2f, 0.2f, 1.0f}; //Color (0.5, 0.2, 0.2)
	//Coming from the direction (-1, 0.5, 0.5)
	// 0 because direced light source
	GLfloat lightPos1[] = {-1.0f, 0.5f, 0.5f, 0.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);

	glRotatef(_angle, 1.0f, 0.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);

	//Front
	//normal is a vector perpendicular the face we are drawing
	//we need this because if the light source is directly opp to the face then it will be light a lot
	//or if behind it won't be lit at all
	//they have to point outwards, so the back of the face don't get light
	glNormal3f(0.0f, 0.0f, 1.0f);
	//glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, -1.0f, 1.5f);
	//glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, -1.0f, 1.5f);
	//glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, 1.0f, 1.5f);
	//glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, 1.0f, 1.5f);

	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	//glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, -1.0f, -1.5f);
	//glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, 1.0f, -1.5f);
	//glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, 1.0f, 1.5f);
	//glNormal3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.5f, -1.0f, 1.5f);

	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	//glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, -1.0f, -1.5f);
	//glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, 1.0f, -1.5f);
	//glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, 1.0f, -1.5f);
	//glNormal3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, -1.0f, -1.5f);

	//Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	//glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, -1.0f, -1.5f);
	//glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, -1.0f, 1.5f);
	//glNormal3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.5f, 1.0f, 1.5f);
	//glNormal3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(-1.5f, 1.0f, -1.5f);

	glEnd();

	glutSwapBuffers();
}

void update(int value) {
	_angle += 1.5f;
	if (_angle > 360) {
		_angle -= 360;
	}

	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}



//main function
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1080,1920);
    glutInitWindowPosition(0,0);
    glutCreateWindow("space");
    glutDisplayFunc(display);
    myinit();
    glutTimerFunc(0, updat, 0);  // Start the update loop stars

    glutTimerFunc(25, update, 0);

    glutMainLoop();
    return 0;
}
