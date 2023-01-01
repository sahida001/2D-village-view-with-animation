
#include<windows.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i, j, k;
GLfloat sun_spin=0, sun_x=0, sun_y=0;
GLfloat ax=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;

double  r=.2,s=.3;

float  tx=10,bx=10,sx=0;

bool flagScale=false;

void init(void)
{
glClearColor(.40, .110, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}

void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void StartingText()
{
    char text[120];
    sprintf(text, "BEAUTIFUL VILLAGE SCENARIO; NATURE'S BEAUTY",4.00,7.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"  PRESS D FOR DAY VIEW,PRESS N FOR NIGHT VIEW,PRESS R FOR RAIN VIEW",6.00,9.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
            glRasterPos2f( -30.5 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
    }
    sprintf(text,"  DEVELOPED BY-",6.00,9.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
            glRasterPos2f( 18 , -25 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
    }
        sprintf(text,"  MUNTAHINA ALAM",6.00,9.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
            glRasterPos2f( 18 , -30 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, text[i]);
    }


}



void Sun_Model(){
    glPushMatrix();
    glTranslatef(500,0,0);
    circle(60);
    glPopMatrix();

}

void Moving_Sun_Model(){
    glPushMatrix();
    glRotatef(-sun_spin, 0,0,-.009);
    Sun_Model();
    glPopMatrix();

}


void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);



    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(360,210,0);
    circle(16);
    glPopMatrix();


glPushMatrix();
    glTranslatef(355,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,204,0);
   circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305,204,0);
    circle(10);
    glPopMatrix();


}

void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);


    glPushMatrix();
    glTranslatef(305,205,0);
    circle(10);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(334,207,0);
    circle(10);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(320,207,0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);


    glPushMatrix();
    glTranslatef(300,200,0);
    circle(15);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(340,220,0);
    circle(16);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(360,210,0);
    circle(15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(380,200,0);
    circle(15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(360,190,0);
    circle(20);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(320,190,0);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,190,0);
    circle(20);
    glPopMatrix();

}

void hill_big(){


glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
glVertex2i(70, 70);
glVertex2i(200, 225);
glVertex2i(330, 70);

glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

glVertex2i(200, 225);
glVertex2i(230, 190);
glVertex2i(220, 180);
glVertex2i(200, 190);
glVertex2i(190, 180);
glVertex2i(170, 190);

glEnd();

}
void hill_small(){

glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
glVertex2i(250, 100);
glVertex2i(310, 175);
glVertex2i(370, 100);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
    glVertex2i(290, 150);
glVertex2i(310, 175);
glVertex2i(330, 150);
glVertex2i(325, 140);
glVertex2i(310, 150);
glVertex2i(300, 140);


glEnd();
}

void Tilla_One_Model(){

glBegin(GL_POLYGON);
glColor3f(0.1, 1.293, 0.0);
glVertex2i(125, 70);
glVertex2i(150, 80);
glVertex2i(160, 90);
glVertex2i(170, 90);
glVertex2i(180, 100);
glVertex2i(190, 105);
glVertex2i(200, 108);
glVertex2i(300, 110);
glVertex2i(300, 70);

glEnd();

}

void Tilla_Two_Model(){

glColor3f(0.1, 1.293, 0.0);

    glPushMatrix();
    glTranslatef(430,90,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420,87,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390,70,0);
    circle(30);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(445,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455,75,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465,70,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470,65,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,60,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485,55,0);
    circle(20);
    glPopMatrix();



}

void house(){

glBegin(GL_POLYGON);
    glColor3f(.990, 0.0, 0.0);
glVertex2i(285, 105);
glVertex2i(285, 130);
glVertex2i(380, 115);
glVertex2i(380, 105);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(.890, 0.0, 0.0);
glVertex2i(285, 105);
glVertex2i(285, 120);
glVertex2i(380, 105);
glVertex2i(380, 105);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(.555, 1.0, 1.0);
glVertex2i(290, 70);
glVertex2i(290, 104);
glVertex2i(375, 104);
glVertex2i(375, 70);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(.555, 0.924, 0.930);
glVertex2i(310, 70);
glVertex2i(350, 104);
glVertex2i(375, 104);
glVertex2i(375, 70);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
glVertex2i(330, 70);
glVertex2i(330, 100);
glVertex2i(350, 100);
glVertex2i(350, 70);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2i(295, 75);
glVertex2i(295, 90);
glVertex2i(310, 90);
glVertex2i(310, 75);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2i(312, 75);
glVertex2i(312, 90);
glVertex2i(327, 90);
glVertex2i(327, 75);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2i(355, 75);
glVertex2i(355, 90);
glVertex2i(370, 90);
glVertex2i(370, 75);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
glVertex2i(250, 90);
glVertex2i(257, 104);
glVertex2i(290, 104);
glVertex2i(290, 90);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(.555, .724, .930);
glVertex2i(255, 70);
glVertex2i(255, 90);
glVertex2i(290, 90);
glVertex2i(290, 70);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
glVertex2i(260, 70);
glVertex2i(260, 80);
glVertex2i(285, 80);
glVertex2i(285, 70);

glEnd();


}

void field(){

glBegin(GL_POLYGON);
    glColor3f(0.0, 1.593, 0.533);
glVertex2i(0, 10);
glVertex2i(0, 70);
glVertex2i(1000, 70);
glVertex2i(1000, 10);

glEnd();



glBegin(GL_POLYGON);
glColor3f(0.1, 1.293, 0.0);
glVertex2i(0, 0);
glVertex2i(0, 50);
glVertex2i(1000, 50);
glVertex2i(1000, 0);

glEnd();


}

void Tree_Model_One(){


    glPushMatrix();
    glTranslatef(110,110,0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110,100,0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2f(109, 70);
glVertex2f(109, 90);
glVertex2f(111, 90);
glVertex2f(111, 70);

    glEnd();

}
void Tree_Model_Two(){

    glPushMatrix();
    glTranslatef(130,130,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130,125,0);
    circle(5);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2f(129, 110);
glVertex2f(129, 124);
glVertex2f(131, 124);
glVertex2f(131, 110);

    glEnd();
}

void Tree_Model_Three(){


    glBegin(GL_POLYGON);

glVertex2f(125, 123);
glVertex2f(133, 145);
glVertex2f(141, 123);

glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
glVertex2f(132, 110);
glVertex2f(132, 124);
glVertex2f(134, 124);
glVertex2f(134, 110);

    glEnd();
}


void Windmill_Stand_Model(){

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2i(375, 100);
    glVertex2i(380, 240);
    glVertex2i(384, 240);
    glVertex2i(390, 100);
    glEnd();
}


void Windmill_Blade(){



    glBegin(GL_POLYGON);
    glVertex2i(-5, 0);
    glVertex2i(-85, -36);
    glVertex2i(-83, -37);
    glVertex2i(-3, -8);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2i(0, 5);
    glVertex2i(45, 70);
    glVertex2i(50, 73);
    glVertex2i(5, 0);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2i(68, -78);
    glVertex2i(0,0);
    glVertex2i(5, 5);
    glVertex2i(70, -77);
    glEnd();


}

void Windmill(){


    glColor3f(0.38, 0.41, 0.36);
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();


    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(380,250,0);
    circle(10);
    glPopMatrix();


    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(380,251,0);
    Windmill_Blade();
    glPopMatrix();
}

void Sun(){
    glColor3f(1, 1, 0);
    glPushMatrix();
    Moving_Sun_Model();
    glPopMatrix();

}

void moon(){
    glColor3f(0.980, 0.980, 0.980);
    glPushMatrix();
    Moving_Sun_Model();
    glPopMatrix();
}

void cloud_one(){
    glPushMatrix();
    glTranslatef(cx,-40,0);
    cloud_model_one();
    glPopMatrix();

}



void cloud_two(){
    glPushMatrix();
    glTranslatef(bx+100,150,0);
    cloud_model_one();
    glPopMatrix();

}



void cloud_three(){
    glPushMatrix();
    glTranslatef(ax-80,80,0);
    cloud_model_Two();
    glPopMatrix();

}


void cloud_four(){
    glPushMatrix();
    glTranslatef(dx+300,125,0);
    cloud_model_Two();
    glPopMatrix();

}

void cloud_five(){

    glPushMatrix();
    glTranslatef(ax+-300,170,0);
    cloud_model_Three();
    glPopMatrix();
}

void cloud_six(){

    glPushMatrix();
    glTranslatef(cx+-500,20,0);
    cloud_model_Three();
    glPopMatrix();
}


void house_one(){
    glPushMatrix();
    glTranslatef(0,0,0);
    house();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(450,0,0);
    house();
    glPopMatrix();
}


void Hill_Big_One(){
    glPushMatrix();
    glTranslatef(0,0,0);
    hill_big();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(550,-20,0);
    hill_big();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,0);
    hill_small();
    glPopMatrix();

}



void Tilla(){

    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_One_Model();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,0);
    Tilla_Two_Model();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,0,0);
    Tilla_Two_Model();
    glPopMatrix();


}



void Tree(){
    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(0,0,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(540,0,0);
    Tree_Model_One();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(30,-20,0);
    Tree_Model_Two();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(322,0,0);
    Tree_Model_Two();
    glPopMatrix();

    glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(760,-25,0);
    Tree_Model_Two();
    glPopMatrix();


     glColor3f(0.533, 1.293, 0.0);
    glPushMatrix();
    glTranslatef(90,-2,0);
    Tree_Model_Three();
    glPopMatrix();
}


void Windmill_One(){
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(0,-10,0);
    Windmill();
    glPopMatrix();

    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(508,-70,0);
    Windmill();
    glPopMatrix();

    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(108,-90,0);
    Windmill();
    glPopMatrix();

}

void displayD(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 1.0);
    Sun();
    Hill_Big_One();
    cloud_three();
    cloud_four();
    Windmill_One();
    Tilla();
    house_one();
    cloud_one();
    Tree();
    cloud_two();
    cloud_five();
    cloud_six();
    field();

glFlush();
}

void displayN(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.360, 0.320, 0.320);
    glRecti(-1200,1200,1200,50);

    moon();
    Hill_Big_One();
    cloud_three();
    cloud_four();
    Windmill_One();
    Tilla();
    house_one();
    cloud_one();
    Tree();
    cloud_two();
    cloud_five();
    cloud_six();
    field();

glFlush();
}


void sun_move(){

    sun_spin = sun_spin + 0.0093;

}
void move_right(){

    sun_move();

    spin = spin +.1;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if(cx>1000){
        cx = -300;
    }
    if(bx>1000){
            bx= -400;

    }
    if(cx>1000){
            cx= -400;

    }
    if(dx>1000){
            dx= -500;

    }


    glutPostRedisplay();
}



void mouse(int key, int state, int x, int y){
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 's':
        flagScale=true;
        break;
    case 'e':
        flagScale=false;
        break;
    case 'd':
        glutDisplayFunc(displayD);
        break;
    case 'n':
       glutDisplayFunc(displayN);
        break;


    case 27: // Escape key
        exit(1);
    }
    glutPostRedisplay();
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50, 50);
glutInitWindowSize(1900, 1900);
glutCreateWindow("Village view");
init();
glutKeyboardFunc(myKeyboardFunc);
    glutDisplayFunc(displayD);
    glutMouseFunc(mouse);
glutMainLoop();
}

