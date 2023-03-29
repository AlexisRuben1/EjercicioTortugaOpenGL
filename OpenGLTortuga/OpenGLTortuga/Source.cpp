#include<gl/glut.h>
void IniciarConfiguracion() {
	glClearColor(1, 1, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}

void DibujarTriangulos() {
	glClear(GL_COLOR_BUFFER_BIT);


	//cola
	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(85, 200);
	glVertex2i(113, 243);
	glVertex2i(106, 201);
	glEnd();

	glColor3f(0.5, 0.5, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(106, 201);
	glVertex2i(114, 243);
	glVertex2i(133, 204);
	glEnd();
	//fin cola
	//cascaron
	glColor3f(0.4, 0.4, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(145, 180);
	glVertex2i(85, 300);
	glVertex2i(186, 220);
	glEnd();

	glColor3f(0.4, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(145, 180);
	glVertex2i(186, 220);
	glVertex2i(306, 176);
	glEnd();

	glColor3f(0.3, 0.6, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(186, 220);
	glVertex2i(386, 240);
	glVertex2i(306, 176);
	glEnd();

	glColor3f(0.2, 0.5, 0);
	glBegin(GL_POLYGON);
	glVertex2i(306, 176);
	glVertex2i(386, 240);
	glVertex2i(567, 268);
	glEnd();

	glColor3f(0.5, 0.6, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(567, 268);
	glVertex2i(386, 240);
	glVertex2i(584, 422);
	glEnd();


	glColor3f(0.5, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(584, 422);
	glVertex2i(286, 300);
	glVertex2i(386, 240);
	glEnd();

	glColor3f(0.5, 0.8, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(286, 300);
	glVertex2i(386, 450);
	glVertex2i(584, 422);
	glEnd();


	glColor3f(0.5, 0.9, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(386, 450);
	glVertex2i(286, 300);
	glVertex2i(186, 412);
	glEnd();

	glColor3f(0.4, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(186, 412);
	glVertex2i(285, 300);
	glVertex2i(86, 300);
	glEnd();

	glColor3f(0, 0.4, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(86, 300);
	glVertex2i(185, 220);
	glVertex2i(286, 300);
	glEnd();

	glColor3f(0, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(286, 300);
	glVertex2i(386, 240);
	glVertex2i(185, 220);
	glEnd();
	//fin cascaron
	//cabeza 
	glColor3f(0.8, 0.7, 0);
	glBegin(GL_POLYGON);
	glVertex2i(605, 560);
	glVertex2i(645, 586);
	glVertex2i(666, 560);
	glEnd();

	glColor3f(0.8, 0.8, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(644, 584);
	glVertex2i(726, 560);
	glVertex2i(666, 560);
	glEnd();

	glColor3f(0.8, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(666, 560);
	glVertex2i(726, 560);
	glVertex2i(726, 520);
	glEnd();

	glColor3f(0.8, 0.8, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(726, 520);
	glVertex2i(666, 560);
	glVertex2i(638, 520);
	glEnd();

	glColor3f(0.8, 0.8, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(638, 520);
	glVertex2i(605, 560);
	glVertex2i(666, 560);
	glEnd();

	glColor3f(0.5, 0.4, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(638, 520);
	glVertex2i(725, 520);
	glVertex2i(666, 500);
	glEnd();

	glColor3f(0.7, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(605, 560);
	glVertex2i(614, 430);
	glVertex2i(638, 520);
	glEnd();

	glColor3f(0.6, 0.6, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(638, 520);
	glVertex2i(666, 500);
	glVertex2i(615, 430);
	glEnd();

	glColor3f(0.6, 0.7, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(615, 430);
	glVertex2i(666, 500);
	glVertex2i(660, 300);
	glEnd();

	glColor3f(0.6, 0.6, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(660, 300);
	glVertex2i(615, 430);
	glVertex2i(586, 260);
	glEnd();

	glColor3f(0.5, 0.4, 0);
	glBegin(GL_POLYGON);
	glVertex2i(586, 260);
	glVertex2i(566, 267);
	glVertex2i(580, 398);
	glVertex2i(615, 430);
	glEnd();

	glColor3f(0.5, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(660, 300);
	glVertex2i(552, 242);
	glVertex2i(572, 204);
	glEnd();

	glColor3f(0.5, 0.3, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(552, 242);
	glVertex2i(585, 260);
	glVertex2i(566, 267);
	glVertex2i(512, 248);

	glEnd();
	//fin cabeza

	//pies
	glColor3f(0.9, 0.9, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(512, 249);
	glVertex2i(552, 242);
	glVertex2i(524, 201);
	glEnd();

	glColor3f(0.8, 0.9, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(552, 242);
	glVertex2i(524, 201);
	glVertex2i(580, 189);
	glEnd();

	glColor3f(0.7, 0.7, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(580, 189);
	glVertex2i(524, 201);
	glVertex2i(557, 108);
	glEnd();

	glColor3f(0.7, 0.7, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(512, 248);
	glVertex2i(495, 167);
	glVertex2i(524, 200);
	glEnd();

	glColor3f(0.6, 0.7, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(524, 200);
	glVertex2i(495, 167);
	glVertex2i(557, 108);
	glEnd();

	glColor3f(0.7, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex2i(557, 108);
	glVertex2i(495, 167);
	glVertex2i(483, 108);
	glEnd();

	glColor3f(0.7, 0.7, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(483, 108);
	glVertex2i(557, 108);
	glVertex2i(526, 71);
	glEnd();

	glColor3f(0.9, 0.9, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(557, 108);
	glVertex2i(526, 71);
	glVertex2i(596, 71);
	glEnd();

	glColor3f(0.6, 0.5, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(557, 108);
	glVertex2i(573, 165);
	glVertex2i(597, 119);
	glVertex2i(577, 89);

	glEnd();

	glColor3f(0.9, 0.9, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(557, 89);
	glVertex2i(597, 119);
	glVertex2i(637, 89);
	glEnd();
	//pies
	//costado
	glColor3f(0.6, 0.5, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(512, 248);
	glVertex2i(495, 167);
	glVertex2i(430, 219);
	glEnd();

	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(430, 219);
	glVertex2i(495, 167);
	glVertex2i(385, 150);
	glEnd();

	glColor3f(0.4, 0.4, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(430, 219);
	glVertex2i(385, 150);
	glVertex2i(306, 176);
	glEnd();

	glColor3f(0.4, 0.5, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(385, 150);
	glVertex2i(306, 176);
	glVertex2i(264, 177);
	glVertex2i(264, 160);
	glEnd();
	//fin costado

	//fin pie atras
	glColor3f(0.4, 0.4, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(264, 177);
	glVertex2i(265, 120);
	glVertex2i(233, 177);
	glEnd();

	glColor3f(0.8, 0.8, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(265, 120);
	glVertex2i(185, 100);
	glVertex2i(205, 178);
	glVertex2i(233, 177);
	glEnd();

	glColor3f(0.4, 0.3, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(182, 179);
	glVertex2i(159, 179);
	glVertex2i(114, 119);
	glEnd();

	glColor3f(0.7, 0.8, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(182, 179);
	glVertex2i(205, 178);
	glVertex2i(185, 100);
	glEnd();

	glColor3f(0.7, 0.8, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(185, 100);
	glVertex2i(265, 120);
	glVertex2i(217, 71);
	glEnd();

	glColor3f(0.8, 0.8, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(216, 70);
	glVertex2i(265, 120);
	glVertex2i(285, 70);
	glEnd();

	glColor3f(0.7, 0.7, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(182, 179);
	glVertex2i(185, 100);
	glVertex2i(114, 119);
	glEnd();

	glColor3f(0.7, 0.8, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(114, 119);
	glVertex2i(185, 100);
	glVertex2i(144, 85);
	glEnd();

	glColor3f(0.7, 0.6, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(144, 85);
	glVertex2i(185, 100);
	glVertex2i(199, 85);
	glEnd();
	//fin pie



	glFlush();
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo Tortuga");
	glutDisplayFunc(DibujarTriangulos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}