#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);// Clear the color buffer (background)

    /*
    glColor3ub(84,245, 66);
    glBegin(GL_LINES);
     glVertex2f(1,0);
     glVertex2f(-1,0);
     glVertex2f(0,1);
     glVertex2f(0,-1);
    glEnd();

    //yellow polygon
    glColor3ub(255,255, 0);
    glBegin(GL_POLYGON);
        glVertex2f(0.2,0.4);
        glVertex2f(0.4,0.6);
        glVertex2f(0.6,0.6);
        glVertex2f(0.8,0.4);
        glVertex2f(0.6,0.2);
        glVertex2f(0.4,0.2);

    glEnd();

    //Red Triangle
    glColor3ub(255,10,10);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.4,0.2);
        glVertex2f(-0.8,0.2);
        glVertex2f(-0.6,0.6);

    glEnd();

    //Green Square
    glColor3ub(84,245, 66);
    glBegin(GL_POLYGON);
        glVertex2f(-0.8,-0.2);
        glVertex2f(-0.4,-0.2);
        glVertex2f(-0.4,-0.6);
        glVertex2f(-0.8,-0.6);

    glEnd();


    //orange triangle
    glColor3ub(255, 165, 0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.6,-0.2);
        glVertex2f(0.8,-0.8);
        glVertex2f(0.4,-0.8);

    glEnd();
*/

//Task 2
//Hollow Star
   glColor3ub(255, 165, 0);
   glBegin(GL_LINES);
     glVertex2f(0,01);
     glVertex2f(0,-01);
    glEnd();

       glColor3ub(255, 165, 0);
   glBegin(GL_LINES);
     glVertex2f(-0.6,0.6);//1
     glVertex2f(-0.2,-0.6);//3

     glVertex2f(-0.2,-0.6);//3
     glVertex2f(-1,0.2);//5

     glVertex2f(-1,0.2);//5
     glVertex2f(-0.2,0.2);//2

     glVertex2f(-0.2,0.2);//2
     glVertex2f(-1, -0.6);//4

     glVertex2f(-1, -0.6);//4
     glVertex2f(-0.6,0.6);//1
    glEnd();




     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
