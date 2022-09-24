#include "Programa.h"


void Programa::run(){
	
	cout<<"" 
        "\n  " 
        "\n"
        "\n"
        "\nProfesor: " 
        "\n\n"
	<<endl; 	
	setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
	srand(time(NULL));//semilla evita que se siga la misma secuencia de numeros
   	initwindow(getmaxwidth(),getmaxheight(),"Ventana Gráfica",0,0,false,true);//Abre y establece los valores
    																			//maximos de alto*ancho de la pantalla 
   	setcolor(WHITE);//da el color a las letras 
    outtextxy(0,0,"Presione una tecla para cerrar");
    		
	for(int i=0;i<100;i++){
		vecF[i].init();
		vecF[i].dibujar();
	}
    getch();
	closegraph();
		

	
}


