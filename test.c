
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
const float DEG2RAD = 3.14159/180;
void display1();

int p;

void static_rocket();

float i,j,count=0,count1=0,flag=0,flag1=0,t=0,f=0;
void semicircle(float radius,float u,float v)
{
	int i;
	glColor3f(1.0 ,1.0 ,1.0);
   glBegin(GL_POLYGON);

   for (i=135; i<=315; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(u+cos(degInRad)*radius,v+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();
}

void display1()
{

count1++;
 if(count1==250)
      flag=1;
   if(flag==0)
       static_rocket();
}


void static_rocket()
{

count1++;
if(count1==150)
flag=1;
  if(flag==0)
  {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(0.4,0.25,0.1);
		glBegin(GL_POLYGON);// ground
		glVertex2f(0.0,0.0);
		glVertex2f(0.0,250.0);
		glVertex2f(270.0,250.0);
		glVertex2f(500.0,50.0);
		glVertex2f(500.0,0.0);
		glEnd();

		glBegin(GL_POLYGON);//ground
		glVertex2f(280.0,250.0);
		glVertex2f(500.0,250.0);
		glVertex2f(500.0,60.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//road
		glVertex2f(260.0,250.0);
		glVertex2f(290.0,250.0);
		glVertex2f(500.0,70.0);
		glVertex2f(500.0,40.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);


		glColor3f(0.8,0.498039 ,0.196078);
			glBegin(GL_POLYGON);//house 1
		glVertex2f(250.0,250.0);
		glVertex2f(300.0,250.0);
		glVertex2f(300.0,350.0);
		glVertex2f(250.0,350.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		
		glBegin(GL_POLYGON);//HOUSE D
			glVertex2f(255,320.0);
			glVertex2f(275.0,320.0);
			glVertex2f(275.0,330.0);
			glVertex2f(255.0,330.0);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE E
			glVertex2f(285,267.5);
			glVertex2f(295.0,267.5);
			glVertex2f(295.0,277.5);
			glVertex2f(285.0,277.5);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE F
			glVertex2f(285,285.0);
			glVertex2f(295.0,285);
			glVertex2f(295.0,295);
			glVertex2f(285.0,295);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE G
			glVertex2f(285,302.5);
			glVertex2f(295.0,302.5);
			glVertex2f(295.0,312.5);
			glVertex2f(285.0,312.5);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE H
			glVertex2f(285,320.0);
			glVertex2f(295.0,320.0);
			glVertex2f(295.0,330.0);
			glVertex2f(285.0,330.0);
			glEnd();
			glColor3f(0.647059 ,0.164706  ,0.164706);
		glBegin(GL_POLYGON);//solid cone
			glVertex2f(26,250);
			glVertex2f(52,250);
			glVertex2f(39,290);
			glEnd();	
			semicircle(20.0,50,300);
		
		glPointSize(2.0);


	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);


	glEnd();

	glColor3f(1.0,1.0,1.0);//bonnet


glBegin(GL_TRIANGLES);//front
	glVertex2f(237.5,120.0);
	glVertex2f(262.5,120.0);
	glVertex2f(250,170.0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0);
	glVertex2f(217.5,95.0);
	glVertex2f(237.5,95.0);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0);
	glVertex2f(217.5,20.0);
	glVertex2f(237.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0);
	glVertex2f(282.5,20.0);
	glVertex2f(262.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0);
	glVertex2f(262.5,95.0);
	glVertex2f(282.5,95.0);
	glEnd();

glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0);
	glVertex2f(244.5,20.0);
	glVertex2f(241,0.0);
	glEnd();
	
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0);
	glVertex2f(253.5,20.0);
	glVertex2f(249.5,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0);
	glVertex2f(255.5,20.0);
	glVertex2f(258.5,0.0);
	glEnd();

glBegin(GL_POLYGON);//left_stand_holder
	glVertex2f(182.5,85.0);
	glVertex2f(182.5,0.0);
	glVertex2f(187.5,0.0);
	glVertex2f(187.5,80.0);
	glVertex2f(237.5,80.0);
	glVertex2f(237.5,85.0);
	glVertex2f(182.5,85.0);
	glEnd();
	
	glBegin(GL_POLYGON);
glVertex2f(312.5,85.0);//right_stand_holder
	glVertex2f(312.5,0.0);
	glVertex2f(307.5,0.0);
	glVertex2f(307.5,80.0);
	glVertex2f(262.5,80.0);
	glVertex2f(262.5,85.0);
	glVertex2f(312.5,85.0);
	
	glEnd();
for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
	
	
}
}

void myinit()
{
	//int i;
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glPointSize(1.0);
	gluOrtho2D(0.0,499.0,0.0,499.0);
}





int main(int argc,char*argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutCreateWindow("rocket");

	glutIdleFunc(display1);
	glutDisplayFunc(display1);
	myinit();


   glutMainLoop();
   return 0;
}


