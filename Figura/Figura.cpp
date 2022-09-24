#include "Figura.h"



int Figura::init(){

	int tipo=rand()%3+1;//tip genera un numero random entre 1 y 3
	return tipo;//retorna a tipo
	
	int color=rand()%15+1;//col genera un numero random entre 1 y 15
	return color;//retorna a color
}

void Figura::dibujar(){//dibuja las figuras
	int x1,y1,x2,y2,x3,y3,cx,cy,radio;
	
	
	switch(tipo){//depende de tipo cual figura debe dibujar
	
		case 1://si tipo es = 1 dibuja un circulo
			cx=rand()%(getmaxwidth()/2)+1;
			cy=rand()%(getmaxheight()/2)+1;
			radio=rand()%150+1;
			setcolor(color);//establece el colo de la figura mediante el numero que le indique la variable color
			circle(cx,cy,radio);
			cout<<"circulo="<<" x:"<<cx<<" y:"<<cy<<" radio:"<<radio<<" color:"<<color<<endl<<endl;
			break;
		case 2://si tipo es = 2 dibuja un rectangulo 
			x1=rand()%(getmaxwidth()/2)+1;
			y1=rand()%(getmaxheight()/2)+1;
			x2=x1+rand()%100;
			y2=y2+rand()%200;
			
			setcolor(color);//establece el colo de la figura mediante el numero que le indique la variable color
			rectangle(x1,y1,x2,y2);
			cout<<"rectangulo= "<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" color:"<<color<<endl<<endl;
			break;
		case 3://si tipo es = 3 dibuja un triangulo
			x1 = rand()%(getmaxwidth()/2)+1;
 			y1 = rand()%(getmaxheight()/2)+1;
 			x2 = x1 -rand()%100;
 			y2 = y1 +rand()%300;
 			x3 = x1 +rand()%900;
 			y3 = y1 +rand()%650;
			setcolor(color);//establece el colo de la figura mediante el numero que le indique la variable color
			moveto(x1,y1);//se coloca en un punto imagunario para comenzar a trazar el triangulo
			lineto(x2,y2);//traza linea a segundo punto del trangulo
			lineto(x3,y3);//traza otra linea
			lineto(x1,y1);//traza ultima linea del triangulo
			cout<<"triangulo= "<<"x1:"<<x1<<" y1:"<<y1<<" x2:"<<x2<<" y2:"<<y2<<" x3:"<<x3<<" y3:"<<y3<<" color:"<<color<<endl<<endl;
			break;
		
	}
	
	

}
