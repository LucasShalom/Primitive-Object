#include<Windows.h>       
#include<glut.h>       

void init()
{
	// Set display window color to as glClearColor(R,G,B,Alpha)
	glClearColor(0.5, 1.0, 0.0, 0.0);
	// Set projection parameters.
	glMatrixMode(GL_PROJECTION);
	// Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
	// Mendefinisikan besarnya sistem koordinat dengan range sumbu x adalah [0,800] Dan range untuk sumbu y adalah [0,600].
	gluOrtho2D(0.0, 800, 0.0, 600);
}
void home()
{
	glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
	// Set line segment color as glColor3f(R,G,B)
	//Tembok
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(150, 560);  // glVertex2i Yaitu suatu fungsi untuk menggambar titik pada koordinat x dan y, dengan nilai satuan berupa integer.
	glVertex2i(650, 560);
	glVertex2i(650, 100);
	glVertex2i(150, 100);
	glEnd();

	// jendela 1
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(550, 550);
	glVertex2i(640, 550);
	glVertex2i(640, 480);
	glVertex2i(550, 480);
	glEnd();
	// garis untuk jendela 1
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(595, 550);
	glVertex2i(595, 480);
	glVertex2i(550, 515);
	glVertex2i(640, 515);
	glEnd();

	// jendela 2
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 550);
	glVertex2i(450, 550);
	glVertex2i(450, 480);
	glVertex2i(360, 480);
	glEnd();
	// garis untuk jendela 2
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(405, 550);
	glVertex2i(405, 480);
	glVertex2i(360, 515);
	glVertex2i(450, 515);
	glEnd();

	// jendela 3
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 550);
	glVertex2i(250, 550);
	glVertex2i(250, 480);
	glVertex2i(160, 480);
	glEnd();
	// garis untuk jendela 3
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(205, 550);
	glVertex2i(205, 480);
	glVertex2i(160, 515);
	glVertex2i(250, 515);
	glEnd();

	// jendela 4
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 400);
	glVertex2i(250, 400);
	glVertex2i(250, 330);
	glVertex2i(160, 330);
	glEnd();
	// garis untuk jendela 4
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(205, 400);
	glVertex2i(205, 330);
	glVertex2i(160, 365);
	glVertex2i(250, 365);
	glEnd();

	// jendela 5
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 400);
	glVertex2i(450, 400);
	glVertex2i(450, 330);
	glVertex2i(360, 330);
	glEnd();
	// garis untuk jendela 5
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(405, 400);
	glVertex2i(405, 330);
	glVertex2i(360, 365);
	glVertex2i(450, 365);
	glEnd();

	// jendela 6
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(550, 400);
	glVertex2i(640, 400);
	glVertex2i(640, 330);
	glVertex2i(550, 330);
	glEnd();
	// garis untuk jendela 6
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(595, 400);
	glVertex2i(595, 330);
	glVertex2i(550, 365);
	glVertex2i(640, 365);
	glEnd();

	// jendela 7
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 180);
	glVertex2i(160, 180);
	glEnd();
	// jendela 8
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(550, 250);
	glVertex2i(640, 250);
	glVertex2i(640, 180);
	glVertex2i(550, 180);
	glEnd();
	// garis untuk jendela 7
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(595, 250);
	glVertex2i(595, 180);
	glVertex2i(550, 215);
	glVertex2i(640, 215);
	glEnd();
	// garis untuk jendela 8
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(205, 250);
	glVertex2i(205, 180);
	glVertex2i(160, 215);
	glVertex2i(250, 215);
	glEnd();

	// pintu
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(350, 270);
	glVertex2i(460, 270);
	glVertex2i(460, 100);
	glVertex2i(350, 100);
	glEnd();
	// gagang pintu
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(360, 200);
	glEnd();

	// jalanan
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(350, 100);
	glVertex2i(460, 100);
	glVertex2i(420, 0);
	glVertex2i(130, 0);
	glEnd();
	glFlush();
}
int main(int argc, char ** argv)
{
	// inisialisasi GLUT
	glutInit(&argc, argv);
	// Mengatur mode tampilan
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Mengatur lebar dan tinggi tampilan
	glutInitWindowSize(800, 600);
	// Membuat jendela tampilan dengan judul yang diberikan
	glutCreateWindow("LUCAS SHALOM WIRAWAN - 2018033");
	// menjalankan prosedur inisialisasi
	init();
	// memanggil method display
	glutDisplayFunc(home);
	// mengulang fungsi
	glutMainLoop();
}