#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<locale.h>


int main()
{
    int A;
    setlocale(LC_ALL,"spanish"); 
	system("color f5");
    printf("�ngel Cantero                       15 de Agosto 2023"
	" \n\nAlgoritmos y programaci�n           Historia de las computadoras"
	"\n\nPara conocer la historia de las computadroas presiona 1"
	"\n\nSi no te interesa presiona 2\n\n");
	scanf("%i",&A);
	system("cls");
	if (A==1)
	{
	printf("�ngel Cantero                       15 de Agosto 2023"
	" \n\nAlgoritmos y programaci�n           Historia de las computadoras"
	"\n\nPrimera Generaci�n (1940s-1950s): \n"
"	Usaban valvulas de vacio para la logica y el almacenamiento de datos.\n "   
"	Eran enormes, ocupaban salas enteras y generaban mucho calor. \n"             
"	Requerian un mantenimiento constante debido a la fragilidad de las valvulas.\n"
"Segunda Generaci�n (1950s-1960s):\n"
"	Introducci�n de transistores en lugar de valvulas, lo que redujo el tama�o y el calor generado.\n"
"	Uso de la memoria de n�cleo magn�tico para almacenar datos de manera m�s confiable.\n"
"	Aparici�n de lenguajes de programacion de alto nivel como COBOL y FORTRAN.\n"
"Tercera Generaci�n (1960s-1970s):\n"
"	Desarrollo de circuitos integrados (ICs) que contenian multiples componentes en un solo chip.\n"
"	Uso de minicomputadoras mas asequibles y accesibles para tareas empresariales y cientificas.\n"
"	Establecimiento de sistemas operativos y lenguajes de programacion mas sofisticados.\n"
"Cuarta Generaci�n (1970s-1980s):\n"
"	Invencion del microprocesador, que incorporaba toda la unidad central de procesamiento (CPU) en un solo chip.\n"
"	Auge de las computadoras personales (PCs) y la computacion descentralizada.\n"
"	Desarrollo de interfaces graficas de usuario (GUI) y sistemas operativos mas amigables.\n"
"Quinta Generaci�n (1980s-Presente):\n"
"	Enfoque en la inteligencia artificial (IA) y sistemas expertos.\n"
"	Avances en redes y comunicaciones, que llevaron a Internet y la World Wide Web.\n"
"	Mayor enf�sis en la miniaturizaci�n y la movilidad de dispositivos, como los tel�fonos inteligentes.\n"
);
    }
   else
   {
   	printf("bueno");
   }
	return 0;
	
}
