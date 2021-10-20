//Circle using GL_TRIANGLE_FAN
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846
GLfloat j=0.0;
GLfloat i = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

GLfloat positionplane = 0.0f;
GLfloat speedplane = 0.006f;

GLfloat positionBoat = 0.0f;
GLfloat speedBoat = 0.0007f;
GLfloat positionBoat1 = 0.0f;
GLfloat speedBoat1 = 0.0008f;

GLfloat positionman = 0.0f;
GLfloat speedman = 0.008f;



void update(int value) {
if(position >1.0)
        position =-1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void update1(int value) {
if(position1 <- 1.0)
        position1 = 1.0f;
    position1 -= speed1;
	glutPostRedisplay();
	glutTimerFunc(100, update1, 0);

}
void updateplane(int value) {
    if(positionplane > 6.0)
        positionplane = -6.0f;
    positionplane += speedplane;
	glutPostRedisplay();
	glutTimerFunc(1, updateplane, 0);
}


void updateBoat(int value) {
    if(positionBoat <-6.0)
        positionBoat = 6.0f;
    positionBoat -= speedBoat;
	glutPostRedisplay();
	glutTimerFunc(1, updateBoat, 0);
}
void updateBoat1(int value) {
    if(positionBoat1 > 6.0)
        positionBoat1 = -6.0f;
    positionBoat1 += speedBoat1;
	glutPostRedisplay();
	glutTimerFunc(1, updateBoat1, 0);
}


void updateman(int value) {
    if(positionman <-6.0)
        positionman = 6.0f;
    positionman -= speedman;
	glutPostRedisplay();
	glutTimerFunc(1, updateman, 0);
}

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("a.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void display_down()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

       //sky
    glBegin(GL_QUADS);
    glColor3ub(45, 221, 252);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.6);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.6);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.76,0.4);
    glVertex2f(1,0.4);
    glVertex2f(0.8,0.6);
    glEnd();
    //trees
    glTranslatef(.2,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();


    //////////

    glBegin(GL_QUADS);
    glColor3ub(21, 156, 11);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();





    glLoadIdentity();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);

    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);

    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();

    //road
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.2);
    glVertex2f(-1, -.2);
    glEnd();

    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);

    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();



    //sun

    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //car1
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();





//////CAR  chaka

   x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




   //Car2
    glTranslatef(.77,.22,0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();


    x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

glLoadIdentity();

            //house

            //1ST Building
              //glTranslatef(1.2,0,0);
              glScalef(1.4,1.8,0);
              glBegin(GL_QUADS);
              glColor3f(0,255,51);
              glVertex2f(.34,0.1);
              glVertex2f(.46,0.1);
              glVertex2f(.46,0.4);
              glVertex2f(.34,0.4);


              glEnd();


              //border building

              //glScalef(1.4,1.8,0);
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.34,.4);
              glVertex2f(.46,0.4);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.36,.1);
              glVertex2f(.36,0.4);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.38,.1);
              glVertex2f(.38,0.4);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.4,.1);
              glVertex2f(.4,0.4);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.42,.1);
              glVertex2f(.42,0.4);
              glEnd();

                glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.44,.1);
              glVertex2f(.44,0.4);
              glEnd();


                   //3rd Building
                glBegin(GL_QUADS);
                glColor3f(0,255,51);
                glVertex2f(.54,0.1);
                glVertex2f(.66,0.1);
                glVertex2f(.66,0.38);
                glVertex2f(.54,0.38);
                glEnd();

                glBegin(GL_QUADS);
                glColor3f(1,1,1);
                glVertex2f(.56,0.1);
                glVertex2f(.66,0.1);
                glVertex2f(.66,0.23);
                glVertex2f(.56,0.23);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.25);
                glVertex2f(.66,0.25);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.28);
                glVertex2f(.66,0.28);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.31);
                glVertex2f(.66,0.31);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.34);
                glVertex2f(.66,0.34);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.37);
                glVertex2f(.66,0.37);
                glEnd();


           //2nd Building
               glBegin(GL_QUADS);
               glColor3f(0,0,51);
               glVertex2f(.44,0.1);
               glVertex2f(.56,0.1);
               glVertex2f(.56,0.32);
               glVertex2f(.44,0.32);
               glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,0.12);
              glVertex2f(.56,0.12);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.14);
              glVertex2f(.56,0.14);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.16);
              glVertex2f(.56,0.16);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.18);
              glVertex2f(.56,0.18);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.2);
              glVertex2f(.56,0.2);
              glEnd();



              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.22);
              glVertex2f(.56,0.22);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.24);
              glVertex2f(.56,0.24);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.26);
              glVertex2f(.56,0.26);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.28);
              glVertex2f(.56,0.28);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,0.3);
              glVertex2f(.56,0.3);
              glEnd();


              glLoadIdentity();











   //tree
    glTranslatef(-.25,-1,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();
    glLoadIdentity();

 //small tree
    //glScalef(.8,.8,0);
    glTranslatef(-.15,-1.1,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();
    glLoadIdentity();

    //shohid minar


   glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();



    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();




    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(79, 26,8);
    glVertex2f(-0.5,0.08);
    glVertex2f(-0.42,0.08);
    glVertex2f(-0.42,0.1);
    glVertex2f(-0.5,0.1);
    glEnd();
/////
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();

    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


     //glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();
    glLoadIdentity();

    x=-.45f;y=.04f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //national flag


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.27,-0.1);
    glVertex2f(-0.26,-0.1);
    glVertex2f(-0.26,0.15);
    glVertex2f(-0.27,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 64);
    glVertex2f(-0.27,0.1);
    glVertex2f(-0.12,0.1);
    glVertex2f(-0.12,0.2);
    glVertex2f(-0.27,0.2);
    glEnd();



    x=-.19f;y=.15f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(500,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //school

    glBegin(GL_QUADS);
    glColor3ub(255,153,153);
    glVertex2f(-0.1,-0.1);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,0.3);
    glVertex2f(-0.1,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,153,255);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.35,0.0);
    glVertex2f(0.35,0.4);
    glVertex2f(0.3,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,204,255);
    glVertex2f(0.3,.3);
    glVertex2f(0.35,0.4);
    glVertex2f(0.0,0.4);
    glVertex2f(-0.1,0.3);
    glEnd();


    //school window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();
    glLoadIdentity();

     ///


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glLoadIdentity();
    ///



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();




    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glLoadIdentity();

    //school door
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(0.05,-0.1);
    glVertex2f(0.12,-0.1);
    glVertex2f(0.12,-0.02);
    glVertex2f(0.05,-0.02);
    glEnd();



//1ST tringle tree
    glScalef(.7,.7,0);
    glTranslatef(.1,-1.2,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();

    //2ND TREE
     glScalef(.7,.7,0);
    glTranslatef(.25,-1.3,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();





//HAWAI MITAI
    glTranslatef(-0.2, 0.72, 0.0);
    glScalef(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.05f, 0.0f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.1, 0.25);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=1.5;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.25, 0.0);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.1;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.1, -0.25);


    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.1;

    //sky




//glutTimerFunc(1000,display1,0);
	glFlush();
}



   // glFlush();

void display1(int b)
{
    glutDisplayFunc(display_down);
    sound();
}



void display() {

   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 128);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.6);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.6);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.76,0.4);
    glVertex2f(1,0.4);
    glVertex2f(0.8,0.6);
    glEnd();
    //trees
    glTranslatef(.2,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();


    //////////

    glBegin(GL_QUADS);
    glColor3ub(21, 156, 11);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();





    glLoadIdentity();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);

    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);

    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();

    //road
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.2);
    glVertex2f(-1, -.2);
    glEnd();

    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);

    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();



    //sun

    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //car1
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();





//////CAR  chaka

   x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




   //Car2
    glTranslatef(.77,.22,0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();


    x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

glLoadIdentity();

            //house

            //1ST Building
              //glTranslatef(1.2,0,0);
              glScalef(1.4,1.8,0);
              glBegin(GL_QUADS);
              glColor3f(0,255,51);
              glVertex2f(.34,0.1);
              glVertex2f(.46,0.1);
              glVertex2f(.46,0.4);
              glVertex2f(.34,0.4);


              glEnd();


              //border building

              //glScalef(1.4,1.8,0);
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.34,.4);
              glVertex2f(.46,0.4);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.36,.1);
              glVertex2f(.36,0.4);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.38,.1);
              glVertex2f(.38,0.4);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.4,.1);
              glVertex2f(.4,0.4);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.42,.1);
              glVertex2f(.42,0.4);
              glEnd();

                glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.44,.1);
              glVertex2f(.44,0.4);
              glEnd();


                   //3rd Building
                glBegin(GL_QUADS);
                glColor3f(0,255,51);
                glVertex2f(.54,0.1);
                glVertex2f(.66,0.1);
                glVertex2f(.66,0.38);
                glVertex2f(.54,0.38);
                glEnd();

                glBegin(GL_QUADS);
                glColor3f(1,1,1);
                glVertex2f(.56,0.1);
                glVertex2f(.66,0.1);
                glVertex2f(.66,0.23);
                glVertex2f(.56,0.23);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.25);
                glVertex2f(.66,0.25);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.28);
                glVertex2f(.66,0.28);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.31);
                glVertex2f(.66,0.31);
                glEnd();

                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.34);
                glVertex2f(.66,0.34);
                glEnd();


                glBegin(GL_LINES);
                glColor3f(1,1,1);
                glVertex2f(.54,0.37);
                glVertex2f(.66,0.37);
                glEnd();


           //2nd Building
               glBegin(GL_QUADS);
               glColor3f(0,0,51);
               glVertex2f(.44,0.1);
               glVertex2f(.56,0.1);
               glVertex2f(.56,0.32);
               glVertex2f(.44,0.32);
               glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,0.12);
              glVertex2f(.56,0.12);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.14);
              glVertex2f(.56,0.14);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.16);
              glVertex2f(.56,0.16);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.18);
              glVertex2f(.56,0.18);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.2);
              glVertex2f(.56,0.2);
              glEnd();



              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.22);
              glVertex2f(.56,0.22);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.24);
              glVertex2f(.56,0.24);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.26);
              glVertex2f(.56,0.26);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,.28);
              glVertex2f(.56,0.28);
              glEnd();


              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(.44,0.3);
              glVertex2f(.56,0.3);
              glEnd();


              glLoadIdentity();











   //tree
    glTranslatef(-.25,-1,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();
    glLoadIdentity();

 //small tree
    //glScalef(.8,.8,0);
    glTranslatef(-.15,-1.1,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();
    glLoadIdentity();

    //shohid minar


   glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();



    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();




    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(79, 26,8);
    glVertex2f(-0.5,0.08);
    glVertex2f(-0.42,0.08);
    glVertex2f(-0.42,0.1);
    glVertex2f(-0.5,0.1);
    glEnd();
/////
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();

    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


     //glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();
    glLoadIdentity();

    x=-.45f;y=.04f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //national flag


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.27,-0.1);
    glVertex2f(-0.26,-0.1);
    glVertex2f(-0.26,0.15);
    glVertex2f(-0.27,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 64);
    glVertex2f(-0.27,0.1);
    glVertex2f(-0.12,0.1);
    glVertex2f(-0.12,0.2);
    glVertex2f(-0.27,0.2);
    glEnd();



    x=-.19f;y=.15f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(500,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //school

    glBegin(GL_QUADS);
    glColor3ub(255,153,153);
    glVertex2f(-0.1,-0.1);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,0.3);
    glVertex2f(-0.1,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,153,255);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.35,0.0);
    glVertex2f(0.35,0.4);
    glVertex2f(0.3,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,204,255);
    glVertex2f(0.3,.3);
    glVertex2f(0.35,0.4);
    glVertex2f(0.0,0.4);
    glVertex2f(-0.1,0.3);
    glEnd();


    //school window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();
    glLoadIdentity();

     ///


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glLoadIdentity();
    ///



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();




    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glLoadIdentity();

    //school door
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(0.05,-0.1);
    glVertex2f(0.12,-0.1);
    glVertex2f(0.12,-0.02);
    glVertex2f(0.05,-0.02);
    glEnd();



//1ST tringle tree
    glScalef(.7,.7,0);
    glTranslatef(.1,-1.2,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();

    //2ND TREE
     glScalef(.7,.7,0);
    glTranslatef(.25,-1.3,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();





//HAWAI MITAI
    glTranslatef(-0.2, 0.72, 0.0);
    glScalef(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.05f, 0.0f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.1, 0.25);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.1;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.25, 0.0);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.1;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.1, -0.25);


    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.1;

    //sky

           glPushMatrix();
      glTranslatef(position,0.0f, 0.0f);
     //glTranslated(0.9,0,0);
     glLineWidth(06);
    glBegin(GL_LINES);
    glColor3ub(1, 1,1);
    glVertex2f(-.8,.8);
    glVertex2f(-.7,0.85);
     glVertex2f(-.7,0.85);
   // glVertex2f(-.5,0.8);
     glVertex2f(-.7,.95);
  glEnd();
              glLoadIdentity();

	          glPopMatrix();


glutTimerFunc(1000,display1,0);
	glFlush();
}



void sound1()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("rainee2.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void display_up()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);



    //sky
    glBegin(GL_QUADS);
    glColor3ub(45, 221, 252);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();

    //////////

    glBegin(GL_QUADS);
    glColor3ub(21, 156, 11);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-1.0,-0.7);
    glVertex2f(1.0,-0.7);
    glEnd();


   // glLoadIdentity();
    //glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);

    glVertex2f(1.0f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();

	           //road
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1, -.6);
    glVertex2f(1, -.6);
    glVertex2f(1, -.2);
    glVertex2f(-1, -.2);
    glEnd();

    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);

    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();



    //sun

    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //car1
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();





//////CAR  chaka

   x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




   //Car2
    glTranslatef(.77,.22,0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();


    x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

glLoadIdentity();





            //house

             glScalef(1.4,1.4,0);
            glBegin(GL_QUADS);
             glColor3f(153,0,51);
              glVertex2f(.4,0.1);
               glVertex2f(.55,0.1);
               glVertex2f(.55,0.3);
                glVertex2f(.4,0.3);


              glEnd();



            glBegin(GL_QUADS);
              glColor3f(153,0,51);
               glVertex2f(.4,0.3);
                glVertex2f(.55,0.3);
               glVertex2f(.55,0.4);
               glVertex2f(.4,0.4);



              glEnd();



       glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
               glVertex2f(.38,0.4);
                glVertex2f(.57,0.4);
               glVertex2f(.47,0.47);




              glEnd();


            glBegin(GL_QUADS);
             glColor3f(153,0,51);
               glVertex2f(.55,0.1);
                glVertex2f(.7,0.1);
               glVertex2f(.7,0.3);
                glVertex2f(.55,0.3);


              glEnd();
//DOOR


              glBegin(GL_QUADS);
              glColor3f(102,255,102);
              glVertex2f(.45,0.1);
              glVertex2f(.5,0.1);
              glVertex2f(.5,0.2);
              glVertex2f(0.45,.2);


              glEnd();

             // 2ND TALA WINDOW

            glBegin(GL_QUADS);
              glColor3f(102,255,102);
              glVertex2f(.45,0.3);
              glVertex2f(.5,0.3);
              glVertex2f(.5,0.37);
              glVertex2f(0.45,.37);


              glEnd();


              //4 WINDOW 1st  tala


              glBegin(GL_QUADS);
              glColor3f(102,255,102);
              glVertex2f(.6,0.15);
              glVertex2f(.67,0.15);
              glVertex2f(.67,0.25);
              glVertex2f(0.6,.25);


              glEnd();

               glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.6,0.2);
              glVertex2f(0.67,0.2);
              glEnd();

              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(0.635,.15);
              glVertex2f(.635,0.25);

              glEnd();
             glLoadIdentity();





   //tree
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();

 //small tree
    glScalef(.8,.8,0);
    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.45,0.3);
    glVertex2f(-0.43,0.3);
    glVertex2f(-0.43,0.2);
    glVertex2f(-0.45,0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(-0.47,0.3);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.44,0.4);

    glEnd();
    glLoadIdentity();

    //shohid minar


   glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();



    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();




    glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.42,-0.1);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,0.1);
    glVertex2f(-0.42,0.1);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(79, 26,8);
    glVertex2f(-0.5,0.08);
    glVertex2f(-0.42,0.08);
    glVertex2f(-0.42,0.1);
    glVertex2f(-0.5,0.1);
    glEnd();
/////
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();

    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,-0.1);
    glVertex2f(-0.36,-0.1);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();


     //glTranslatef(-.04,0,0);
    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.34,-0.1);
    glVertex2f(-0.32,-0.1);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.34,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.38,0.04);
    glVertex2f(-0.32,0.04);
    glVertex2f(-0.32,0.05);
    glVertex2f(-0.38,0.05);
    glEnd();
    glLoadIdentity();

    x=-.45f;y=.04f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //national flag


    glBegin(GL_QUADS);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.27,-0.1);
    glVertex2f(-0.26,-0.1);
    glVertex2f(-0.26,0.15);
    glVertex2f(-0.27,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 64);
    glVertex2f(-0.27,0.1);
    glVertex2f(-0.12,0.1);
    glVertex2f(-0.12,0.2);
    glVertex2f(-0.27,0.2);
    glEnd();



    x=-.19f;y=.15f; radius =.03f;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(500,0,0);
		glVertex2f(x,y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //school

    glBegin(GL_QUADS);
    glColor3ub(255,153,153);
    glVertex2f(-0.1,-0.1);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,0.3);
    glVertex2f(-0.1,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,153,255);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.35,0.0);
    glVertex2f(0.35,0.4);
    glVertex2f(0.3,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,204,255);
    glVertex2f(0.3,.3);
    glVertex2f(0.35,0.4);
    glVertex2f(0.0,0.4);
    glVertex2f(-0.1,0.3);
    glEnd();


    //school window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.2);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();
    glLoadIdentity();

     ///


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();

    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.1);
    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.05,0.15);

    glEnd();
    glLoadIdentity();
    ///



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glTranslatef(0.07,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();

    glTranslatef(0.08,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();




    glTranslatef(0.09,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(-0.05,0.0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,0.05);
    glVertex2f(-0.05,0.05);
    glEnd();


    glLoadIdentity();

    //school door
    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(0.05,-0.1);
    glVertex2f(0.12,-0.1);
    glVertex2f(0.12,-0.02);
    glVertex2f(0.05,-0.02);
    glEnd();


    //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.6);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.25,0.6);
    glEnd();



     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.02,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.6);
    glEnd();




     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.22,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.35,0.6);
    glEnd();
   //trees

   glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();


    glScalef(.7,.7,0);
    glTranslatef(.53,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();

///
    glTranslatef(-0.2, 0.72, 0.0);
    glScalef(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.05f, 0.0f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.1, 0.25);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.9;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.25, 0.0);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.9;

    glTranslatef(-0.2,0.72,0.0);
    glScalef(0.8, 0.8, 0.8);
    glPushMatrix();
    glRotatef(j,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.1, -0.25);


    glEnd();
    glPopMatrix();
    glLoadIdentity();
    j+=0.9;


//RAIN
               //1st row
                glLoadIdentity();
                glPushMatrix();
                glTranslatef(0.0f,-position, 0.0f);
              //1
               glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.8,0.85);
               glVertex2f(-0.85,0.80);
                glEnd();
                //2
                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.7,0.85);
               glVertex2f(-0.75,0.80);
                glEnd();
                //3
                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.6,0.85);
               glVertex2f(-0.65,0.80);
                glEnd();
                //4

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.5,0.85);
               glVertex2f(-0.55,0.80);
                glEnd();
                //5
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.4,0.85);
               glVertex2f(-0.45,0.80);
                glEnd();
                //6
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.3,0.85);
               glVertex2f(-0.35,0.80);
                glEnd();
                //7

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.2,0.85);
               glVertex2f(-0.25,0.80);
                glEnd();
                //8

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.1,0.85);
               glVertex2f(-0.15,0.80);
                glEnd();
                //9


                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0,0.85);
               glVertex2f(-0.05,0.80);
                glEnd();

                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.1,0.85);
               glVertex2f(0.05,0.80);
                glEnd();

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.2,0.85);
               glVertex2f(0.15,0.80);
                glEnd();
                //10

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.3,0.85);
               glVertex2f(0.25,0.80);
                glEnd();
                //11
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.3,0.85);
               glVertex2f(0.25,0.80);
                glEnd();
                //12

               glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.4,0.85);
               glVertex2f(0.35,0.80);
                glEnd();
                //13

               glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.5,0.85);
               glVertex2f(0.45,0.80);
                glEnd();
                //14

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.6,0.85);
               glVertex2f(0.55,0.80);
                glEnd();
                //15
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.7,0.85);
               glVertex2f(0.65,0.80);
                glEnd();
                //16

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.8,0.85);
               glVertex2f(0.75,0.80);
                glEnd();
                //17

                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.9,0.85);
               glVertex2f(0.85,0.80);
                glEnd();


                //Rain 2nd part
                glTranslated(0,0.1,0);
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.8,0.85);
               glVertex2f(-0.85,0.80);
                glEnd();
                //2
                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.7,0.85);
               glVertex2f(-0.75,0.80);
                glEnd();
                //3
                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.6,0.85);
               glVertex2f(-0.65,0.80);
                glEnd();
                //4

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.5,0.85);
               glVertex2f(-0.55,0.80);
                glEnd();
                //5
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.4,0.85);
               glVertex2f(-0.45,0.80);
                glEnd();
                //6
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.3,0.85);
               glVertex2f(-0.35,0.80);
                glEnd();
                //7

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.2,0.85);
               glVertex2f(-0.25,0.80);
                glEnd();
                //8

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(-0.1,0.85);
               glVertex2f(-0.15,0.80);
                glEnd();
                //9


                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0,0.85);
               glVertex2f(-0.05,0.80);
                glEnd();

                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.1,0.85);
               glVertex2f(0.05,0.80);
                glEnd();

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.2,0.85);
               glVertex2f(0.15,0.80);
                glEnd();
                //10

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.3,0.85);
               glVertex2f(0.25,0.80);
                glEnd();
                //11
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.3,0.85);
               glVertex2f(0.25,0.80);
                glEnd();
                //12

               glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.4,0.85);
               glVertex2f(0.35,0.80);
                glEnd();
                //13

               glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.5,0.85);
               glVertex2f(0.45,0.80);
                glEnd();
                //14

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.6,0.85);
               glVertex2f(0.55,0.80);
                glEnd();
                //15
                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.7,0.85);
               glVertex2f(0.65,0.80);
                glEnd();
                //16

                glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.8,0.85);
               glVertex2f(0.75,0.80);
                glEnd();
                //17

                 glBegin(GL_LINES);
               glColor3ub(254,252,255);
               glVertex2f(0.9,0.85);
               glVertex2f(0.85,0.80);
                glEnd();
                glLoadIdentity();
                 glPopMatrix();




	glFlush();


}









/*void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
speed = 0.5f;
break;
case GLUT_KEY_DOWN:
speed = 0.0f;
break;

case GLUT_KEY_UP:
 glutDisplayFunc(display_up);
break;
case GLUT_KEY_DOWN:
 glutDisplayFunc(display_down);
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
    speed = 0.1f;
break;
}
glutPostRedisplay();
}*/
void display_day(){

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);




            glLoadIdentity();





//sky
    glBegin(GL_QUADS);
    glColor3ub(45, 221, 252);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0,0.4);
    glVertex2f(1.0,1.0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(21, 156, 11);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,.4);
    glEnd();
//hill
  //hill


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.99,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.8,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.8,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.47,0.6);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.5,0.4);
    glVertex2f(-0,0.4);
    glVertex2f(-0.13,0.6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(-0.05,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.15,0.6);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.23,0.4);
    glVertex2f(0.56,0.4);
    glVertex2f(0.4,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(79, 26, 8);
    glVertex2f(0.76,0.4);
    glVertex2f(1,0.4);
    glVertex2f(0.8,0.6);
    glEnd();
    //trees
    glTranslatef(.2,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
   // glLoadIdentity();
    //trees
    glTranslatef(.2,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 6, 8);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.52,-0.1);
    glVertex2f(0.52,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.1);
    glVertex2f(.55,0.1);
    glVertex2f(0.51,0.2);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.13);
    glVertex2f(.55,0.13);
    glVertex2f(0.51,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(5, 97, 32);
    glVertex2f(.47,0.16);
    glVertex2f(.55,0.16);
    glVertex2f(0.51,0.35);
    glEnd();
    glLoadIdentity();

   gluOrtho2D(-5,5,-4,4);
   //building
glColor3ub(255, 140, 26);
	glBegin(GL_QUADS);
	glVertex2f(-5,3);
	glVertex2f(-5,.5);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.9,3);
	glEnd();
glColor3ub(204, 102, 0);
	glBegin(GL_QUADS);
	glVertex2f(-3.9,3);
	glVertex2f(-3.9,.5);
	glVertex2f(-3.7,.5);
	glVertex2f(-3.7,2.7);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(-4.85,2.8);
	glVertex2f(-4.85,2.4);
	glVertex2f(-4.5,2.4);
	glVertex2f(-4.5,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.4,2.8);
	glVertex2f(-4.4,2.4);
	glVertex2f(-4.05,2.4);
	glVertex2f(-4.05,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,2.2);
	glVertex2f(-4.85,1.8);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.5,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1.6);
	glVertex2f(-4.85,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.85,1);
	glVertex2f(-4.85,.5);
	glVertex2f(-4.5,.5);
	glVertex2f(-4.5,1);
	glEnd();
	////
glColor3ub(204, 102, 153);
	glBegin(GL_QUADS);
	glVertex2f(-4.6,2.5);
	glVertex2f(-4.6,.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.5,2.5);
	glEnd();
glColor3ub(172, 57, 115);
	glBegin(GL_QUADS);
	glVertex2f(-3.5,2.5);
	glVertex2f(-3.5,.5);
	glVertex2f(-3.3,.5);
	glVertex2f(-3.3,2.2);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(-4.45,2.3);
	glVertex2f(-4.45,1.9);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,2.3);
	glVertex2f(-4,1.9);
	glVertex2f(-3.65,1.9);
	glVertex2f(-3.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.7);
	glVertex2f(-4.45,1.3);
	glVertex2f(-4.1,1.3);
	glVertex2f(-4.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.7);
	glVertex2f(-4,1.3);
	glVertex2f(-3.65,1.3);
	glVertex2f(-3.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4.45,1.1);
	glVertex2f(-4.45,.7);
	glVertex2f(-4.1,.7);
	glVertex2f(-4.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-4,1.1);
	glVertex2f(-4,.7);
	glVertex2f(-3.65,.7);
	glVertex2f(-3.65,1.1);
	glEnd();
	////
glColor3ub(178, 178, 102);
	glBegin(GL_QUADS);
	glVertex2f(-2.6,2.5);
	glVertex2f(-2.6,.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.5,2.5);
	glEnd();
glColor3ub(136, 136, 68);
	glBegin(GL_QUADS);
	glVertex2f(-1.5,2.5);
	glVertex2f(-1.5,.5);
	glVertex2f(-1.3,.5);
	glVertex2f(-1.3,2.2);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(-2.45,2.3);
	glVertex2f(-2.45,1.9);
	glVertex2f(-2.1,1.9);
	glVertex2f(-2.1,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,2.3);
	glVertex2f(-2,1.9);
	glVertex2f(-1.65,1.9);
	glVertex2f(-1.65,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.7);
	glVertex2f(-2.45,1.3);
	glVertex2f(-2.1,1.3);
	glVertex2f(-2.1,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.7);
	glVertex2f(-2,1.3);
	glVertex2f(-1.65,1.3);
	glVertex2f(-1.65,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.45,1.1);
	glVertex2f(-2.45,.7);
	glVertex2f(-2.1,.7);
	glVertex2f(-2.1,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2,1.1);
	glVertex2f(-2,.7);
	glVertex2f(-1.65,.7);
	glVertex2f(-1.65,1.1);
	glEnd();

	////
glColor3ub(204, 102, 204);
	glBegin(GL_QUADS);
	glVertex2f(-3.25,2);
	glVertex2f(-3.25,.5);
	glVertex2f(-2.2,.5);
	glVertex2f(-2.2,2);
	glEnd();
glColor3ub(191, 64, 191);
	glBegin(GL_QUADS);
	glVertex2f(-2.2,2);
	glVertex2f(-2.2,.5);
	glVertex2f(-2,.5);
	glVertex2f(-2,1.7);
	glEnd();
////windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(-3.15,1.8);
	glVertex2f(-3.15,1.4);
	glVertex2f(-2.8,1.4);
	glVertex2f(-2.8,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.8);
	glVertex2f(-2.7,1.4);
	glVertex2f(-2.35,1.4);
	glVertex2f(-2.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-3.15,1.2);
	glVertex2f(-3.15,.8);
	glVertex2f(-2.8,.8);
	glVertex2f(-2.8,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-2.7,1.2);
	glVertex2f(-2.7,.8);
	glVertex2f(-2.35,.8);
	glVertex2f(-2.35,1.2);
	glEnd();

	////
glColor3ub(102, 153, 153);
	glBegin(GL_QUADS);
	glVertex2f(-1.1,2.5);
	glVertex2f(-1.1,.5);
	glVertex2f(0,.5);
	glVertex2f(0,2.5);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(0,2.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.2,2.2);
	glEnd();

//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(-.95,2.3);
	glVertex2f(-.95,1.9);
	glVertex2f(-.6,1.9);
	glVertex2f(-.6,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,2.3);
	glVertex2f(-.5,1.9);
	glVertex2f(-.15,1.9);
	glVertex2f(-.15,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.7);
	glVertex2f(-.95,1.3);
	glVertex2f(-.6,1.3);
	glVertex2f(-.6,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.7);
	glVertex2f(-.5,1.3);
	glVertex2f(-.15,1.3);
	glVertex2f(-.15,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.95,1.1);
	glVertex2f(-.95,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.6,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(-.5,1.1);
	glVertex2f(-.5,.7);
	glVertex2f(-.15,.7);
	glVertex2f(-.15,1.1);
	glEnd();
////
glColor3ub(133, 133, 173);
	glBegin(GL_QUADS);
	glVertex2f(.4,2);
	glVertex2f(.4,.5);
	glVertex2f(1.5,.5);
	glVertex2f(1.5,2);
	glEnd();
////windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(.55,1.8);
	glVertex2f(.55,1.4);
	glVertex2f(.9,1.4);
	glVertex2f(.9,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.8);
	glVertex2f(1,1.4);
	glVertex2f(1.35,1.4);
	glVertex2f(1.35,1.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(.55,1.2);
	glVertex2f(.55,.8);
	glVertex2f(.9,.8);
	glVertex2f(.9,1.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(1,1.2);
	glVertex2f(1,.8);
	glVertex2f(1.35,.8);
	glVertex2f(1.35,1.2);
	glEnd();

////
glColor3ub(71, 107, 107);
	glBegin(GL_QUADS);
	glVertex2f(1.7,2.7);
	glVertex2f(1.7,.5);
	glVertex2f(1.9,.5);
	glVertex2f(1.9,3);
	glEnd();
glColor3ub(82, 122, 122);
	glBegin(GL_QUADS);
	glVertex2f(1.9,3);
	glVertex2f(1.9,.5);
	glVertex2f(3,.5);
	glVertex2f(3,3);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(2.05,2.8);
	glVertex2f(2.05,2.4);
	glVertex2f(2.4,2.4);
	glVertex2f(2.4,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.8);
	glVertex2f(2.5,2.4);
	glVertex2f(2.85,2.4);
	glVertex2f(2.85,2.8);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,2.2);
	glVertex2f(2.05,1.8);
	glVertex2f(2.4,1.8);
	glVertex2f(2.4,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,2.2);
	glVertex2f(2.5,1.8);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,2.2);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1.6);
	glVertex2f(2.05,1.2);
	glVertex2f(2.4,1.2);
	glVertex2f(2.4,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1.6);
	glVertex2f(2.5,1.2);
	glVertex2f(2.85,1.2);
	glVertex2f(2.85,1.6);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.05,1);
	glVertex2f(2.05,.5);
	glVertex2f(2.4,.5);
	glVertex2f(2.4,1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(2.5,1);
	glVertex2f(2.5,.5);
	glVertex2f(2.85,.5);
	glVertex2f(2.85,1);
	glEnd();

////
glColor3ub(0, 134, 179);
	glBegin(GL_QUADS);
	glVertex2f(3.8,3.2);
	glVertex2f(3.8,.5);
	glVertex2f(4,.5);
	glVertex2f(4,3.5);
	glEnd();
glColor3ub(0, 153, 204);
	glBegin(GL_QUADS);
	glVertex2f(4,3.5);
	glVertex2f(4,.5);
	glVertex2f(5,.5);
	glVertex2f(5,3.5);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(4.15,3.3);
	glVertex2f(4.15,2.9);
	glVertex2f(4.5,2.9);
	glVertex2f(4.5,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,3.3);
	glVertex2f(4.6,2.9);
	glVertex2f(4.95,2.9);
	glVertex2f(4.95,3.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.7);
	glVertex2f(4.15,2.3);
	glVertex2f(4.5,2.3);
	glVertex2f(4.5,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.7);
	glVertex2f(4.6,2.3);
	glVertex2f(4.95,2.3);
	glVertex2f(4.95,2.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,2.1);
	glVertex2f(4.15,1.7);
	glVertex2f(4.5,1.7);
	glVertex2f(4.5,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,2.1);
	glVertex2f(4.6,1.7);
	glVertex2f(4.95,1.7);
	glVertex2f(4.95,2.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,1.5);
	glVertex2f(4.15,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,1.5);
	glVertex2f(4.6,1.1);
	glVertex2f(4.95,1.1);
	glVertex2f(4.95,1.5);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.15,.9);
	glVertex2f(4.15,.7);
	glVertex2f(4.5,.7);
	glVertex2f(4.5,.9);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(4.6,.9);
	glVertex2f(4.6,.7);
	glVertex2f(4.95,.7);
	glVertex2f(4.95,.9);
	glEnd();
////
glColor3ub(122, 122, 82);
	glBegin(GL_QUADS);
	glVertex2f(3.1,2.2);
	glVertex2f(3.1,.5);
	glVertex2f(3.3,.5);
	glVertex2f(3.3,2.5);
	glEnd();
glColor3ub(138, 138, 92);
	glBegin(GL_QUADS);
	glVertex2f(3.3,2.5);
	glVertex2f(3.3,.5);
	glVertex2f(4.4,.5);
	glVertex2f(4.4,2.5);
	glEnd();
//windows
glColor3ub(255,255,0);
	glBegin(GL_QUADS);
	glVertex2f(3.45,2.3);
	glVertex2f(3.45,1.9);
	glVertex2f(3.8,1.9);
	glVertex2f(3.8,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,2.3);
	glVertex2f(3.9,1.9);
	glVertex2f(4.25,1.9);
	glVertex2f(4.25,2.3);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.7);
	glVertex2f(3.45,1.3);
	glVertex2f(3.8,1.3);
	glVertex2f(3.8,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.3);
	glVertex2f(4.25,1.3);
	glVertex2f(4.25,1.7);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.45,1.1);
	glVertex2f(3.45,.7);
	glVertex2f(3.8,.7);
	glVertex2f(3.8,1.1);
	glEnd();
glBegin(GL_QUADS);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,.7);
	glVertex2f(4.25,.7);
	glVertex2f(4.25,1.1);
	glEnd();



//river
/*glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient1[] = {0.0,0.0,3.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);*/


	glBegin(GL_QUADS);
    glColor3ub(35, 200, 255);
	glVertex2f(-5,-2.3);
	glVertex2f(-5,-4);
	glVertex2f(5,-4);
	glVertex2f(5,-2.3);
	glEnd();



//glDisable(GL_LIGHTING);


glPushMatrix();
glTranslatef(positionBoat,0.0, 0.0f);

//boat
    //glColor3ub(12,134,143);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,134,143);
    glVertex2f(2.8,-3);
	glVertex2f(2.5,-2.8);
	glVertex2f(2.7,-3.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(2.8,-3);
	glVertex2f(2.7,-3.2);
	glVertex2f(3.6,-3.2);
	glVertex2f(3.5,-3);
	glEnd();

	glBegin(GL_TRIANGLES);
     glVertex2f(3.5,-3);
	glVertex2f(3.6,-3.2);
	glVertex2f(3.8,-2.8);
    glEnd();

glColor3ub(12,13,13);
    glBegin(GL_TRIANGLES);
    glVertex2f(2.8,-3);
	glVertex2f(3,-3);
	glVertex2f(2.9,-2.7);
	glEnd();
glColor3ub(12,153,13);
    glBegin(GL_QUADS);
    glVertex2f(2.9,-2.7);
	glVertex2f(3,-3);
	glVertex2f(3.5,-3);
    glVertex2f(3.4,-2.7);
	glEnd();

glPopMatrix();

glPushMatrix();
glTranslatef(positionBoat1,0.0, 0.0f);

////boat2
    glTranslatef(0,-1.2,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,134,143);
    glVertex2f(-2.8,-2.5);
	glVertex2f(-2.5,-2.3);
	glVertex2f(-2.7,-2.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-2.8,-2.5);
	glVertex2f(-2.7,-2.7);
	glVertex2f(-3.6,-2.7);
	glVertex2f(-3.5,-2.5);
	glEnd();

	glBegin(GL_TRIANGLES);
     glVertex2f(-3.5,-2.5);
	glVertex2f(-3.6,-2.7);
	glVertex2f(-3.8,-2.3);
    glEnd();

glColor3ub(12,13,13);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.8,-2.5);
	glVertex2f(-3,-2.5);
	glVertex2f(-2.9,-2.2);
	glEnd();
glColor3ub(12,153,13);
    glBegin(GL_QUADS);
    glVertex2f(-2.9,-2.2);
	glVertex2f(-3,-2.5);
	glVertex2f(-3.5,-2.5);
    glVertex2f(-3.4,-2.2);
	glEnd();

	glPopMatrix();

	glLoadIdentity();

	glColor3ub(220, 220, 220);
	glBegin(GL_QUADS);
	glVertex2f(-5,-2);
	glVertex2f(-5,-2.3);
	glVertex2f(4,-2.3);
	glVertex2f(4,-2);
	glEnd();
	glColor3ub(0,0,0);
	glBegin(GL_QUADS);
	glVertex2f(-4,-2);
	glVertex2f(-4,-2.3);
	glVertex2f(-3,-2.3);
	glVertex2f(-3,-2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-2,-2);
	glVertex2f(-2,-2.3);
	glVertex2f(-1,-2.3);
	glVertex2f(-1,-2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(0,-2);
	glVertex2f(0,-2.3);
	glVertex2f(1,-2.3);
	glVertex2f(1,-2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(2,-2);
	glVertex2f(2,-2.3);
	glVertex2f(3,-2.3);
	glVertex2f(3,-2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(4,-2);
	glVertex2f(4,-2.3);
	glVertex2f(5,-2.3);
	glVertex2f(5,-2);
	glEnd();
	glPopMatrix();

    //sky

    //////////






    glLoadIdentity();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);

    glVertex2f(1.0f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();




                //sun
        int i;

	GLfloat x=-.3f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
   glColor3ub(255,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//road
	glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1, -.7);
    glVertex2f(1, -.7);
    glVertex2f(1, -.1);
    glVertex2f(-1, -.1);
    glEnd();

   /* glColor3ub(61, 61, 92);
	glBegin(GL_QUADS);
	glVertex2f(-5,.2);
	glVertex2f(-5,-2);
	glVertex2f(5,-2);
	glVertex2f(5,.2);
	glEnd();*/

    //sheed

    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);

    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);

    glEnd();
    //
    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();
    //
    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

     glTranslatef(1.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(191, 159, 64);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.7);
    glVertex2f(-.8, -.7);
    glVertex2f(-.8, -.62);
    glVertex2f(-1, -.62);
    glEnd();
    glLoadIdentity();

   //road divider

    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();

    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(242,217,217);
    glVertex2f(-1, -.41);
    glVertex2f(-.7, -.41);
    glVertex2f(-.7, -.38);
    glVertex2f(-1, -.38);
    glEnd();
    glLoadIdentity();


  //bus



    //car1
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();





//////CAR  chaka

   x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




   //Car2
    glTranslatef(.77,.22,0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.6, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.12, -.45);
    glVertex2f(-.18, -.45);
    glVertex2f(-.3, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.49, -.45);
    glVertex2f(-.59, -.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.25, -.45);
    glVertex2f(-.31, -.38);
    glVertex2f(-.49, -.38);
    glVertex2f(-.54, -.46);
    glEnd();


    x=-.49; y=-.52f;radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


   //2nd chaka


              	x=-.28f; y=-.52f;radius =.05f;


	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

glLoadIdentity();





	//plane
	gluOrtho2D(-5,5,-4,4);
	glPushMatrix();
glTranslatef(positionplane,0.0f, 0.0f);
glColor3ub(148, 148, 184);
	glBegin(GL_POLYGON);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.1,3.3);
	glVertex2f(-1.9,3.3);
	glVertex2f(-1.7,3.4);
	glVertex2f(-2.1,3.6);
	glEnd();
		glPopMatrix();

		glPushMatrix();
glTranslatef(positionplane,0.0f, 0.0f);
glColor3ub(148, 148, 184);

glBegin(GL_QUADS);
	glVertex2f(-3.1,3.5);
	glVertex2f(-3.3,3.7);
	glVertex2f(-3.3,3.6);
	glVertex2f(-3.1,3.3);
glEnd();
		glPopMatrix();

    glPushMatrix();
glTranslatef(positionplane,0.0f, 0.0f);

	glColor3ub(128, 255, 255);
	glBegin(GL_TRIANGLES);
	glVertex2f(-3.3,3.6);
	glVertex2f(-3.3,3.2);
	glVertex2f(-3.2,3.4);
	glEnd();
		glPopMatrix();


glPushMatrix();
glTranslatef(positionplane,0.0f, 0.0f);
 glColor3ub(148, 148, 184);
	glBegin(GL_QUADS);
	glVertex2f(-2.5,3.5);
	glVertex2f(-2.2,3.5);
	glVertex2f(-2.7,3.8);
	glVertex2f(-2.8,3.8);
	glEnd();
		glPopMatrix();





//Man1
	glPushMatrix();
glTranslatef(positionman,0.0f, 0.0f);
 int ic;
 double xc, yc;
    double radius22 = 0.05;
    //glColor3ub(253, 184, 19);
    glColor3ub(0,0, 0);
    double twicePic = 2.0 * 3.142;
    xc = 1.4, yc = 0.95;
    //xc = 0, yc = 0;
    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glVertex2f(xc, yc);
     glPushMatrix(); // center of circle
    for (ic = 0; ic <= 20; ic++)   {
        glVertex2f (
            (xc + (radius22 * cos(ic * twicePic / 20))),
            (yc + (radius22 * sin(ic * twicePic / 20)))
            );
    }
    glEnd();
//body
glColor3ub(0,0,0);
glBegin(GL_QUADS);

glVertex2f(1.45,0.9);
glVertex2f(1.45,0.7);
glVertex2f(1.35,0.7);
glVertex2f(1.35,0.9);

glEnd();

glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);


glVertex2f(1.40,0.8);
glVertex2f(1.40,0.6);


glEnd();
//legs
glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);

glVertex2f(1.40,0.6);
glVertex2f(1.5,0.4);


glEnd();


glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);

glVertex2f(1.40,0.6);
glVertex2f(1.30,0.4);


glEnd();

//arms

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);


glVertex2f(1.35,0.9);
glVertex2f(1.30,0.7);


glEnd();
//arms2
glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(1.45,0.9);
glVertex2f(1.5,0.7);


glEnd();

////man22222
int id;
 double xd, yd;
    double radius23 = 0.05;
    //glColor3ub(253, 184, 19);
    glColor3ub(0,0, 0);
    double twicePic2 = 2.0 * 3.142;
    xd = 2.4, yd = 0.95;
    //xc = 0, yc = 0;
    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glVertex2f(xd, yd);
     glPushMatrix(); // center of circle
    for (id = 0; id <= 20; id++)   {
        glVertex2f (
            (xd + (radius23 * cos(id * twicePic2 / 20))),
            (yd + (radius23 * sin(id * twicePic2 / 20)))
            );
    }
    glEnd(); //END
//body
glColor3ub(0,0,0);
glBegin(GL_QUADS);

glVertex2f(2.45,0.9);
glVertex2f(2.45,0.7);
glVertex2f(2.35,0.7);
glVertex2f(2.35,0.9);

glEnd();

glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);


glVertex2f(2.40,0.8);
glVertex2f(2.40,0.6);


glEnd();
//legs
glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);

glVertex2f(2.40,0.6);
glVertex2f(2.5,0.4);


glEnd();


glColor3ub(0,0,0);
glLineWidth(5);
glBegin(GL_LINES);

glVertex2f(2.40,0.6);
glVertex2f(2.30,0.4);


glEnd();

//arms

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);


glVertex2f(2.35,0.9);
glVertex2f(2.30,0.7);


glEnd();
//arms2
glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(2.45,0.9);
glVertex2f(2.5,0.7);


glEnd();
glPopMatrix();

	///light 1
glScalef(1.2,1.2,0);
glTranslatef(0,.5,0);

  glColor3ub(214, 214, 194);
	 glBegin(GL_QUADS);
     glVertex2f(-3.0f,-0.9f);
    glVertex2f(-3.1f,-0.9f);
    glVertex2f(-3.1f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-3.0f,-0.4f);
    glVertex2f(-2.8f,-0.4f);
    glVertex2f(-2.8f,-0.3f);
    glVertex2f(-3.0f,-0.3f);
    glEnd();

   glBegin(GL_TRIANGLES);
    glVertex2f(-2.9f,-0.5f);
    glVertex2f(-2.7f,-0.5f);
    glVertex2f(-2.8f,-0.4f);
    glEnd();







	///light 2

	glColor3ub(214, 214, 194);
	 glBegin(GL_QUADS);
    glVertex2f(-1.0f,-0.9f);
    glVertex2f(-1.1f,-0.9f);
    glVertex2f(-1.1f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();

        glBegin(GL_QUADS);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.8f,-0.4f);
    glEnd();




	///light 3

	glColor3ub(214, 214, 194);
	 glBegin(GL_QUADS);
    glVertex2f(1.0f,-0.9f);
    glVertex2f(1.1f,-0.9f);
    glVertex2f(1.1f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();

        glBegin(GL_QUADS);
    glVertex2f(1.0f,-0.4f);
    glVertex2f(0.8f,-0.4f);
    glVertex2f(0.8f,-0.3f);
    glVertex2f(1.0f,-0.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.8f,-0.4f);
    glEnd();





    ////light 4
   glColor3ub(214, 214, 194);
	 glBegin(GL_QUADS);
    glVertex2f(3.0f,-0.9f);
    glVertex2f(3.1f,-0.9f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();

        glBegin(GL_QUADS);
    glVertex2f(3.0f,-0.4f);
    glVertex2f(2.8f,-0.4f);
    glVertex2f(2.8f,-0.3f);
    glVertex2f(3.0f,-0.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(2.8f,-0.4f);
    glEnd();

glLoadIdentity();
    //trafic light
gluOrtho2D(-5,5,-4,4);
glScalef(1.5,1.5,0);
glTranslatef(0,.5,0);
glColor3ub(51, 0, 0);
glBegin(GL_QUADS);

glVertex2f(1.8,-.8);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.8);
glEnd();

glColor3ub(51, 0, 0);
glBegin(GL_QUADS);

glVertex2f(1.6,0.1);
glVertex2f(1.6,-.3);
glVertex2f(2.1,-.3);
glVertex2f(2.1,0.1);

glEnd();

glColor3ub(0, 0, 0);
glBegin(GL_QUADS);

glVertex2f(1.8,0);
glVertex2f(1.8,-.1);
glVertex2f(1.9,-.1);
glVertex2f(1.9,0);

glEnd();

glColor3ub(0, 0, 0);
glBegin(GL_QUADS);

glVertex2f(1.8,-.2);
glVertex2f(1.8,-.3);
glVertex2f(1.9,-.3);
glVertex2f(1.9,-.2);

glEnd();

 glColor3ub(0,255, 0);
           glBegin(GL_QUADS);

           glVertex2f(1.8,0);
           glVertex2f(1.8,-.1);
           glVertex2f(1.9,-.1);
           glVertex2f(1.9,0);

            glEnd();






	glFlush();

}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

/*case 'a':
     glutDisplayFunc(display_up);//
    break;*/
case 'r':
     glutDisplayFunc(display_up);
      sound1();//
  break;
      case 'd':
     glutDisplayFunc(display_day);
//      sound2();



glutPostRedisplay();
  break;


	}
}

/*void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{

			glutDisplayFunc(display_up);
			sound1();
			//break;


	}*/

		/*if (button == GLUT_RIGHT_BUTTON)
	{

			glutDisplayFunc(display_down);


	}*/





int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);

//   glutSpecialFunc(SpecialInput);
   glutKeyboardFunc(handleKeypress);
  // glutMouseFunc(handleMouse);
   //glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update1, 0);
    glutTimerFunc(1, updateplane, 0);
    glutTimerFunc(1, updateBoat, 0);
    glutTimerFunc(1, updateBoat1, 0);
    glutTimerFunc(100, updateman, 0);
   glutMainLoop();
   return 0;
}
