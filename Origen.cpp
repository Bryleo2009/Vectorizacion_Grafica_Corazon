/*
	------------PARTICIPACIÓN GRUPO 2-----------
	1. CUEVA DIAZ MAURO JUNIOR..............100%
	2. MORÁN VEGA BRYAN ANDRÉS..............100%
	3. PRIETO FLORES ALEXANDER ANDERSON.....100%
	4. QUISPE ARIAS GIANCARLO ENRIQUE.......100%
	5. VEGA GONZALES ALEXANDER DAVID........100%
*/

#include <GL/glut.h>
void display();
void relleno();
void guias();
void borde_ext();

GLfloat C [] = {0,0};
GLfloat D [] = {0,-214};
GLfloat E [] = {0,207};
GLfloat F [] = {114.7,-121.4};
GLfloat G [] = {191.4,-47.4};
GLfloat H [] = {260,61};

GLfloat I [] = {276.4,123.2};
GLfloat J [] = {268.2,202};
GLfloat K [] = {219.5,265};
GLfloat L [] = {142.1,289.7};
GLfloat M [] = {42,268.5};
GLfloat N [] = {-42,268.5};
GLfloat O [] = {-142.1,289.7};

GLfloat P [] = {-219.5,265};
GLfloat Q [] = {-268.2,202};
GLfloat R [] = {-276.4,123.2};
GLfloat S [] = {-260,61};
GLfloat T [] = {-191.4,-47.4};
GLfloat U [] = {-114.7,-121.4};
GLfloat V [] = {56.6,-99};

GLfloat W [] = {145.5,-18.5};
GLfloat Z [] = {189.6,65.1};
GLfloat A1 [] = {221.3,121.3};
GLfloat B1 [] = {232.6,142.5};
GLfloat C1 [] = {92.3,69.1};
GLfloat D1 [] = {200.8,153.1};
GLfloat E1 [] = {61.2,114.1};

GLfloat F1 [] = {106.9,176.3};
GLfloat G1 [] = {148.6,233.2};
GLfloat H1 [] = {-56.6,-99};
GLfloat I1 [] = {-145.5,-18.5};
GLfloat J1 [] = {-189.6,65.1};
GLfloat K1 [] = {-221.3,121.3};
GLfloat L1 [] = {-232.6,142.5};
GLfloat M1 [] = {-92.3,69.1};
GLfloat N1 [] = {-200.8,153.1};

GLfloat O1 [] = {-61.2,114.1};
GLfloat P1 [] = {-106.9,176.3};
GLfloat Q1 [] = {-148.6,233.2};

void display(){
	glClearColor(0.0f,0.0f,0.0f,0.0f);//eliminar los colores y reestructurarlos (R,V,A,Transparencia)
	glClear(GL_COLOR_BUFFER_BIT); //borra el bufer de los colores del software
	
	glLoadIdentity();//crear una identidad 	
	glOrtho(-500,500,-500,500,-500,500); //menor valor de x, mayor valor de x, menor de Y, mayor de Y
	
	//lineas punteadas
	glLineStipple(1,500); //acercamiento de puntos
	glEnable(GL_LINE_STIPPLE);
	guias();
	
	//IMG origen
	relleno();
	glDisable(GL_LINE_STIPPLE);
	borde_ext();
	
    glFlush(); //para renderizar mi proyecto
  
}

void guias(){
	
	//-----LINEAS GUIAS-----
  	{
		glColor3f(1.0f,1.0f,0.0f);//R,V,A afecta solo a las lï¿½neas
		glBegin(GL_LINES); {
			//se establecen coordenadas
			glVertex2i(-500,0); ///revisar el material de la semana para recordar esta teorï¿½a
			glVertex2i(500,0);
			glVertex2i(0,-500);
			glVertex2i(0,500);
	  	}
		glEnd();
	}
}

void borde_ext(){
	
	//-----BORDE CORAZON-----
	{
		glLineWidth(2);
		glColor3f(1.0f,1.0f,1.0f);
		glBegin(GL_LINE_LOOP); {
			glVertex2fv(D);//D   
			glVertex2fv(F);//F
			glVertex2fv(G);//G
			glVertex2fv(H);//H
			glVertex2fv(I);//I
			glVertex2fv(J);//J
			glVertex2fv(K);//K
			glVertex2fv(L);//L
			glVertex2fv(M);//M
			glVertex2fv(E);//E
			glVertex2fv(N);//N
			glVertex2fv(O);//O
			glVertex2fv(P);//P
			glVertex2fv(Q);//Q
			glVertex2fv(R);//R
			glVertex2fv(S);//S
			glVertex2fv(T);//T
			glVertex2fv(U);//U
		}
		glEnd();
	}
}

void relleno(){
		
	//------COLORES-----
	{
		glColor3f(1.00, 0.95, 0.95);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(L);//L
			glVertex2fv(G1);//G1
			glVertex2fv(K);//K
		}
		glEnd();	
		
		glColor3f(1.00, 0.87, 0.91);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(K);//K
			glVertex2fv(G1);//G1
			glVertex2fv(J);//J
		}
		glEnd();	
		
		glColor3f(1.00, 0.87, 0.91);
		glBegin(GL_TRIANGLES); {		
			glVertex2fv(M);//M
			glVertex2fv(G1);//G1
			glVertex2fv(L);//L
		}
		glEnd();
		
		
		glColor3f(1.00, 0.80, 0.80);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(E);//E
			glVertex2fv(G1);//G1
			glVertex2fv(M);//M
		}
		glEnd();
		
		glColor3f(1.00, 0.80, 0.80);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(F1);//F1
			glVertex2fv(D1);//D1
			glVertex2fv(G1);//G1
		}
		glEnd();
		
		glColor3f(1.00, 0.80, 0.80);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(D1);//D1
			glVertex2fv(B1);//B1
			glVertex2fv(J);//J
		}
		glEnd();
		
		glColor3f(1.00, 0.68, 0.75);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(E);//E
			glVertex2fv(F1);//F1
			glVertex2fv(G1);//G1		
		}
		glEnd();
		
		glColor3f(1.00, 0.68, 0.75);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(D1);//D1
			glVertex2fv(J);//J
			glVertex2fv(G1);//G1		
		}
		glEnd();
		
		glColor3f(1.00, 0.68, 0.75);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(B1);//B1
			glVertex2fv(I);//I
			glVertex2fv(J);//J		
		}
		glEnd();
		
		glColor3f(1.00, 0.85, 0.84);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(Q1);//Q1
			glVertex2fv(O);//O
			glVertex2fv(N);//N		
		}
		glEnd();
		
		glColor3f(0.99, 0.71, 0.71);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(P);//P
			glVertex2fv(Q1);//Q1
			glVertex2fv(O);//O		
		}
		glEnd();
		
		glColor3f(1.00, 0.70, 0.70);
		glBegin(GL_TRIANGLES); {		
			glVertex2fv(Q1);//Q1
			glVertex2fv(E);//E
			glVertex2fv(N);//N				
		}
		glEnd();
		
		glColor3f(1.00, 0.29, 0.31);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(Q);//Q
			glVertex2fv(Q1);//Q1	
			glVertex2fv(P);//P				
		}
		glEnd();
		
		glColor3f(1.00, 0.40, 0.40);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(Q);//Q
			glVertex2fv(N1);//N1
			glVertex2fv(Q1);//Q1				
		}
		glEnd();
		
		glColor3f(1.00, 0.16, 0.20);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(N1);//N1
			glVertex2fv(P1);//P1
			glVertex2fv(Q1);//Q1				
		}
		glEnd();
		
		glColor3f(1.00, 0.40, 0.40);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(P1);//P1
			glVertex2fv(E);//E
			glVertex2fv(Q1);//Q1				
		}
		glEnd();
		
		glColor3f(0.98, 0.61, 0.61);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(P1);//P1
			glVertex2fv(O1);//O1
			glVertex2fv(E);//E				
		}
		glEnd();
		
		glColor3f(1.00, 0.75, 0.75);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(O1);//O1
			glVertex2fv(E1);//E1
			glVertex2fv(E);//E				
		}
		glEnd();
		
		glColor3f(0.99, 0.55, 0.54);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(E1);//E1
			glVertex2fv(F1);//F1
			glVertex2fv(E);//E				
		}
		glEnd();
		
		glColor3f(0.98, 0.61, 0.60);
		glBegin(GL_QUADS); {
			glVertex2fv(E1);//E1
			glVertex2fv(C1);//C1
			glVertex2fv(D1);//D1
			glVertex2fv(F1);//F1		
		}
		glEnd();
		
		glColor3f(0.98, 0.71, 0.69);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(D1);//D1
			glVertex2fv(A1);//A1
			glVertex2fv(B1);//B1				
		}
		glEnd();
		
		glColor3f(1.00, 0.80, 0.80);
		glBegin(GL_QUADS); {
			glVertex2fv(B1);//B1
			glVertex2fv(A1);//A1
			glVertex2fv(H);//H
			glVertex2fv(I);//I		
		}
		glEnd();
		
		glColor3f(1.00, 0.50, 0.49);
		glBegin(GL_QUADS); {
			glVertex2fv(D1);//D1
			glVertex2fv(C1);//C1
			glVertex2fv(Z);//Z
			glVertex2fv(A1);//A1
		}
		glEnd();
		
		glColor3f(0.98, 0.71, 0.69);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(Z);//Z
			glVertex2fv(H);//H
			glVertex2fv(A1);//A1				
		}
		glEnd();
		
		glColor3f(0.71, 0.08, 0.11);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(R);//R
			glVertex2fv(L1);//L1
			glVertex2fv(Q);//Q			
		}
		glEnd();
		
		glColor3f(0.98, 0.01, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(L1);//L1
			glVertex2fv(N1);//N1
			glVertex2fv(Q);//Q
		}
		glEnd();
		
		glColor3f(0.99, 0.25, 0.25);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(L1);//L1
			glVertex2fv(K1);//K1
			glVertex2fv(N1);//N1
		}
		glEnd();
		
		glColor3f(1.00, 0.00, 0.00);
		glBegin(GL_QUADS); {
			glVertex2fv(N1);//N1
			glVertex2fv(M1);//M1
			glVertex2fv(O1);//O1
			glVertex2fv(P1);//P1
		}
		glEnd();
		
		glColor3f(1.00, 0.41, 0.42);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(M1);//M1
			glVertex2fv(O1);//O1
			glVertex2fv(C);//C
		}
		glEnd();
		
		glColor3f(1.00, 0.29, 0.31);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(O1);//O1
			glVertex2fv(C);//C
			glVertex2fv(E1);//E1
		}
		glEnd();
		
		glColor3f(1.00, 0.41, 0.42);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(E1);//E1
			glVertex2fv(C);//C
			glVertex2fv(C1);//C1
		}
		glEnd();
		
		glColor3f(1.00, 0.55, 0.55);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(C1);//C1
			glVertex2fv(C);//C
			glVertex2fv(W);//W
		}
		glEnd();
		
		glColor3f(0.98, 0.71, 0.69);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(C1);//C1
			glVertex2fv(W);//W
			glVertex2fv(Z);//Z
		}
		glEnd();
		
		glColor3f(01.00, 0.80, 0.80);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(Z);//Z
			glVertex2fv(W);//W
			glVertex2fv(H);//H
		}
		glEnd();
		
		glColor3f(0.99, 0.71, 0.71);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(H);//H
			glVertex2fv(W);//W
			glVertex2fv(G);//G	
		}
		glEnd();
		
		glColor3f(0.72, 0.17, 0.15);
		glBegin(GL_QUADS); {
			glVertex2fv(K1);//K1
			glVertex2fv(L1);//L1
			glVertex2fv(R);//R
			glVertex2fv(S);//S
		}
		glEnd();
		
		glColor3f(0.98, 0.26, 0.26);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(K1);//K1
			glVertex2fv(S);//S
			glVertex2fv(J1);//J1
		}
		glEnd();
		
		glColor3f(1.00, 0.40, 0.40);
		glBegin(GL_QUADS); {
			glVertex2fv(M1);//M1
			glVertex2fv(N1);//N1		
			glVertex2fv(K1);//K1
			glVertex2fv(J1);//J1
		}
		glEnd();
		
		glColor3f(0.51, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(S);//S
			glVertex2fv(T);//T
			glVertex2fv(I1);//I1
		}
		glEnd();
		
		glColor3f(0.75, 0.01, 0.01);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(J1);//J1
			glVertex2fv(S);//S
			glVertex2fv(I1);//I1
		}
		glEnd();
		
		glColor3f(1.00, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(M1);//M1
			glVertex2fv(J1);//J1
			glVertex2fv(I1);//I1
		}
		glEnd();
		
		glColor3f(1.00, 0.20, 0.20);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(C);//C
			glVertex2fv(M1);//M1
			glVertex2fv(I1);//I1
		}
		glEnd();
		
		glColor3f(0.54, 0.13, 0.14);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(I1);//I1
			glVertex2fv(T);//T
			glVertex2fv(U);//U
		}
		glEnd();
		
		glColor3f(0.90, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(I1);//I1
			glVertex2fv(U);//U
			glVertex2fv(H1);//H1
		}
		glEnd();
		
		glColor3f(1.00, 0.25, 0.25);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(C);//C
			glVertex2fv(I1);//I1
			glVertex2fv(H1);//H1
		}
		glEnd();
		
		glColor3f(0.86, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(C);//C
			glVertex2fv(H1);//H1
			glVertex2fv(V);//V
		}
		glEnd();
		
		glColor3f(1.00, 0.50, 0.49);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(W);//W
			glVertex2fv(C);//C
			glVertex2fv(V);//V
		}
		glEnd();
		
		glColor3f(0.97, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(W);//W
			glVertex2fv(V);//V
			glVertex2fv(F);//F
		}
		glEnd();
		
		glColor3f(0.98, 0.26, 0.25);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(G);//G
			glVertex2fv(W);//W
			glVertex2fv(F);//F
		}
		glEnd();
		
		glColor3f(0.50, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(D);//D
			glVertex2fv(H1);//H1
			glVertex2fv(U);//U
		}
		glEnd();
		
		glColor3f(0.60, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(D);//D
			glVertex2fv(V);//V
			glVertex2fv(H1);//H1
		}
		glEnd();
		
		glColor3f(0.74, 0.00, 0.00);
		glBegin(GL_TRIANGLES); {
			glVertex2fv(F);//F
			glVertex2fv(V);//V
			glVertex2fv(D);//D
		}
		glEnd();
	}
}

int main(int argc, char** argv) {
	glutInit(&argc,argv); //inicia glut
	glutInitWindowSize(800,800); //tamaï¿½o de la ventana
	glutInitWindowPosition(0,0); //posiciï¿½n de la ventana
	glutCreateWindow("T1 - Origen"); //nombre de la ventana
	glutDisplayFunc(display); //llamada a la funciï¿½n de renderizaciï¿½n
	glutMainLoop(); //repite mi cï¿½digo constantemente	
	return 0;
}
