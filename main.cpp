#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
using namespace std;


int main() {
	
	
	int opcusuario, opcionmenup, tiporjordy, cantidad, tiporjuan, tiporsandra;
	int puntosjordy = 0;
	int puntosjuan = 0;
	int puntossandra = 0;
	int entregasjordy = 0;
	int entregasjuan = 0;
	int entregassandra = 0;
	char respuesta;
	
	
	do {

	printf("|||||| |||||| |||||| || |||||| ||     ||||||| ||||||| ||||||| \n");
	printf("||  || ||     ||     || ||     ||     ||   || ||   || ||   || \n");
	printf("||  || ||     ||     || ||     ||     ||   || ||   || ||   || \n");
	printf("|||||| |||||| ||     || ||     ||     ||||||| ||||||| ||||||| \n");
	printf("|| ||  ||     ||     || ||     ||     ||   || ||      ||      \n");
	printf("||  || ||     ||     || ||     ||     ||   || ||      ||      \n");
	printf("||   |||||||| |||||| || |||||| |||||| ||   || ||      ||      \n");
	printf("                                                 \n");
	
	printf("**************************RECICLAPP**************************\n");
	printf("\n");
	printf("*************************BIENVENIDOS*************************\n");
	printf("\n");
	printf("       Reducir, reutilizar y reciclar son la clave!!\n");
	printf("\n");
	printf("                       MENU \n");
	printf("\n");
	printf("1-Importancia del Reciclaje para el medio ambiente.\n");
	printf("2-Tipos de reciclaje aceptados, charlas programas y datos de interes.\n");
	printf("3-Usuarios registrados\n");
	printf("4-Estadisticas\n");
	printf("5-Recompensas.\n");
	printf("6-Salir.\n");
	printf("\n");
	printf("                                                  Version 1.1\n");
	printf("\n");
	printf("\n");
	printf("Digite una opcion.  \n");
	scanf("%d", &opcionmenup);
	
	
	
	if(opcionmenup==1){
	
	printf("\n");
	printf("1 Conservacion de recursos: Al reciclar, se pueden reutilizar materiales en \n");
	printf("lugar de extraer recursos naturales adicionales. Esto ayuda a conservar los\n");
	printf("recursos naturales como madera, minerales y agua, reduciendo así la\n");
	printf("deforestación, la minería y el consumo de agua.\n");
	printf("\n");
	printf("2 Reducción de residuos: El reciclaje ayuda a reducir la cantidad de residuos\n");
	printf("que van a los vertederos, lo que a su vez disminuye la contaminación del\n");
	printf("suelo, del agua y del aire. Al reducir la cantidad de desechos, se reduce la\n");
	printf("necesidad de nuevos vertederos y la presión sobre los ecosistemas.\n");
	printf("\n");
	printf("3 Ahorro de energia: El reciclaje a menudo requiere menos energia que la\n");
	printf("produccion de nuevos materiales a partir de recursos naturales. Por\n");
	printf("ejemplo, reciclar aluminio requiere hasta un 95% menos de energía que\n");
	printf("producir aluminio a partir de mineral de bauxita\n");
	printf("\n");
	printf("4 Reducción de emisiones de gases de efecto invernadero: La produccion\n");
	printf("de nuevos materiales a menudo conlleva la emisión de gases de efecto\n");
	printf("\n");
	printf("\n");
	printf("Desea volver al menu principal.  (S/N)\n");
	respuesta = getch();
	
}	else if (opcionmenup ==2 ) {
	
	printf("\n");
	printf("En recicla app recibimos diversos tipos de desechos que se puedan reciclar\n");
	printf("y esperamos los tipos aumenten para asi abarcar mas desechos, dentros de\n");
	printf("los tipos que se reciben actualmente estan: papel, carton, plastico y \n");
	printf("vidrio.\n");
	printf("\n");
	printf("\n");
	printf("Charlas Programadas mes de Julio.\n");
	printf("\n");
	printf("Sabado 06 de Julio 08.00 am: Charla El reciclaje, herramienta para un mejor futuro.\n");
	printf("Viernes 12 de Julio 05.00 pm: Taller Ecobloques.\n");
	printf("Sabado 20 de julio 09.30 am: Chara las tres R. \n");
	printf("Jueves 25 de julio 04.30 pm Taller manualidades con reciclaje. \n");
	printf("Mes de Agosto por definir. \n");
	printf("\n");
	printf("\n");
	printf("Datos de interes\n");
	printf("3.000 millones de personas generan 1.3 toneladas de basura al anuales.\n");
	printf("1.20 kg de basura por persona al dia. \n");
	printf("EEUU, China e India son los 3 paises que mas basura producen. \n");
	printf("Solo el 32% de las familias reciclan en los hogares. \n");
	printf("Envases plastico tardan  150 anos en biodegradarse. \n");
	printf("\n");
	printf("\n");
	printf("Desea volver al menu principal.  (S/N)\n");
	respuesta = getch();
	
} else if (opcionmenup ==3){
	do {
	
	printf("\n");
	printf("Usuarios ya registrados: \n");
	printf("\n");
	printf("1 Jordy Mora\n");
	printf("2 Juan Delgado\n");
	printf("3 Sandra rojas\n");
	printf("4 Salir al menu principal. \n");
	printf("Digite numero de usuario\n");
	scanf("%d", &opcusuario);
	
	
		if (opcusuario == 1){
			do {
			printf("Usuario Jordy Mora\n");
			printf("Tipo de reciclaje? \n");	
			printf("\n");	
			printf("1- CARTON Y PAPEL (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("2- PLASTICO(Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("3- VIDRIO(Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("4- Ver Ecopuntos acumulado de Jordy\n");	
			printf("\n");
			printf("5- SALIR\n");
			printf("Digite el nuemro de tipo\n");
			scanf("%d", &tiporjordy);
		
				switch (tiporjordy) {
            case 1:
                puntosjordy += 5;
                entregasjordy++;
                printf("\nReciclo 1kg Papel. Ha ganado 5 Ecopuntos.\n");
                break;
            case 2:
                puntosjordy += 10;
                entregasjordy++;
                printf("\nReciclo 1kg Plástico. Ha ganado 10 Ecopuntos.\n");
                break;
            case 3:
                puntosjordy += 15;
                entregasjordy++;
                printf("\nReciclo 1kg Vidrio. Ha ganado 15 Ecopuntos.\n");
                break;
            case 4:
            	printf("\nEcopuntos acumulados: %d.\n", puntosjordy );
            	printf("\nKilos: %d.\n", entregasjordy);
                break;
            case 5:
                printf("Desea volver al menu principal. (S/N)\n");
            	respuesta = getch();
            default:
            	printf("\nIntente de nuevo.\n");
                break;
			}		
			} while (tiporjordy != 5);
			
			break;
			
		} else if (opcusuario == 2){
	
				do {
			printf("Usuario Juan Delgado\n");
			printf("Tipo de reciclaje? \n");	
			printf("\n");	
			printf("1- CARTON Y PAPEL (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("2- PLASTICO (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("3- VIDRIO (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("4- Ver puntos acumulado de Juan\n");	
			printf("\n");
			printf("5- SALIR\n");
			printf("Digite el nuemro de tipo");
			scanf("%d", &tiporjuan);
		
				switch (tiporjuan) {
            case 1:
                puntosjuan += 5;
                entregasjuan++;
                printf("\nReciclo 1kg Papel. Ha ganado 5 Ecopuntos.\n");
                break;
            case 2:
                puntosjuan += 10;
                entregasjuan++;
                printf("\nReciclo 1kg Plástico. Ha ganado 10 Ecopuntos.\n");
                break;
            case 3:
                puntosjuan += 15;
                entregasjuan++;
                printf("\nReciclo 1kg Vidrio. Ha ganado 15 Ecopuntos.\n");
                break;
            case 4:
            	printf("\nEcopuntos acumulados: %d.\n", puntosjuan );
            	printf("\nKilos: %d.\n", entregasjuan);
                break;
            case 5:
                printf("Desea volver al menu principal. (S/N)\n");
            	respuesta = getch();
            default:
                printf("\nIntente de nuevo.\n");
                break;
			}		
			} while (tiporjuan != 5);
	
}		else if (opcusuario == 3){
	
				do {
			printf("Usuario Sandra rojas\n");
			printf("Tipo de reciclaje? \n");	
			printf("\n");	
			printf("1- CARTON Y PAPEL (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("2- PLASTICO (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("3- VIDRIO (Cada nuevo ingreso es quivalente a 1kg)\n");
			printf("\n");
			printf("4- Ver Ecopuntos acumulado de Sandra\n");	
			printf("\n");
			printf("5- SALIR\n");
			printf("Digite el nuemro de tipo");
			scanf("%d", &tiporsandra);
		
				switch (tiporsandra) {
             case 1:
                puntossandra += 5;
                entregassandra++;
                printf("\nReciclo 1kg Papel. Ha ganado 5 Ecopuntos.\n");
                break;
                
            case 2:
                puntossandra += 10;
                entregassandra++;
                printf("\nReciclo 1kg Plástico. Ha ganado 10 Ecopuntos.\n");
                break;
            case 3:
                puntossandra += 15;
                entregassandra++;
                printf("\nReciclo 1kg Vidrio. Ha ganado 15 Ecopuntos.\n");
                break;
            case 4:
            	printf("\nEcopuntos acumulados: %d.\n", puntossandra );
            	printf("\nKilos: %d.\n", entregassandra);
                break;
            case 5:
            	printf("Desea volver al menu principal. (S/N)\n");
            	respuesta = getch();
            default:
                printf("\nIntente de nuevo.\n");
                break;
			}		
			} while (tiporsandra != 5);
} else if (opcusuario = 4){
	printf("Desea volver al menu principal. (S/N)\n");
    respuesta = getch();
}

} while (opcusuario == 5);

}  else if (opcionmenup ==4) {

	
	printf("Estadisticas\n");
	printf("Cantidad de ecopuntos de Jordy: %d\n", puntosjordy);
	printf("Cantidad de Kilos: %d.\n", entregasjordy);
	printf("Cantidad de ecopuntos de Juan: %d\n", puntosjuan);
	printf("Cantidad de Kilos: %d.\n", entregasjuan);
	printf("Cantidad de ecopuntos de Sandra: %d\n", puntossandra);
	printf("Cantidad de Kilos: %d.\n", entregassandra);
	printf("\n");
	printf("\n");
	printf("Desea volver al menu principal. (S/N)\n");
    respuesta = getch();
    
}	else if (opcionmenup ==5){
	
	printf("De acuerdo a los ecopuntos acumulados usted podra canjearlos por los\n");
	printf("siguientes descuentos. \n");
	printf("1000 ecopuntos = 10%% descuento en Soda la Arepa.\n");
	printf("2000 ecopuntos = 15%% descuento en Restaurante El Valle. \n");
	printf("3000 ecopuntos = 10%% descuento en Repuestos El mecanico\n");
	printf("4000 ecopuntos = 15%% descuento en actividades de aventura en Aventuras del Sol.\n");
	printf("30000 ecopuntos = Tarjeta de regalo 20.000 colones.\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Desea volver al menu principal. (S/N)\n");
    respuesta = getch();
}	else if (opcionmenup ==6){
	printf("\n");
	printf("Saliendo del sistema. \n");
	break;
}


} while (respuesta == 's'|| respuesta == 'S');

	return 0;
}
