#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void myInit(void)
{
    glClearColor(0.0,0.8,1.0,1.0);//gives background color
    glColor3i(1,1,0);//drawing color
    glLineWidth(30.0);
    //glPointSize(3.0);//point size
    glMatrixMode(GL_PROJECTION);//
    glLoadIdentity();//
    gluOrtho2D(0.0,600.0,0.0,600.0);//
}

void mydisplay()
{

    glClear(GL_COLOR_BUFFER_BIT);//clears the screen
    glBegin(GL_POLYGON);
    glColor3f(1.0 ,0.5 ,0.0);
    glVertex2i(200,200);//1
    glVertex2i(200,400);
    glVertex2i(300,500);
     glVertex2i(400,400);
     glVertex2i(400,200);
     glEnd();


     glBegin(GL_POLYGON);//door
    glColor3f(0.5 ,0.0,0.0);
    glVertex2i(275,200);//1
    glVertex2i(275,300);
    glVertex2i(325,300);
    glVertex2i(325,200);
    glEnd();


     glBegin(GL_LINES); //outlines
    glColor3f(0.5 ,0.0 ,0.0);
    glVertex2i(200,200);//1
    glVertex2i(200,400);

    glVertex2i(200,400);//1
    glVertex2i(300,500);

    glVertex2i(300,500);
    glVertex2i(400,400);

    glVertex2i(400,400);
    glVertex2i(400,200);

    glVertex2i(200,200);
    glVertex2i(250,200);

    glVertex2i(350,200);
    glVertex2i(400,200);

    glVertex2i(250,200);
    glVertex2i(350,200);

     glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5 ,0.0,0.0);//brown small window
    glVertex2i(275,400);//1
    glVertex2i(275,440);
    glVertex2i(325,440);
    glVertex2i(325,400);
    glEnd();


    glBegin(GL_LINES);//window lines
    glColor3f(1.0 ,1.0 ,1.0);
    glVertex2i(300,400);
    glVertex2i(300,440);
    glVertex2i(275,420);
    glVertex2i(325,420);
    glEnd();



    glBegin(GL_POLYGON);//grass
    glColor3f(0.0 ,1.0 ,0.0);
    glVertex2i(0,0);
    glVertex2i(197,299);
    glVertex2i(197,0);

    glVertex2i(200,0);//grass
    glVertex2i(200,200);
    glVertex2i(400,200);
    glVertex2i(400,0);
    glEnd();


    glBegin(GL_POLYGON); //grass
    glColor3f(0.0,1.0,0.0);
    glVertex2i(600,0);
    glVertex2i(401,299);
    glVertex2i(401,0);
    glEnd();

    glBegin(GL_LINES);//grass filling point
    glColor3f(0.0 ,1.0 ,0.0);
    glVertex2i(400,0);
    glVertex2i(400,200);
    glEnd();




    char a[]="srishti uppal -500046830";
    glColor3f(0.0,0.0,0.0);
    glRasterPos2i(450,520);
    for(int i=0;i<strlen(a);i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a[i]);

    glFlush();   //sends output to screen


}

int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(200,100);
    glutCreateWindow("SRISHTI");
    glutDisplayFunc(mydisplay);
    myInit();
    glutMainLoop();
}
